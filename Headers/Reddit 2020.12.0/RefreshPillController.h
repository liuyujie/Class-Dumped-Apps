//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FloatingHeaderCallbackProtocol-Protocol.h"

@class FloatingHeaderManager, FloatingUpdateView, NSLayoutConstraint, NSString;
@protocol RefreshControllerDelegate;

@interface RefreshPillController : NSObject <FloatingHeaderCallbackProtocol>
{
    id <RefreshControllerDelegate> _delegate;
    double _freshContentButtonCooldown;
    FloatingUpdateView *_refreshPillView;
    FloatingHeaderManager *_floatingHeaderManager;
    NSLayoutConstraint *_yConstraint;
    struct CGPoint _initialContentOrigin;
}

@property(retain, nonatomic) NSLayoutConstraint *yConstraint; // @synthesize yConstraint=_yConstraint;
@property(nonatomic) struct CGPoint initialContentOrigin; // @synthesize initialContentOrigin=_initialContentOrigin;
@property(retain, nonatomic) FloatingHeaderManager *floatingHeaderManager; // @synthesize floatingHeaderManager=_floatingHeaderManager;
@property(retain, nonatomic) FloatingUpdateView *refreshPillView; // @synthesize refreshPillView=_refreshPillView;
@property(nonatomic) double freshContentButtonCooldown; // @synthesize freshContentButtonCooldown=_freshContentButtonCooldown;
@property(nonatomic) __weak id <RefreshControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didPan:(id)arg1;
- (void)floatingHeaderShouldMove:(id)arg1;
- (void)dismissRefreshPill;
- (void)displayRefreshPill;
- (void)didTapNewContentButton:(id)arg1;
- (void)showRefreshPillIfNecessary;
- (void)resetFreshContentButtonCooldown;
- (id)initWithRefreshPillView:(id)arg1 floatingHeaderManager:(id)arg2 refreshControllerDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) double floatingHeadingSnapDistance;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

