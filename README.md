# CoarseImitationNetEase

 //类方法 初始化
    self.segmentControl =[LXSegmentControl segmentControlWithFrame:CGRectMake(0, 64, Device_Width, 44) delegate:self titleArr:title_arr];
    //设置 滚动类型
    self.segmentControl.scrollType = LXSegmentedControlTypeEndScroll;
    [self.view addSubview:self.segmentControl];
