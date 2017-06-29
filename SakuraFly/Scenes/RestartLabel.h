//
//  RestartView.h
//  SakuraFly
//
//  Created by Chenglin on 15-10-4.
//  Copyright (c) 2015年 Chenglin. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@class RestartLabel;
@protocol RestartViewDelegate <NSObject>

- (void)restartView:(RestartLabel *)restartView didPressRestartButton:(SKSpriteNode *)restartButton;
- (void)restartView:(RestartLabel *)restartView didPressLeaderboardButton:(SKSpriteNode *)restartButton;
-(void)showFullScreenAd;
@end

@interface RestartLabel : SKSpriteNode

@property (weak, nonatomic) id <RestartViewDelegate> delegate;
@property (copy, nonatomic) NSString* finalPoint;
+ (RestartLabel *)getInstanceWithSize:(CGSize)size Point:(NSString *)point;
- (void)dismiss;
- (void)showInScene:(SKScene *)scene;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com