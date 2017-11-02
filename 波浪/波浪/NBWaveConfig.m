//
//  NBWaveConfig.m
//  波浪
//
//  Created by mac on 2017/10/19.
//  Copyright © 2017年 mac. All rights reserved.
//

#import "NBWaveConfig.h"

@implementation NBWaveConfig
+ (instancetype)defaultConfig
{
    NBWaveConfig *config = [[NBWaveConfig alloc] init];
    config.bgColor = [UIColor redColor];
    config.waveColor = [UIColor greenColor];
    config.waveSpeed = 0.1;   //  速度
    config.waveA = 20;    //  振幅
    config.wavePeriod = 1/30.0;  //  周期
    config.waveOffset = 0.0;  //  设置横向偏移
    config.waveC = config.waveA*2;   // 纵向位置
    config.position = NBWavePositionBottom;
    config.isAnimation = YES;
    config.isShowImage = NO;
    config.imgSize = CGSizeMake(20, 20);
    return config;
}
@end
