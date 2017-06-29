//
//  MainViewController.h
//  SakuraFly
//
//  Created by Chenglin on 15-10-1.
//  Copyright (c) 2015年 Chenglin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <iAd/iAd.h>
#import <AVFoundation/AVFoundation.h>

@interface MainViewController : UIViewController<UITextFieldDelegate,ADInterstitialAdDelegate,ADBannerViewDelegate, AVAudioPlayerDelegate>
@property (nonatomic, copy) NSString *leaderboardIdentifier;

-(void)showFullScreenAd;
@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com