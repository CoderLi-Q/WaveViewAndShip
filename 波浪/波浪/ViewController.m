//
//  ViewController.m
//  波浪
//
//  Created by mac on 2017/10/18.
//  Copyright © 2017年 mac. All rights reserved.
//

#import "ViewController.h"
#import "NBWaveView.h"

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UISwitch *waveSwitch;
@property(nonatomic, weak) NBWaveView *wave;
@end

@implementation ViewController

- (IBAction)switchChange:(UISwitch *)sender {
    
    if (sender.isOn) {
        [self.wave startWave];
    } else {
        [self.wave stopWave];
    }
    
}

- (void)viewDidLoad {
    [super viewDidLoad];

    NBWaveView *wave = [NBWaveView waveViewWithConfig:^(NBWaveConfig *config) {
        config.position = NBWavePositionBottom;
        config.bgColor = [UIColor clearColor];
        config.isAnimation = YES;
        config.isShowImage = YES;
        config.waveSpeed = 0.05;
        config.waveA = 10;
        config.waveColor = [UIColor colorWithWhite:212/255.0 alpha:0.7];
    }];
    self.wave = wave;
    wave.frame = CGRectMake(0, 100, [UIScreen mainScreen].bounds.size.width, 200);
    [self.view addSubview:wave];
    

}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    [self.wave startWave];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
