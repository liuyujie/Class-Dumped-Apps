//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBContentViewObject-Protocol.h"

@class NSNumber, NSString, UIButton, UIImage;

@protocol DBUploadsContentViewObjectProtocol <DBContentViewObject>
@property(nonatomic, readonly) double alpha;
@property(nonatomic, readonly) _Bool hideIconView;
@property(nonatomic, readonly) _Bool hideCurrentUploadThumb;
@property(nonatomic, readonly) _Bool hideProgressView;
@property(nonatomic, readonly) _Bool hideRemainingUploadsView;
@property(nonatomic, readonly) _Bool hideStatusBarSubtitle;
@property(nonatomic, readonly) _Bool hideStatusBarTitle;
@property(nonatomic, readonly) UIImage *icon;
@property(nonatomic, readonly) UIImage *currentUploadThumb;
@property(nonatomic, readonly) NSString *accessibilityValue;
@property(nonatomic, readonly) NSString *accessibilityLabel;
@property(nonatomic, readonly) _Bool accessoryIsInteractive;
@property(nonatomic, readonly) NSString *accessoryAccessibilityLabel;
@property(nonatomic, readonly) UIImage *accessoryImage;
@property(nonatomic, readonly) NSNumber *uploadProgress;
@property(nonatomic, readonly) NSString *remainingUploadsBadgeString;
@property(nonatomic, readonly) NSString *statusBarSubtitle;
@property(nonatomic, readonly) NSString *statusBarTitle;
@property(nonatomic, readonly) unsigned long long configurationType;

@optional
- (void)didTapAccessoryButton:(UIButton *)arg1;
@end

