//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WAShareContactViewController, WAVCard;

@protocol WAShareContactViewControllerDelegate <NSObject>
- (void)shareContactViewControllerDidCancel:(WAShareContactViewController *)arg1;
- (void)shareContactViewController:(WAShareContactViewController *)arg1 didFinishWithVCard:(WAVCard *)arg2;

@optional
- (NSString *)shareContactViewControllerConfirmationButtonTitle:(WAShareContactViewController *)arg1;
@end
