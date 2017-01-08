//
//  LXSegmentControl.h
//  CoarseImitationNetEase
//
//  Created by chuanglong02 on 17/1/6.
//  Copyright © 2017年 漫漫. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef enum : NSUInteger {
    LXSegmentedControlTypeCenterScroll, // 滚动风格
    LXSegmentedControlTypeEndScroll, // 静止风格
} LXSegmentedControlScrollType;  // 默认为滚动风格
@class LXSegmentControl;
@protocol LXSegmentControlDelegate<NSObject>
-(void)LXSegmentControl:(LXSegmentControl *)segmentControl didSelectBtnAtIndex:(NSInteger)index;
@end;
@interface LXSegmentControl : UIScrollView
//对象方法创建 LXSegmentControl
-(instancetype)initWithFrame:(CGRect)frame delegate:(id <LXSegmentControlDelegate>)delegate titleArr:(NSArray *)titleArr;
//类方法创建 LXSegmentControl
+(instancetype)segmentControlWithFrame:(CGRect)frame delegate:(id <LXSegmentControlDelegate>)delegate titleArr:(NSArray *)titleArr;

@property(nonatomic,weak)id <LXSegmentControlDelegate> SeDelegate;

@property(nonatomic,assign)LXSegmentedControlScrollType scrollType;

///** 标题选中颜色改变以及指示器位置变化 */
- (void)titleBtnSelectedWithScrollView:(UIScrollView *)scrollView;

@end
