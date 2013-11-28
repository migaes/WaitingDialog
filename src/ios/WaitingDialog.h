//
//  WaitingDialog.h
//
//
//  Created by Guido Sabatini in 2012
//

#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>
//#import <Cordova/CDVPlugin.h>

@interface WaitingDialog : CDVPlugin

- (void)show:(CDVInvokedUrlCommand*)command;
- (void)hide:(CDVInvokedUrlCommand*)command;

@end
