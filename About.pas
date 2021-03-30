unit About;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  AboutMicChatRevivedEdition = class(Form)
    procedure linkLabel1_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
    procedure openLink(sender: Object; e: LinkLabelLinkClickedEventArgs);
  {$region FormDesigner}
  private
    {$resource About.AboutMicChatRevivedEdition.resources}
    linkLabel1: LinkLabel;
    tabControl1: TabControl;
    tabPage1: TabPage;
    richTextBox1: RichTextBox;
    maksim_link: LinkLabel;
    pictureBox1: PictureBox;
    {$include About.AboutMicChatRevivedEdition.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure AboutMicChatRevivedEdition.linkLabel1_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
begin
  exec('https://www.youtube.com/channel/UCxFymvUt5FeMevOUEOfmcLA');
end;

procedure AboutMicChatRevivedEdition.openLink(sender: Object; e: LinkLabelLinkClickedEventArgs);
begin
  exec('https://www.vk.com/maksim.mshp');
end;

end.
