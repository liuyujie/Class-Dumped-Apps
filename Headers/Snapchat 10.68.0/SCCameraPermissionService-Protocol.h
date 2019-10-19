//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCCameraPermissionService <NSObject>
@property(nonatomic) _Bool showingNeedCameraAccessAlertView;
@property(nonatomic) _Bool warnedMicDisabled;
@property(nonatomic) _Bool askingAudioPermissions;
@property(nonatomic) _Bool askingVideoCapturePermissions;
- (void)promptCameraPermissionRequestAlert:(void (^)(_Bool))arg1 dismissHandler:(void (^)(void))arg2;
- (void)promptMicrophonePermissionRequestAlert:(void (^)(_Bool))arg1 dismissHandler:(void (^)(void))arg2;
- (void)requestCameraWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)requestMicrophoneWithCompletionHandler:(void (^)(_Bool))arg1;
@end
