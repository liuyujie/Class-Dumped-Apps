//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCTCognacChatDockEventListener-Protocol.h"

@class NSString, SCTChatPresenceMaskView;
@protocol SCTChatPresenceBarDelegate;

@interface SCTChatPresenceBar : UIView <SCTCognacChatDockEventListener>
{
    _Bool _needsMaskView;
    _Bool _canShowMaskView;
    id <SCTChatPresenceBarDelegate> _delegate;
}

@property(nonatomic) _Bool canShowMaskView; // @synthesize canShowMaskView=_canShowMaskView;
@property(nonatomic) __weak id <SCTChatPresenceBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateMaskViewVisibility;
- (void)_layoutMaskView;
- (void)didReceiveCognacChatDockEvent:(id)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SCTChatPresenceMaskView *maskView; // @dynamic maskView;
@property(readonly) Class superclass;

@end
