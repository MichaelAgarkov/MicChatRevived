unit Settings;

interface

uses System, System.Drawing, System.Windows.Forms, Microsoft.Win32, UTATAR;

var
  setting1, setting2, setting3:string;

type
  SettingsForm = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure treeView1_AfterSelect(sender: Object; e: TreeViewEventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure button5_Click(sender: Object; e: EventArgs);
    procedure SettingsForm_Load(sender: Object; e: EventArgs);
    procedure button6_Click(sender: Object; e: EventArgs);
    procedure button7_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Settings.SettingsForm.resources}
    panel1: Panel;
    panel2: Panel;
    button3: Button;
    button2: Button;
    button1: Button;
    panel3: Panel;
    pictureBox1: PictureBox;
    label1: &Label;
    label2: &Label;
    imageList1: ImageList;
    components: System.ComponentModel.IContainer;
    pictureBox2: PictureBox;
    panel4: Panel;
    button4: Button;
    button5: Button;
    checkBox1: CheckBox;
    checkBox2: CheckBox;
    checkBox3: CheckBox;
    panel5: Panel;
    label3: &Label;
    panel6: Panel;
    label4: &Label;
    pictureBox4: PictureBox;
    pictureBox3: PictureBox;
    button6: Button;
    button7: Button;
    treeView1: TreeView;
    {$include Settings.SettingsForm.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure SettingsForm.button1_Click(sender: Object; e: EventArgs);
begin
  WriteLines(Environment.GetCommandLineArgs[0].Replace('MicChat.exe', '') + 'settings1.cfg', checkBox1.Checked.ToString.Split);
  WriteLines(Environment.GetCommandLineArgs[0].Replace('MicChat.exe', '') + 'settings2.cfg', checkBox2.Checked.ToString.Split);
  WriteLines(Environment.GetCommandLineArgs[0].Replace('MicChat.exe', '') + 'settings3.cfg', checkBox3.Checked.ToString.Split);
  try
    if(checkBox3.Checked) then begin
      var Reg := Registry.LocalMachine.CreateSubKey('Software\Microsoft\Windows\CurrentVersion\Run');
      Reg.SetValue('MicChat', GetEXEFileName);
      Reg.Close;
    end else begin
      var Reg := Registry.LocalMachine.CreateSubKey('Software\Microsoft\Windows\CurrentVersion\Run');
      Reg.DeleteValue('MicChat');
      Reg.Close;
    end;
  except
    WriteLines(Environment.GetCommandLineArgs[0].Replace('MicChat.exe', '') + 'settings3.cfg', 'False'.Split);
    Form(new UTATARForm).show;
  end;
  Close;
end;

procedure SettingsForm.button2_Click(sender: Object; e: EventArgs);
begin
  WriteLines(Environment.GetCommandLineArgs[0].Replace('MicChat.exe', '') + 'settings1.cfg', checkBox1.Checked.ToString.Split);
  WriteLines(Environment.GetCommandLineArgs[0].Replace('MicChat.exe', '') + 'settings2.cfg', checkBox2.Checked.ToString.Split);
  WriteLines(Environment.GetCommandLineArgs[0].Replace('MicChat.exe', '') + 'settings3.cfg', checkBox3.Checked.ToString.Split);
  try
    if(checkBox3.Checked) then begin
      var Reg := Registry.LocalMachine.CreateSubKey('Software\Microsoft\Windows\CurrentVersion\Run');
      Reg.SetValue('MicChat', GetEXEFileName);
      Reg.Close;
    end else begin
      var Reg := Registry.LocalMachine.CreateSubKey('Software\Microsoft\Windows\CurrentVersion\Run');
      Reg.DeleteValue('MicChat');
      Reg.Close;
    end;
  except
    WriteLines(Environment.GetCommandLineArgs[0].Replace('MicChat.exe', '') + 'settings3.cfg', 'False'.Split);
    Form(new UTATARForm).show;
  end;
end;

procedure SettingsForm.button3_Click(sender: Object; e: EventArgs);
begin
  Close;
end;

procedure SettingsForm.treeView1_AfterSelect(sender: Object; e: TreeViewEventArgs);
begin
  if(treeView1.SelectedNode = treeView1.Nodes[0]) then
  begin
    panel3.Visible := true;
    panel4.Visible := false;
    panel5.Visible := false;
    panel6.Visible := false;
    pictureBox1.Visible := true;
    pictureBox2.Visible := false;
    pictureBox3.Visible := false;
    pictureBox4.Visible := false;
    label1.Text := 'General';
    label2.Text := 'The general settings for the program';
  end;
  if(treeView1.SelectedNode = treeView1.Nodes[1]) then
  begin
    pictureBox3.Visible := true;
    pictureBox1.Visible := false;
    pictureBox2.Visible := false;
    pictureBox4.Visible := false;
    panel5.Visible := true;
    panel3.Visible := false;
    panel4.Visible := false;
    panel6.Visible := false;
    label1.Text := 'Client';
    label2.Text := 'The MicChat client settings';
  end;
  if(treeView1.SelectedNode = treeView1.Nodes[2]) then
  begin
    pictureBox4.Visible := true;
    pictureBox1.Visible := false;
    pictureBox2.Visible := false;
    pictureBox3.Visible := false;
    panel6.Visible := true;
    panel3.Visible := false;
    panel4.Visible := false;
    panel5.Visible := false;
    label1.Text := 'Server';
    label2.Text := 'The MicChat server settings';
  end;
  if(treeView1.SelectedNode = treeView1.Nodes[3]) then
  begin
    pictureBox2.Visible := true;
    pictureBox1.Visible := false;
    pictureBox3.Visible := false;
    pictureBox4.Visible := false;
    panel4.Visible := true;
    panel3.Visible := false;
    panel5.Visible := false;
    panel6.Visible := false;
    label1.Text := 'Advanced';
    label2.Text := 'The advanced program settings';
  end;
end;

procedure SettingsForm.button4_Click(sender: Object; e: EventArgs);
begin
  checkBox1.Checked := true;
  checkBox2.Checked := false;
end;

procedure SettingsForm.button5_Click(sender: Object; e: EventArgs);
begin
  checkBox3.Checked := false;
end;

procedure SettingsForm.SettingsForm_Load(sender: Object; e: EventArgs);
begin
  try
    var Settings1File := new System.IO.StreamReader(Environment.GetCommandLineArgs[0].Replace('MicChat.exe', '') + 'settings1.cfg', System.Text.Encoding.Default);
    setting1 := Settings1File.ReadLine;
    Settings1File.Close;
  except
    checkBox1.Checked := true;
  end;
  try
    var Settings2File := new System.IO.StreamReader(Environment.GetCommandLineArgs[0].Replace('MicChat.exe', '') + 'settings2.cfg', System.Text.Encoding.Default);
    setting2 := Settings2File.ReadLine;
    Settings2File.Close;
  except
    checkBox2.Checked := false;
  end;
  try
    var Settings3File := new System.IO.StreamReader(Environment.GetCommandLineArgs[0].Replace('MicChat.exe', '') + 'settings3.cfg', System.Text.Encoding.Default);
    setting3 := Settings3File.ReadLine;
    Settings3File.Close;
  except
    checkBox3.Checked := false;
  end;
  if(setting1 = 'True') then checkBox1.Checked := true;
  if(setting1 = 'False') then checkBox1.Checked := false;
  if(setting2 = 'True') then checkBox2.Checked := true;
  if(setting2 = 'False') then checkBox2.Checked := false;
  if(setting3 = 'True') then checkBox3.Checked := true;
  if(setting3 = 'False') then checkBox3.Checked := false;
end;

procedure SettingsForm.button6_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure SettingsForm.button7_Click(sender: Object; e: EventArgs);
begin
  
end;

end.
