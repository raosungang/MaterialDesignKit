//
//  MDSwitch.h
//  MaterialDesignForiOS
//
//  Created by 薛纪杰 on 15/12/2.
//  Copyright © 2015年 XueSeason. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface MDSwitch : UIView
@property (strong, nonatomic) IBInspectable UIColor *slideColor;
@property (strong, nonatomic) IBInspectable UIColor *fillColor;
@property (assign, nonatomic) IBInspectable BOOL switchState;
@end
