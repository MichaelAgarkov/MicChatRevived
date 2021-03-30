program MicChatServer;

uses
  System, System.Net, System.Net.Sockets, System.IO, System.Threading, crt;

type
  TByteArray = array of byte;

var
  client: array [1..64] of TCPClient;
  s_str: array [1..64] of NetworkStream;
  s_raw: TByteArray;
  listener: system.Net.Sockets.TcpListener;
  s_ip, msg, nowdate, cl_str: string;
  s_port, length, i, n: integer;
  thr: array [1..64] of thread;
  thr_s: thread;
  ErrorOccured: boolean = false;
  Connected: boolean = false;

procedure chat(data: object);
var
  i, err: integer;
  name: string;
begin
  Val(data.ToString, i, err);
  s_str[i] := client[i].GetStream;
  length := s_str[i].Read(s_raw, 0, s_raw.Length);
  name := System.Text.Encoding.Default.GetString(s_raw, 0, length);
  textcolor(3);
  writeln('Has client ', name, '.');
  textcolor(2);
  msg := Concat('Welcome to the server ', s_ip, ', ', name, '!');
  s_str[i].Write(System.Text.Encoding.Default.GetBytes(msg), 0, msg.Length);
  repeat
      while true do 
      begin
        length := s_str[i].Read(s_raw, 0, s_raw.Length);
        cl_str := System.Text.Encoding.Default.GetString(s_raw, 0, length);
        writeln(name, ': ', cl_str);
        for j: integer := 1 to n do
        begin
          s_str[j] := client[j].GetStream;
          msg := name + ': ' + cl_str{+#13#10};
          if s_str[j].CanWrite then
            s_str[j].Write(System.Text.Encoding.Default.GetBytes(msg), 0, msg.Length)
          else
            writeln('Error. Cannot send the message to the client.');
        end;
      end;
 until false;
end;


begin
  System.Console.Title := 'MicChat Revived Edition Server';
  s_raw := TByteArray(System.Array.CreateInstance(typeof(byte), 1024));
  textcolor(2);
  write('MicChat Revived Edition');
  writeln;
  write('Version 1.1');
  writeln;
  write('Server');
  repeat
    begin
      try
        textcolor(2);
        writeln;
        write('Enter IP: ');
        readln(s_ip);
        write('Enter port: ');
        readln(s_port);
        listener := TCPListener.Create(IPAddress.Parse(s_ip), s_port);
        listener.Start(64);
        textcolor(2);
        writeln('Ready. Waiting for connection...');
        Connected := true;
      except
        textcolor(4);
        writeln('Error');
        sleep(1000);
        ErrorOccured := true;
      end;
      i := 0;
      if(ErrorOccured = false) then while true do
        if listener.Pending then
        begin
          i += 1;
          n := i;
          client[i] := listener.AcceptTcpClient();
          thr[i] := new Thread(chat);
          thr[i].Start(i);
        end;
    end until Connected;
end.