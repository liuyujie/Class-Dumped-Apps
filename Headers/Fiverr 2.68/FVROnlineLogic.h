//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FVRChatService, FVRUserService;

@interface FVROnlineLogic : NSObject
{
    FVRUserService *_userService;
    FVRChatService *_chatService;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool isSeller;
@property(nonatomic) _Bool currentOnlineStatus;
- (void)getUserOnlineStatusWithUserId:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)updateOnlineStatus:(_Bool)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end
