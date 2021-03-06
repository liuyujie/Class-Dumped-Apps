//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString, UIImage;

@protocol OGLAccount <NSObject>
@property(readonly, nonatomic, getter=isGoogleAccount) _Bool googleAccount;
@property(readonly, nonatomic) UIImage *accountProfileImage;
@property(readonly, copy, nonatomic) NSString *accountEmail;
@property(readonly, copy, nonatomic) NSString *accountDisplayName;
@property(readonly, copy, nonatomic) NSString *accountID;

@optional
@property(copy, nonatomic) NSString *filterErrorMessage;
@property(copy, nonatomic) NSString *filterAnnotation;
@property(nonatomic, getter=isSelectionDiscouraged) _Bool selectionDiscouraged;
@property(nonatomic) _Bool canSelect;
@property(readonly, nonatomic) NSNumber *accountNotificationCount;
@property(readonly, nonatomic) UIImage *accountProfileBackgroundImage;
@property(readonly, nonatomic) _Bool hasValidAuth;
@property(readonly, copy, nonatomic) NSString *accountNotificationAccessibilityLabel;
@end

