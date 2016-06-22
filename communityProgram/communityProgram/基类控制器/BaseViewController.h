//
//  BaseViewController.h
//  communityProgram
//
//  Created by xiaogao on 15/12/6.
//  Copyright © 2015年 高国峰. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserObject.h"

@interface BaseViewController : UIViewController
@property(nonatomic,strong)UserObject * user;
-(void)showLoading;
-(void)showPrompt:(NSString*)detail;
-(void)dismissShow;
-(NSMutableAttributedString*)AttributedString:(NSString*)allstring image:(NSString*)imageName;
-(NSMutableAttributedString*)AttributedString:(NSString*)allstring rangeString:(NSString*)rangeString color:(UIColor*)color;
@end
