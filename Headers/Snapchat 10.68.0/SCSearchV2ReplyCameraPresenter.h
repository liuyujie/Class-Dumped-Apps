//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchV2ReplyCameraPresenting-Protocol.h"

@class NSString, SCUserSession, UIViewController;

@interface SCSearchV2ReplyCameraPresenter : NSObject <SCSearchV2ReplyCameraPresenting>
{
    UIViewController *_presentingViewController;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)presentReplyCameraForUserWithUsername:(id)arg1 displayName:(id)arg2;
- (void)presentReplyCameraForGroupWithGroupId:(id)arg1 displayName:(id)arg2;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithPresentingViewController:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
