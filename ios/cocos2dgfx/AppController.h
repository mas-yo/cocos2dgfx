//
//  AppController.h
//  cocos2dgfx
//
//  Created by YOSHIDA MASAHIRO on 13/06/05.
//  Copyright (c) 2013年 nhnjapan. All rights reserved.
//

@class RootViewController;

@interface AppController : NSObject <UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate,UIApplicationDelegate> {
    UIWindow *window;
    RootViewController    *viewController;
}

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain) RootViewController *viewController;

@end

