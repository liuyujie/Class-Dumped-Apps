//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/NSObject-Protocol.h>

@class NSString, PSPDFPasswordView;

@protocol PSPDFPasswordViewDelegate <NSObject>
- (void)passwordView:(PSPDFPasswordView *)arg1 didUnlockWithPassword:(NSString *)arg2;

@optional
- (void)passwordView:(PSPDFPasswordView *)arg1 willUnlockWithPassword:(NSString *)arg2;
- (_Bool)passwordView:(PSPDFPasswordView *)arg1 shouldUnlockWithPassword:(NSString *)arg2;
- (void)passwordView:(PSPDFPasswordView *)arg1 didFailToUnlockWithPassword:(NSString *)arg2;
@end

