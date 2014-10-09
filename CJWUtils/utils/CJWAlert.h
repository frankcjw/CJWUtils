//
//  CJWAlert.h
//  Album
//
//  Created by cen on 3/6/14.
//  Copyright (c) 2014 cen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void (^CJWCB)(NSInteger buttonIndex,UIAlertView *alertView);

typedef NS_ENUM(NSInteger, CJWAlertStyle) {
    /**
     *
     */
    CJWAlertStyleOnlyConfirm,
    /**
     *
     */
    CJWAlertStyleConfirmCancel,
    /**
     *     
     */
    
};
//(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
@interface CJWAlert : NSObject
//AlertViewStyle
+(void)showWithTitle:(NSString *)title message:(NSString *)message style:(CJWAlertStyle)style callback:(CJWCB)callback;

+(void)showWithTitle:(NSString *)title message:(NSString *)message style:(CJWAlertStyle)style alertStyle:(UIAlertViewStyle)alertStyle callback:(CJWCB)callback;

+(CJWAlert *)alert;
@end