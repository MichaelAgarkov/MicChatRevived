program MicChatClient;

uses
  System, System.Net, System.Net.Sockets, System.IO, System.Threading, crt;

type
  TByteArray = array of byte;

var
  client: TCPClient;
  s_str: NetworkStream;
  s_raw: TByteArray;
  s_ip, cl_str, cl_stro, name: string;
  s_port, length: integer;
  thr_s, thr_r: Thread;

procedure send;
begin
  while true do
  begin
    readln(cl_str);
    s_str.Write(System.Text.Encoding.Default.GetBytes(cl_str), 0, cl_str.Length);
  end;
end;

procedure read;
begin
  while true do
  begin
    length := s_str.Read(s_raw, 0, s_raw.Length);
    cl_stro := System.Text.Encoding.Default.GetString(s_raw, 0, length);
    writeln(cl_stro);
  end;
end;

begin
  System.Console.Title := 'MicChat Revived Edition Client';
  s_raw := TByteArray(System.Array.CreateInstance(typeof(byte), 1024));
  textcolor(2);
  write('MicChat Revived Edition [Client]');
  writeln;
  write('Version 1.1');
  repeat
    begin
      try
        textcolor(3);
        writeln;
        write('Enter IP: ');
        textcolor(7);
        readln(s_ip);
        textcolor(3);
        write('Enter port: ');
        textcolor(7);
        readln(s_port);
      except
        textcolor(4);
        writeln('Error');
        sleep(1000);
      end;
      textcolor(2);
      try
        client := TCPClient.Create;
        client.Connect(ipAddress.Parse(s_ip), s_port);
        if client.Connected = true then
        begin
          textcolor(3);
          write('Enter name: ');
          textcolor(7);
          readln(name);
          textcolor(2);
          s_str := client.GetStream;
          s_str.Write(System.Text.Encoding.Default.GetBytes(name), 0, name.Length);
          writeln('Connected to ', s_ip);
          length := s_str.Read(s_raw, 0, s_raw.Length);
          cl_str := System.Text.Encoding.Default.GetString(s_raw, 0, length);
          writeln(cl_str);
          thr_s := new Thread(send);
          thr_s.Start;
          thr_r := new Thread(read);
          thr_r.Start;
        end;
      except
        if client.Connected = false then
        begin
          textcolor(4);
          writeln('Failed to connect.');
          sleep(1000);
        end;
      end;
    end until client.Connected;
end.