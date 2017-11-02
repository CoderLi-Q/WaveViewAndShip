//
//  NBWaveView.h
//  波浪
//
//  Created by mac on 2017/10/18.
//  Copyright © 2017年 mac. All rights reserved.
//
/*
 y = Asin（ωx+φ）+ C
 A 表示振幅，也就是使用这个变量来调整波浪的高度
 ω 表示周期，也就是使用这个变量来调整在屏幕内显示的波浪的数量
 φ 表示波浪横向的偏移，也就是使用这个变量来调整波浪的流动
 C 表示波浪纵向的位置，也就是使用这个变量来调整波浪在屏幕中竖直的位置。
 */

#import <UIKit/UIKit.h>
#import "NBWaveConfig.h"

@interface NBWaveView : UIView

/**
 快速创建方法

 @param config 配置的block(可以直接进行初始化是否需要动画效果展示)
 @return 返回
 */
+ (instancetype)waveViewWithConfig:(void(^)(NBWaveConfig *config))config;
#pragma mark - 方法
/**
 当需要手动开启的时候调用这个方法
 */
- (void)startWave;
/**
 需要手动关闭的时候调用这个方法
 */
- (void)stopWave;

@end
