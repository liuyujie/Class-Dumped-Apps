//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXViewController.h"

#import "XBXSwitchPanelItemDelegate-Protocol.h"

@class NSString, SGBrowserTouchControl, UILabel, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView;

@interface SGCursorRemoteViewController : XBXViewController <XBXSwitchPanelItemDelegate>
{
    SGBrowserTouchControl *_browserControl;
    UILabel *_selectLabel;
    UIView *_specialRemoteView;
    UITapGestureRecognizer *_tap;
    UISwipeGestureRecognizer *_swipeUp;
    UISwipeGestureRecognizer *_swipeDown;
    UISwipeGestureRecognizer *_swipeLeft;
    UISwipeGestureRecognizer *_swipeRight;
}

@property(retain, nonatomic) UISwipeGestureRecognizer *swipeRight; // @synthesize swipeRight=_swipeRight;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeLeft; // @synthesize swipeLeft=_swipeLeft;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeDown; // @synthesize swipeDown=_swipeDown;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeUp; // @synthesize swipeUp=_swipeUp;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UIView *specialRemoteView; // @synthesize specialRemoteView=_specialRemoteView;
@property(retain, nonatomic) UILabel *selectLabel; // @synthesize selectLabel=_selectLabel;
@property(retain, nonatomic) SGBrowserTouchControl *browserControl; // @synthesize browserControl=_browserControl;
- (void).cxx_destruct;
- (id)smartglassSettings;
- (id)getViewModel;
- (void)invokeClear;
- (void)invokeXButton;
- (void)invokeYButton;
- (void)invokeBButton;
- (void)swipe:(id)arg1;
- (void)tap:(id)arg1;
- (void)onDestroy;
- (void)onSGTitleChangedNotificationHandler:(id)arg1;
- (_Bool)isUsingLocalGesture;
- (void)onInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

