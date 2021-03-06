//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyling-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTReusableView-Protocol.h"

@class GIMMe, NSArray, NSMutableArray, NSString, YTICompactMultiOfferRenderer;
@protocol YTInteractionLoggingButtonDelegate, YTResponder;

@interface YTMoviesAndShowsCompactMultiOfferView : UIView <YTPageStyling, YTReusableView, YTResponder>
{
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTICompactMultiOfferRenderer *_renderer;
    NSArray *_visibleRenderers;
    id <YTInteractionLoggingButtonDelegate> _interactionLoggingDelegate;
    NSMutableArray *_offerRowViews;
}

@property(retain, nonatomic) NSMutableArray *offerRowViews; // @synthesize offerRowViews=_offerRowViews;
@property(nonatomic) __weak id <YTInteractionLoggingButtonDelegate> interactionLoggingDelegate; // @synthesize interactionLoggingDelegate=_interactionLoggingDelegate;
@property(readonly, nonatomic) NSArray *visibleRenderers; // @synthesize visibleRenderers=_visibleRenderers;
@property(retain, nonatomic) YTICompactMultiOfferRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

