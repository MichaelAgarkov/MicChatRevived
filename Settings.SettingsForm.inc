procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(SettingsForm));
        var treeNode11: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('General');
        var treeNode12: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('Client');
        var treeNode13: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('Server');
        var treeNode14: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('Advanced');
        self.panel1 := new System.Windows.Forms.Panel();
        self.pictureBox2 := new System.Windows.Forms.PictureBox();
        self.label2 := new System.Windows.Forms.Label();
        self.label1 := new System.Windows.Forms.Label();
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.treeView1 := new System.Windows.Forms.TreeView();
        self.imageList1 := new System.Windows.Forms.ImageList(self.components);
        self.panel2 := new System.Windows.Forms.Panel();
        self.button3 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.button1 := new System.Windows.Forms.Button();
        self.panel3 := new System.Windows.Forms.Panel();
        self.checkBox2 := new System.Windows.Forms.CheckBox();
        self.checkBox1 := new System.Windows.Forms.CheckBox();
        self.button4 := new System.Windows.Forms.Button();
        self.panel4 := new System.Windows.Forms.Panel();
        self.checkBox3 := new System.Windows.Forms.CheckBox();
        self.button5 := new System.Windows.Forms.Button();
        self.panel5 := new System.Windows.Forms.Panel();
        self.label3 := new System.Windows.Forms.Label();
        self.panel6 := new System.Windows.Forms.Panel();
        self.label4 := new System.Windows.Forms.Label();
        self.pictureBox3 := new System.Windows.Forms.PictureBox();
        self.pictureBox4 := new System.Windows.Forms.PictureBox();
        self.button6 := new System.Windows.Forms.Button();
        self.button7 := new System.Windows.Forms.Button();
        self.panel1.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        self.panel2.SuspendLayout();
        self.panel3.SuspendLayout();
        self.panel4.SuspendLayout();
        self.panel5.SuspendLayout();
        self.panel6.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox3)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox4)).BeginInit();
        self.SuspendLayout();
        // 
        // panel1
        // 
        self.panel1.BackgroundImage := (System.Drawing.Image(resources.GetObject('panel1.BackgroundImage')));
        self.panel1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.panel1.Controls.Add(self.pictureBox4);
        self.panel1.Controls.Add(self.pictureBox3);
        self.panel1.Controls.Add(self.pictureBox2);
        self.panel1.Controls.Add(self.label2);
        self.panel1.Controls.Add(self.label1);
        self.panel1.Controls.Add(self.pictureBox1);
        self.panel1.Dock := System.Windows.Forms.DockStyle.Top;
        self.panel1.Location := new System.Drawing.Point(0, 0);
        self.panel1.Name := 'panel1';
        self.panel1.Size := new System.Drawing.Size(364, 60);
        self.panel1.TabIndex := 0;
        // 
        // pictureBox2
        // 
        self.pictureBox2.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox2.Image := (System.Drawing.Image(resources.GetObject('pictureBox2.Image')));
        self.pictureBox2.Location := new System.Drawing.Point(3, 3);
        self.pictureBox2.Name := 'pictureBox2';
        self.pictureBox2.Size := new System.Drawing.Size(54, 54);
        self.pictureBox2.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox2.TabIndex := 3;
        self.pictureBox2.TabStop := false;
        self.pictureBox2.Visible := false;
        // 
        // label2
        // 
        self.label2.BackColor := System.Drawing.Color.Transparent;
        self.label2.ForeColor := System.Drawing.Color.White;
        self.label2.Location := new System.Drawing.Point(134, 30);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(218, 27);
        self.label2.TabIndex := 2;
        self.label2.Text := 'The general settings for the program';
        // 
        // label1
        // 
        self.label1.BackColor := System.Drawing.Color.Transparent;
        self.label1.Font := new System.Drawing.Font('Segoe UI', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.ForeColor := System.Drawing.Color.White;
        self.label1.Location := new System.Drawing.Point(116, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(236, 18);
        self.label1.TabIndex := 1;
        self.label1.Text := 'General';
        // 
        // pictureBox1
        // 
        self.pictureBox1.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(3, 3);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(54, 54);
        self.pictureBox1.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox1.TabIndex := 0;
        self.pictureBox1.TabStop := false;
        // 
        // treeView1
        // 
        self.treeView1.Dock := System.Windows.Forms.DockStyle.Left;
        self.treeView1.ImageIndex := 0;
        self.treeView1.ImageList := self.imageList1;
        self.treeView1.Location := new System.Drawing.Point(0, 60);
        self.treeView1.Name := 'treeView1';
        treeNode11.ImageKey := 'General';
        treeNode11.Name := 'Узел0';
        treeNode11.SelectedImageKey := 'General';
        treeNode11.Text := 'General';
        treeNode12.ImageKey := 'Client';
        treeNode12.Name := 'Узел0';
        treeNode12.SelectedImageKey := 'Client';
        treeNode12.Text := 'Client';
        treeNode13.ImageKey := 'Server';
        treeNode13.Name := 'Узел1';
        treeNode13.SelectedImageKey := 'Server';
        treeNode13.Text := 'Server';
        treeNode14.ImageKey := 'Advanced';
        treeNode14.Name := 'Узел1';
        treeNode14.SelectedImageKey := 'Advanced';
        treeNode14.Text := 'Advanced';
        self.treeView1.Nodes.AddRange(new System.Windows.Forms.TreeNode[4](treeNode11, treeNode12, treeNode13, treeNode14));
        self.treeView1.SelectedImageIndex := 0;
        self.treeView1.Size := new System.Drawing.Size(110, 221);
        self.treeView1.TabIndex := 1;
        self.treeView1.AfterSelect += treeView1_AfterSelect;
        // 
        // imageList1
        // 
        self.imageList1.ImageStream := (System.Windows.Forms.ImageListStreamer(resources.GetObject('imageList1.ImageStream')));
        self.imageList1.TransparentColor := System.Drawing.Color.Transparent;
        self.imageList1.Images.SetKeyName(0, 'General');
        self.imageList1.Images.SetKeyName(1, 'Client');
        self.imageList1.Images.SetKeyName(2, 'Server');
        self.imageList1.Images.SetKeyName(3, 'Advanced');
        // 
        // panel2
        // 
        self.panel2.BackgroundImage := (System.Drawing.Image(resources.GetObject('panel2.BackgroundImage')));
        self.panel2.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.panel2.Controls.Add(self.button3);
        self.panel2.Controls.Add(self.button2);
        self.panel2.Controls.Add(self.button1);
        self.panel2.Dock := System.Windows.Forms.DockStyle.Bottom;
        self.panel2.Location := new System.Drawing.Point(110, 252);
        self.panel2.Name := 'panel2';
        self.panel2.Size := new System.Drawing.Size(254, 29);
        self.panel2.TabIndex := 2;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(6, 3);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(75, 23);
        self.button3.TabIndex := 4;
        self.button3.Text := 'Cancel';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(95, 3);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 3;
        self.button2.Text := 'Apply';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(176, 3);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 0;
        self.button1.Text := 'OK';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // panel3
        // 
        self.panel3.Controls.Add(self.checkBox2);
        self.panel3.Controls.Add(self.checkBox1);
        self.panel3.Controls.Add(self.button4);
        self.panel3.Dock := System.Windows.Forms.DockStyle.Fill;
        self.panel3.Location := new System.Drawing.Point(110, 60);
        self.panel3.Name := 'panel3';
        self.panel3.Size := new System.Drawing.Size(254, 192);
        self.panel3.TabIndex := 3;
        // 
        // checkBox2
        // 
        self.checkBox2.Location := new System.Drawing.Point(6, 36);
        self.checkBox2.Name := 'checkBox2';
        self.checkBox2.Size := new System.Drawing.Size(236, 24);
        self.checkBox2.TabIndex := 2;
        self.checkBox2.Text := 'Hide in tray at start';
        self.checkBox2.UseVisualStyleBackColor := true;
        // 
        // checkBox1
        // 
        self.checkBox1.Location := new System.Drawing.Point(6, 6);
        self.checkBox1.Name := 'checkBox1';
        self.checkBox1.Size := new System.Drawing.Size(236, 24);
        self.checkBox1.TabIndex := 1;
        self.checkBox1.Text := 'Show Splash screen at start';
        self.checkBox1.UseVisualStyleBackColor := true;
        // 
        // button4
        // 
        self.button4.Location := new System.Drawing.Point(176, 166);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(75, 23);
        self.button4.TabIndex := 0;
        self.button4.Text := 'Set default';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // panel4
        // 
        self.panel4.Controls.Add(self.checkBox3);
        self.panel4.Controls.Add(self.button5);
        self.panel4.Dock := System.Windows.Forms.DockStyle.Fill;
        self.panel4.Location := new System.Drawing.Point(110, 60);
        self.panel4.Name := 'panel4';
        self.panel4.Size := new System.Drawing.Size(254, 192);
        self.panel4.TabIndex := 4;
        // 
        // checkBox3
        // 
        self.checkBox3.Location := new System.Drawing.Point(6, 6);
        self.checkBox3.Name := 'checkBox3';
        self.checkBox3.Size := new System.Drawing.Size(236, 24);
        self.checkBox3.TabIndex := 2;
        self.checkBox3.Text := 'Add to autorun';
        self.checkBox3.UseVisualStyleBackColor := true;
        // 
        // button5
        // 
        self.button5.Location := new System.Drawing.Point(176, 166);
        self.button5.Name := 'button5';
        self.button5.Size := new System.Drawing.Size(75, 23);
        self.button5.TabIndex := 1;
        self.button5.Text := 'Set default';
        self.button5.UseVisualStyleBackColor := true;
        self.button5.Click += button5_Click;
        // 
        // panel5
        // 
        self.panel5.Controls.Add(self.button6);
        self.panel5.Controls.Add(self.label3);
        self.panel5.Dock := System.Windows.Forms.DockStyle.Fill;
        self.panel5.Location := new System.Drawing.Point(110, 60);
        self.panel5.Name := 'panel5';
        self.panel5.Size := new System.Drawing.Size(254, 192);
        self.panel5.TabIndex := 5;
        self.panel5.Visible := false;
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(6, 7);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(236, 23);
        self.label3.TabIndex := 0;
        self.label3.Text := 'Insert new client settings';
        self.label3.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        // 
        // panel6
        // 
        self.panel6.Controls.Add(self.button7);
        self.panel6.Controls.Add(self.label4);
        self.panel6.Dock := System.Windows.Forms.DockStyle.Fill;
        self.panel6.Location := new System.Drawing.Point(110, 60);
        self.panel6.Name := 'panel6';
        self.panel6.Size := new System.Drawing.Size(254, 192);
        self.panel6.TabIndex := 6;
        self.panel6.Visible := false;
        // 
        // label4
        // 
        self.label4.Location := new System.Drawing.Point(3, 7);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(239, 23);
        self.label4.TabIndex := 0;
        self.label4.Text := 'Insert new server settings';
        self.label4.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        // 
        // pictureBox3
        // 
        self.pictureBox3.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox3.Image := (System.Drawing.Image(resources.GetObject('pictureBox3.Image')));
        self.pictureBox3.Location := new System.Drawing.Point(3, 3);
        self.pictureBox3.Name := 'pictureBox3';
        self.pictureBox3.Size := new System.Drawing.Size(54, 54);
        self.pictureBox3.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox3.TabIndex := 4;
        self.pictureBox3.TabStop := false;
        self.pictureBox3.Visible := false;
        // 
        // pictureBox4
        // 
        self.pictureBox4.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox4.Image := (System.Drawing.Image(resources.GetObject('pictureBox4.Image')));
        self.pictureBox4.Location := new System.Drawing.Point(3, 3);
        self.pictureBox4.Name := 'pictureBox4';
        self.pictureBox4.Size := new System.Drawing.Size(54, 54);
        self.pictureBox4.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox4.TabIndex := 5;
        self.pictureBox4.TabStop := false;
        self.pictureBox4.Visible := false;
        // 
        // button6
        // 
        self.button6.Location := new System.Drawing.Point(176, 166);
        self.button6.Name := 'button6';
        self.button6.Size := new System.Drawing.Size(75, 23);
        self.button6.TabIndex := 1;
        self.button6.Text := 'Set default';
        self.button6.UseVisualStyleBackColor := true;
        self.button6.Click += button6_Click;
        // 
        // button7
        // 
        self.button7.Location := new System.Drawing.Point(176, 166);
        self.button7.Name := 'button7';
        self.button7.Size := new System.Drawing.Size(75, 23);
        self.button7.TabIndex := 1;
        self.button7.Text := 'Set default';
        self.button7.UseVisualStyleBackColor := true;
        self.button7.Click += button7_Click;
        // 
        // SettingsForm
        // 
        self.ClientSize := new System.Drawing.Size(364, 281);
        self.Controls.Add(self.panel6);
        self.Controls.Add(self.panel5);
        self.Controls.Add(self.panel4);
        self.Controls.Add(self.panel3);
        self.Controls.Add(self.panel2);
        self.Controls.Add(self.treeView1);
        self.Controls.Add(self.panel1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.Name := 'SettingsForm';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'MicChat Settings';
        self.Load += SettingsForm_Load;
        self.panel1.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.panel2.ResumeLayout(false);
        self.panel3.ResumeLayout(false);
        self.panel4.ResumeLayout(false);
        self.panel5.ResumeLayout(false);
        self.panel6.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.pictureBox3)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox4)).EndInit();
        self.ResumeLayout(false);
    end;
