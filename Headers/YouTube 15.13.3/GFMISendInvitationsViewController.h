//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GFMIBaseViewController.h>

#import <Module_Framework/GKSCallToActionPanelDelegate-Protocol.h>
#import <Module_Framework/SKTShareSheetDelegate-Protocol.h>

@class GFMICVNChallengeAdapter, GFMIInvitationFlowConfig, GFMILabelWithRetryButton, GIMMe, GKSCallToActionPanel, NSLayoutConstraint, NSMutableSet, NSString, UIViewController;
@protocol GFMISendInvitationsDelegate, SKTSendKitUIService, SKTShareSheet;

@interface GFMISendInvitationsViewController : GFMIBaseViewController <GKSCallToActionPanelDelegate, SKTShareSheetDelegate>
{
    GFMILabelWithRetryButton *_errorView;
    id <GFMISendInvitationsDelegate> _delegate;
    id <SKTSendKitUIService> _sendKitUIService;
    UIViewController<SKTShareSheet> *_sendKitViewController;
    GKSCallToActionPanel *_callToActionPanel;
    unsigned long long _remainingInvitationsCount;
    NSMutableSet *_selectedContacts;
    unsigned long long _parentFlow;
    GFMIInvitationFlowConfig *_config;
    long long _state;
    GFMICVNChallengeAdapter *_challengeAdapter;
    NSLayoutConstraint *_bottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) GFMICVNChallengeAdapter *challengeAdapter; // @synthesize challengeAdapter=_challengeAdapter;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) GFMIInvitationFlowConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) unsigned long long parentFlow; // @synthesize parentFlow=_parentFlow;
@property(readonly, nonatomic) NSMutableSet *selectedContacts; // @synthesize selectedContacts=_selectedContacts;
@property(nonatomic) unsigned long long remainingInvitationsCount; // @synthesize remainingInvitationsCount=_remainingInvitationsCount;
@property(readonly, nonatomic) GKSCallToActionPanel *callToActionPanel; // @synthesize callToActionPanel=_callToActionPanel;
@property(retain, nonatomic) UIViewController<SKTShareSheet> *sendKitViewController; // @synthesize sendKitViewController=_sendKitViewController;
@property(readonly, nonatomic) id <SKTSendKitUIService> sendKitUIService; // @synthesize sendKitUIService=_sendKitUIService;
@property(nonatomic) __weak id <GFMISendInvitationsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateBottomConstraintWithPadding:(double)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)addSendKitSubview;
- (void)showAlertWithPage:(id)arg1;
- (void)displayErrorViewFromError:(id)arg1;
- (void)drawInvitationFlowUI;
- (id)fetchFlowConfiguration;
- (void)finishFlow;
- (id)sendInvites;
- (_Bool)checkSelectedContactsAreEmailContacts;
- (void)challengeUserWithInstrumentChallengeToken:(id)arg1;
- (id)checkUserChallengeRequirement;
- (void)shareSheet:(id)arg1 didDeselectTarget:(id)arg2;
- (void)shareSheet:(id)arg1 didSelectTarget:(id)arg2;
- (_Bool)shareSheet:(id)arg1 shouldSelectTarget:(id)arg2;
- (void)handleCallToActionPanelSecondaryAction;
- (void)handleCallToActionPanelPrimaryAction;
- (long long)preferredStatusBarStyle;
- (void)viewRefreshDidFinish;
- (id)executeViewRefresh;
- (void)viewRefreshWillBegin;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) GFMILabelWithRetryButton *errorView; // @synthesize errorView=_errorView;
- (id)initWithDelegate:(id)arg1 withinFlow:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

