procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(ContribForm));
        var treeNode11: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('Michael Agarkov');
        var treeNode12: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('Maksim Chernyshkov');
        self.panel1 := new System.Windows.Forms.Panel();
        self.pictureBox2 := new System.Windows.Forms.PictureBox();
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.label1 := new System.Windows.Forms.Label();
        self.treeView1 := new System.Windows.Forms.TreeView();
        self.panel2 := new System.Windows.Forms.Panel();
        self.button1 := new System.Windows.Forms.Button();
        self.panel3 := new System.Windows.Forms.Panel();
        self.linkLabel5 := new System.Windows.Forms.LinkLabel();
        self.linkLabel3 := new System.Windows.Forms.LinkLabel();
        self.linkLabel2 := new System.Windows.Forms.LinkLabel();
        self.linkLabel1 := new System.Windows.Forms.LinkLabel();
        self.label2 := new System.Windows.Forms.Label();
        self.panel4 := new System.Windows.Forms.Panel();
        self.linkLabel4 := new System.Windows.Forms.LinkLabel();
        self.linkLabel6 := new System.Windows.Forms.LinkLabel();
        self.label3 := new System.Windows.Forms.Label();
        self.linkLabel7 := new System.Windows.Forms.LinkLabel();
        self.linkLabel8 := new System.Windows.Forms.LinkLabel();
        self.linkLabel9 := new System.Windows.Forms.LinkLabel();
        self.linkLabel10 := new System.Windows.Forms.LinkLabel();
        self.linkLabel11 := new System.Windows.Forms.LinkLabel();
        self.panel1.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        self.panel2.SuspendLayout();
        self.panel3.SuspendLayout();
        self.panel4.SuspendLayout();
        self.SuspendLayout();
        // 
        // panel1
        // 
        self.panel1.BackgroundImage := (System.Drawing.Image(resources.GetObject('panel1.BackgroundImage')));
        self.panel1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.panel1.Controls.Add(self.pictureBox2);
        self.panel1.Controls.Add(self.pictureBox1);
        self.panel1.Controls.Add(self.label1);
        self.panel1.Dock := System.Windows.Forms.DockStyle.Top;
        self.panel1.Location := new System.Drawing.Point(0, 0);
        self.panel1.Name := 'panel1';
        self.panel1.Size := new System.Drawing.Size(384, 55);
        self.panel1.TabIndex := 0;
        // 
        // pictureBox2
        // 
        self.pictureBox2.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox2.BorderStyle := System.Windows.Forms.BorderStyle.FixedSingle;
        self.pictureBox2.Image := (System.Drawing.Image(resources.GetObject('pictureBox2.Image')));
        self.pictureBox2.Location := new System.Drawing.Point(3, 3);
        self.pictureBox2.Name := 'pictureBox2';
        self.pictureBox2.Size := new System.Drawing.Size(49, 49);
        self.pictureBox2.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox2.TabIndex := 3;
        self.pictureBox2.TabStop := false;
        self.pictureBox2.Visible := false;
        // 
        // pictureBox1
        // 
        self.pictureBox1.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox1.BorderStyle := System.Windows.Forms.BorderStyle.FixedSingle;
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(3, 3);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(49, 49);
        self.pictureBox1.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox1.TabIndex := 2;
        self.pictureBox1.TabStop := false;
        // 
        // label1
        // 
        self.label1.BackColor := System.Drawing.Color.Transparent;
        self.label1.Font := new System.Drawing.Font('Segoe UI', 11.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.ForeColor := System.Drawing.Color.White;
        self.label1.Location := new System.Drawing.Point(58, 3);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(314, 49);
        self.label1.TabIndex := 0;
        self.label1.Text := 'Michael Agarkov';
        self.label1.TextAlign := System.Drawing.ContentAlignment.MiddleLeft;
        // 
        // treeView1
        // 
        self.treeView1.Dock := System.Windows.Forms.DockStyle.Left;
        self.treeView1.Location := new System.Drawing.Point(0, 55);
        self.treeView1.Name := 'treeView1';
        treeNode11.Name := 'Узел0';
        treeNode11.Text := 'Michael Agarkov';
        treeNode12.Name := 'Узел1';
        treeNode12.Text := 'Maksim Chernyshkov';
        self.treeView1.Nodes.AddRange(new System.Windows.Forms.TreeNode[2](treeNode11, treeNode12));
        self.treeView1.Size := new System.Drawing.Size(137, 246);
        self.treeView1.TabIndex := 1;
        self.treeView1.AfterSelect += treeView1_AfterSelect;
        // 
        // panel2
        // 
        self.panel2.BackgroundImage := (System.Drawing.Image(resources.GetObject('panel2.BackgroundImage')));
        self.panel2.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.panel2.Controls.Add(self.button1);
        self.panel2.Dock := System.Windows.Forms.DockStyle.Bottom;
        self.panel2.Location := new System.Drawing.Point(137, 272);
        self.panel2.Name := 'panel2';
        self.panel2.Size := new System.Drawing.Size(247, 29);
        self.panel2.TabIndex := 2;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(169, 3);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 0;
        self.button1.Text := 'OK';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // panel3
        // 
        self.panel3.Controls.Add(self.linkLabel11);
        self.panel3.Controls.Add(self.linkLabel5);
        self.panel3.Controls.Add(self.linkLabel3);
        self.panel3.Controls.Add(self.linkLabel2);
        self.panel3.Controls.Add(self.linkLabel1);
        self.panel3.Controls.Add(self.label2);
        self.panel3.Dock := System.Windows.Forms.DockStyle.Fill;
        self.panel3.Location := new System.Drawing.Point(137, 55);
        self.panel3.Name := 'panel3';
        self.panel3.Size := new System.Drawing.Size(247, 217);
        self.panel3.TabIndex := 3;
        // 
        // linkLabel5
        // 
        self.linkLabel5.LinkArea := new System.Windows.Forms.LinkArea(18, 15);
        self.linkLabel5.Location := new System.Drawing.Point(6, 131);
        self.linkLabel5.Name := 'linkLabel5';
        self.linkLabel5.Size := new System.Drawing.Size(238, 17);
        self.linkLabel5.TabIndex := 4;
        self.linkLabel5.TabStop := true;
        self.linkLabel5.Text := 'Michael Agarkov''s Email';
        self.linkLabel5.UseCompatibleTextRendering := true;
        self.linkLabel5.LinkClicked += linkLabel5_LinkClicked;
        // 
        // linkLabel3
        // 
        self.linkLabel3.LinkArea := new System.Windows.Forms.LinkArea(18, 6);
        self.linkLabel3.Location := new System.Drawing.Point(6, 182);
        self.linkLabel3.Name := 'linkLabel3';
        self.linkLabel3.Size := new System.Drawing.Size(238, 15);
        self.linkLabel3.TabIndex := 3;
        self.linkLabel3.TabStop := true;
        self.linkLabel3.Text := 'Michael Agarkov''s GitHub';
        self.linkLabel3.UseCompatibleTextRendering := true;
        self.linkLabel3.LinkClicked += linkLabel3_LinkClicked;
        // 
        // linkLabel2
        // 
        self.linkLabel2.LinkArea := new System.Windows.Forms.LinkArea(18, 14);
        self.linkLabel2.Location := new System.Drawing.Point(6, 165);
        self.linkLabel2.Name := 'linkLabel2';
        self.linkLabel2.Size := new System.Drawing.Size(238, 15);
        self.linkLabel2.TabIndex := 2;
        self.linkLabel2.TabStop := true;
        self.linkLabel2.Text := 'Michael Agarkov''s Discord server';
        self.linkLabel2.UseCompatibleTextRendering := true;
        self.linkLabel2.LinkClicked += linkLabel2_LinkClicked;
        // 
        // linkLabel1
        // 
        self.linkLabel1.LinkArea := new System.Windows.Forms.LinkArea(18, 15);
        self.linkLabel1.Location := new System.Drawing.Point(6, 148);
        self.linkLabel1.Name := 'linkLabel1';
        self.linkLabel1.Size := new System.Drawing.Size(238, 17);
        self.linkLabel1.TabIndex := 1;
        self.linkLabel1.TabStop := true;
        self.linkLabel1.Text := 'Michael Agarkov''s YouTube Channel';
        self.linkLabel1.UseCompatibleTextRendering := true;
        self.linkLabel1.LinkClicked += linkLabel1_LinkClicked;
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(6, 6);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(238, 125);
        self.label2.TabIndex := 0;
        self.label2.Text := '• Original creator of this project'#13#10'• Creator and designer of this whole launcher'#13#10'• Created MicChat classic and Revived v1.1 entirely himself'#13#10'• Wrote the EULA';
        // 
        // panel4
        // 
        self.panel4.Controls.Add(self.linkLabel10);
        self.panel4.Controls.Add(self.linkLabel9);
        self.panel4.Controls.Add(self.linkLabel8);
        self.panel4.Controls.Add(self.linkLabel7);
        self.panel4.Controls.Add(self.linkLabel4);
        self.panel4.Controls.Add(self.linkLabel6);
        self.panel4.Controls.Add(self.label3);
        self.panel4.Dock := System.Windows.Forms.DockStyle.Fill;
        self.panel4.Location := new System.Drawing.Point(137, 55);
        self.panel4.Name := 'panel4';
        self.panel4.Size := new System.Drawing.Size(247, 217);
        self.panel4.TabIndex := 4;
        self.panel4.Visible := false;
        // 
        // linkLabel4
        // 
        self.linkLabel4.LinkArea := new System.Windows.Forms.LinkArea(21, 6);
        self.linkLabel4.Location := new System.Drawing.Point(6, 199);
        self.linkLabel4.Name := 'linkLabel4';
        self.linkLabel4.Size := new System.Drawing.Size(238, 15);
        self.linkLabel4.TabIndex := 3;
        self.linkLabel4.TabStop := true;
        self.linkLabel4.Text := 'Maksim Chernyshkov''s GitHub';
        self.linkLabel4.UseCompatibleTextRendering := true;
        self.linkLabel4.LinkClicked += linkLabel4_LinkClicked;
        // 
        // linkLabel6
        // 
        self.linkLabel6.LinkArea := new System.Windows.Forms.LinkArea(21, 2);
        self.linkLabel6.Location := new System.Drawing.Point(6, 182);
        self.linkLabel6.Name := 'linkLabel6';
        self.linkLabel6.Size := new System.Drawing.Size(238, 17);
        self.linkLabel6.TabIndex := 1;
        self.linkLabel6.TabStop := true;
        self.linkLabel6.Text := 'Maksim Chernyshkov''s VK';
        self.linkLabel6.UseCompatibleTextRendering := true;
        self.linkLabel6.LinkClicked += linkLabel6_LinkClicked;
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(6, 6);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(238, 108);
        self.label3.TabIndex := 0;
        self.label3.Text := '• Joined in version 1.2'#13#10'• Gives lots of good ideas'#13#10'• Made enhancements to the client in 1.2';
        // 
        // linkLabel7
        // 
        self.linkLabel7.LinkArea := new System.Windows.Forms.LinkArea(21, 7);
        self.linkLabel7.Location := new System.Drawing.Point(6, 114);
        self.linkLabel7.Name := 'linkLabel7';
        self.linkLabel7.Size := new System.Drawing.Size(238, 17);
        self.linkLabel7.TabIndex := 4;
        self.linkLabel7.TabStop := true;
        self.linkLabel7.Text := 'Maksim Chernyshkov''s Website';
        self.linkLabel7.UseCompatibleTextRendering := true;
        self.linkLabel7.LinkClicked += linkLabel7_LinkClicked;
        // 
        // linkLabel8
        // 
        self.linkLabel8.LinkArea := new System.Windows.Forms.LinkArea(21, 9);
        self.linkLabel8.Location := new System.Drawing.Point(6, 131);
        self.linkLabel8.Name := 'linkLabel8';
        self.linkLabel8.Size := new System.Drawing.Size(238, 17);
        self.linkLabel8.TabIndex := 5;
        self.linkLabel8.TabStop := true;
        self.linkLabel8.Text := 'Maksim Chernyshkov''s Instagram';
        self.linkLabel8.UseCompatibleTextRendering := true;
        self.linkLabel8.LinkClicked += linkLabel8_LinkClicked;
        // 
        // linkLabel9
        // 
        self.linkLabel9.LinkArea := new System.Windows.Forms.LinkArea(21, 9);
        self.linkLabel9.Location := new System.Drawing.Point(6, 148);
        self.linkLabel9.Name := 'linkLabel9';
        self.linkLabel9.Size := new System.Drawing.Size(238, 17);
        self.linkLabel9.TabIndex := 6;
        self.linkLabel9.TabStop := true;
        self.linkLabel9.Text := 'Maksim Chernyshkov''s Twitter';
        self.linkLabel9.UseCompatibleTextRendering := true;
        self.linkLabel9.LinkClicked += linkLabel9_LinkClicked;
        // 
        // linkLabel10
        // 
        self.linkLabel10.LinkArea := new System.Windows.Forms.LinkArea(21, 9);
        self.linkLabel10.Location := new System.Drawing.Point(6, 165);
        self.linkLabel10.Name := 'linkLabel10';
        self.linkLabel10.Size := new System.Drawing.Size(238, 17);
        self.linkLabel10.TabIndex := 7;
        self.linkLabel10.TabStop := true;
        self.linkLabel10.Text := 'Maksim Chernyshkov''s Email';
        self.linkLabel10.UseCompatibleTextRendering := true;
        self.linkLabel10.LinkClicked += linkLabel10_LinkClicked;
        // 
        // linkLabel11
        // 
        self.linkLabel11.LinkArea := new System.Windows.Forms.LinkArea(18, 6);
        self.linkLabel11.Location := new System.Drawing.Point(6, 199);
        self.linkLabel11.Name := 'linkLabel11';
        self.linkLabel11.Size := new System.Drawing.Size(238, 15);
        self.linkLabel11.TabIndex := 5;
        self.linkLabel11.TabStop := true;
        self.linkLabel11.Text := 'Michael Agarkov''s Reddit';
        self.linkLabel11.UseCompatibleTextRendering := true;
        self.linkLabel11.LinkClicked += linkLabel11_LinkClicked;
        // 
        // ContribForm
        // 
        self.ClientSize := new System.Drawing.Size(384, 301);
        self.Controls.Add(self.panel4);
        self.Controls.Add(self.panel3);
        self.Controls.Add(self.panel2);
        self.Controls.Add(self.treeView1);
        self.Controls.Add(self.panel1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'ContribForm';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'MicChat contributors';
        self.Load += ContribForm_Load;
        self.panel1.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.panel2.ResumeLayout(false);
        self.panel3.ResumeLayout(false);
        self.panel4.ResumeLayout(false);
        self.ResumeLayout(false);
    end;
