//
//  OneAPM.h
//  BlueWare
//
//  Created by lidong on 14-7-15.
//  Copyright (c) 2014年 BLUEWARE. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OneAPM : NSObject

/******************************************************************************
 * Function: + (void)startWithApplicationToken:(NSString *)token
 * Parameters:
 *  token:
 *       the token string got from www.OneAPM.com
 ******************************************************************************/
+ (void)startWithApplicationToken:(NSString *)token;

/******************************************************************************
 * Function: + (void)startWithApplicationToken:(NSString *)token
 * Parameters:
 *  token:
 *       the string given on www.oneapm.com
 *  isSSL: (Default is YES)
 *        YES - communicate with host by https
 *        NO  - communicate with host by http
 ******************************************************************************/
+ (void)startWithApplicationToken:(NSString *)token
                     withSecurity:(BOOL)isSSL;

/******************************************************************************
 * Function: + (void)printLog:(BOOL)enable
 * Parameters:
 *  enable: (Default is NO)
 *       YES - enable agent log printing
 *       NO  - disable agent log printing.
 ******************************************************************************/
+ (void)printLog:(BOOL)enable;

@end
