//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCommerceOperaPresenterDelegate-Protocol.h"
#import "SCSearchV2CommercePresenting-Protocol.h"

@class NSString, SCCommerceOperaPresenter, SCUserSession, UIViewController;

@interface SCSearchV2CommercePresenter : NSObject <SCCommerceOperaPresenterDelegate, SCSearchV2CommercePresenting>
{
    SCUserSession *_userSession;
    SCCommerceOperaPresenter *_commerceOperaPresenter;
    UIViewController *_presentingViewController;
    _Bool _isPresenting;
}

- (void).cxx_destruct;
- (void)commerceOperaViewerDidDisappear:(id)arg1 unlockedLens:(id)arg2 additionalInfo:(id)arg3 wasBackgrounded:(_Bool)arg4;
- (_Bool)isPresenting;
- (void)presentWithDeeplinkURL:(id)arg1 onViewController:(id)arg2;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
