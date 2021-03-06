//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HTSLivePopupViewControllerProtocol-Protocol.h"

@class HTSLivePopupNavigationBar, NSString, UIView;
@protocol HTSLiveInteractionEntranceProvider, IESLivePKProvider;

@interface HTSLivePopupBaseViewController : UIViewController <HTSLivePopupViewControllerProtocol>
{
    _Bool _disableDismissOnClick;
    _Bool _hideLetfItem;
    UIView *_contentView;
    id <HTSLiveInteractionEntranceProvider> _entranceProvider;
    id <IESLivePKProvider> _pkProvider;
}

@property(retain, nonatomic) id <IESLivePKProvider> pkProvider; // @synthesize pkProvider=_pkProvider;
@property(retain, nonatomic) id <HTSLiveInteractionEntranceProvider> entranceProvider; // @synthesize entranceProvider=_entranceProvider;
@property(nonatomic) _Bool hideLetfItem; // @synthesize hideLetfItem=_hideLetfItem;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool disableDismissOnClick; // @synthesize disableDismissOnClick=_disableDismissOnClick;
- (void).cxx_destruct;
- (void)addNavbarSeparatorLineView;
- (void)didClickBackgroundView;
- (void)dismiss;
@property(readonly, nonatomic) HTSLivePopupNavigationBar *navBar;
- (void)onSetupNavBar:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

