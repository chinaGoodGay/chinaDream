//
//  UpImageButton.h
//  Cartext
//
//  Created by 谢泽锋 on 16/3/17.
//  Copyright © 2016年 xiezefeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UpImageButton : UIButton
-(CGRect)imageRectForContentRect:(CGRect)contentRect;
-(CGRect)titleRectForContentRect:(CGRect)contentRect;
@end
