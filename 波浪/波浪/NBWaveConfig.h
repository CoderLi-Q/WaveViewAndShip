//
//  NBWaveConfig.h
//  波浪
//
//  Created by mac on 2017/10/19.
//  Copyright © 2017年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 定义波浪位置的枚举
 */
typedef NS_ENUM(NSUInteger, NBWavePosition) {
    NBWavePositionTop,
    NBWavePositionBottom,
};

@interface NBWaveConfig : NSObject

+ (instancetype)defaultConfig;

#pragma mark - 这里设置波浪的属性
/**
 A 表示振幅，也就是使用这个变量来调整波浪的高度
 */
@property(nonatomic, assign) CGFloat waveA;
/**
 ω 表示周期，也就是使用这个变量来调整在屏幕内显示的波浪的数量
 */
@property(nonatomic, assign) CGFloat wavePeriod;
/**
 φ 表示波浪横向的偏移，也就是使用这个变量来调整波浪的流动
 */
@property(nonatomic, assign) CGFloat waveOffset;
/**
 C 表示波浪纵向的位置，也就是使用这个变量来调整波浪在屏幕中竖直的位置。
 */
@property(nonatomic, assign) CGFloat waveC;
/**
 设置波浪的速度
 */
@property(nonatomic, assign) CGFloat waveSpeed;

#pragma mark - 设置波浪的外观等
/**
 波浪显示的位置
 */
@property(nonatomic, strong) UIColor *bgColor;
/**
 波浪的颜色
 */
@property(nonatomic, strong) UIColor *waveColor;

/**
 波浪的覆盖位置
 */
@property(nonatomic, assign) NBWavePosition position;

/**
 波浪的覆盖位置
 */
@property(nonatomic, assign) BOOL isAnimation;
/**
 是否显示image
 */
@property(nonatomic, assign) BOOL isShowImage;

@property(nonatomic, assign) CGSize imgSize;

@end
