//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WAContactQRAddContactViewController, WAUserJID;

@protocol WAContactQRAddContactViewControllerDelegate <NSObject>
- (void)contactQRAddContactViewControllerRequestedViewDismissalWithCompletion:(void (^)(void))arg1;
- (_Bool)contactQRAddContactViewControllerShouldAppearForExistingContact;
- (void)contactQRAddContactViewControllerDidAppear:(WAContactQRAddContactViewController *)arg1;
- (void)contactQRAddContactViewControllerDidCancel:(WAContactQRAddContactViewController *)arg1;
- (void)contactQRAddContactViewController:(WAContactQRAddContactViewController *)arg1 didAddContactWithUserJID:(WAUserJID *)arg2 pushName:(NSString *)arg3;
@end

