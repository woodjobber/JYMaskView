//
//  JYMaskView.h
//  JYMaskView
//
//  Created by Joyingx on 15/12/1.
//  Copyright © 2015年 Joyingx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JYMaskView : UIView

@property (nonatomic, strong) UIColor *maskColor;

- (void)addTransparentRect:(CGRect)rect;
- (void)addTransparentRoundedRect:(CGRect)rect cornerRadius:(CGFloat)cornerRadius;
- (void)addTransparentRoundedRect:(CGRect)rect
                byRoundingCorners:(UIRectCorner)corners
                      cornerRadii:(CGSize)cornerRadii;

@end
