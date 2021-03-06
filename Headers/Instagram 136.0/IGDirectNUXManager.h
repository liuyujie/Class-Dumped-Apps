//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGTooltipViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGUserSessionObject-Protocol.h>

@class NSMutableDictionary, NSString;

@interface IGDirectNUXManager : NSObject <IGTooltipViewDelegate, IGUserSessionObject>
{
    _Bool _isCurrentlyShowingTooltip;
    NSMutableDictionary *_tooltips;
    NSMutableDictionary *_tooltipConfirmCompletionHandlers;
    NSMutableDictionary *_tooltipCancelCompletionHandlers;
}

@property(retain, nonatomic) NSMutableDictionary *tooltipCancelCompletionHandlers; // @synthesize tooltipCancelCompletionHandlers=_tooltipCancelCompletionHandlers;
@property(retain, nonatomic) NSMutableDictionary *tooltipConfirmCompletionHandlers; // @synthesize tooltipConfirmCompletionHandlers=_tooltipConfirmCompletionHandlers;
@property(retain, nonatomic) NSMutableDictionary *tooltips; // @synthesize tooltips=_tooltips;
- (void).cxx_destruct;
- (void)didTapTooltipView:(id)arg1;
- (id)_createTooltipViewOfType:(unsigned long long)arg1 title:(id)arg2 delegate:(id)arg3;
- (id)_createTooltipOfType:(unsigned long long)arg1 title:(id)arg2 delegate:(id)arg3;
- (id)_createDialogOfType:(unsigned long long)arg1 title:(id)arg2;
- (void)_hideTooltip:(id)arg1 animated:(_Bool)arg2;
- (CDUnknownBlockType)_tooltipConfirmCompletionHandlerOfType:(unsigned long long)arg1;
- (unsigned long long)_tooltipTypeOfTooltip:(id)arg1;
- (id)_tooltipOfType:(unsigned long long)arg1;
- (void)_setTooltipCompletionHandlers:(CDUnknownBlockType)arg1 cancelHandler:(CDUnknownBlockType)arg2 forType:(unsigned long long)arg3;
- (void)_setTooltip:(id)arg1 forType:(unsigned long long)arg2;
- (void)incrementNUXKey:(id)arg1;
- (void)setCountForKeyInUserDefaults:(id)arg1 count:(long long)arg2;
- (_Bool)seenCountForKeyInUserDefaults:(id)arg1 isBelowCount:(long long)arg2;
- (void)markTooltipOfTypeAsCompleted:(unsigned long long)arg1;
- (void)hideTooltipOfType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)hideTooltipOfType:(unsigned long long)arg1;
- (void)_showTooltipOfTypeIfNecessary:(unsigned long long)arg1 displayType:(unsigned long long)arg2 title:(id)arg3 presentingViewController:(id)arg4 anchoredAboveView:(id)arg5 inView:(id)arg6 anchorPoint:(struct CGPoint)arg7 offset:(struct CGPoint)arg8 direction:(long long)arg9 alreadyPresentedHandler:(CDUnknownBlockType)arg10 willDisplayHandler:(CDUnknownBlockType)arg11 confirmActionHandler:(CDUnknownBlockType)arg12 cancelActionHandler:(CDUnknownBlockType)arg13;
- (void)showTooltipOfTypeIfNecessary:(unsigned long long)arg1 tooltipTitleOverride:(id)arg2 anchorView:(id)arg3 anchorPoint:(struct CGPoint)arg4 offset:(struct CGPoint)arg5 inView:(id)arg6 direction:(long long)arg7 willDisplayHandler:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (void)showTooltipOfTypeIfNecessary:(unsigned long long)arg1 tooltipTitleOverride:(id)arg2 anchoredAboveView:(id)arg3 inView:(id)arg4 offset:(struct CGPoint)arg5 completion:(CDUnknownBlockType)arg6;
- (void)showDialogOfTypeIfNecessary:(unsigned long long)arg1 presentingViewController:(id)arg2 alreadyPresentedHandler:(CDUnknownBlockType)arg3 confirmActionHandler:(CDUnknownBlockType)arg4 cancelActionHandler:(CDUnknownBlockType)arg5;
- (_Bool)hasSeenTooltipOfType:(unsigned long long)arg1;
- (_Bool)canDisplayTooltipOfType:(unsigned long long)arg1;
- (_Bool)isCurrentlyShowingTooltipOfType:(unsigned long long)arg1;
- (_Bool)isCurrentlyShowingTooltip;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

