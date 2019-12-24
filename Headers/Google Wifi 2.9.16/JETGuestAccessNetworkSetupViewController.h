//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareCollectionViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class GOOTextFieldContentViewObject, JETButtonFooter, JETPSKValidator, JETSSIDValidator, NSString, QTMButton;

@interface JETGuestAccessNetworkSetupViewController : JETGroupAwareCollectionViewController <UITextFieldDelegate>
{
    _Bool _SSIDValid;
    _Bool _PSKValid;
    JETButtonFooter *_footerBar;
    GOOTextFieldContentViewObject *_SSIDField;
    JETSSIDValidator *_SSIDValidator;
    GOOTextFieldContentViewObject *_PSKField;
    JETPSKValidator *_PSKValidator;
    QTMButton *_nextButton;
}

@property(retain, nonatomic) QTMButton *nextButton; // @synthesize nextButton=_nextButton;
@property(nonatomic) _Bool PSKValid; // @synthesize PSKValid=_PSKValid;
@property(retain, nonatomic) JETPSKValidator *PSKValidator; // @synthesize PSKValidator=_PSKValidator;
@property(retain, nonatomic) GOOTextFieldContentViewObject *PSKField; // @synthesize PSKField=_PSKField;
@property(nonatomic) _Bool SSIDValid; // @synthesize SSIDValid=_SSIDValid;
@property(retain, nonatomic) JETSSIDValidator *SSIDValidator; // @synthesize SSIDValidator=_SSIDValidator;
@property(retain, nonatomic) GOOTextFieldContentViewObject *SSIDField; // @synthesize SSIDField=_SSIDField;
@property(retain, nonatomic) JETButtonFooter *footerBar; // @synthesize footerBar=_footerBar;
- (void).cxx_destruct;
- (void)nextButtonTapped;
- (void)textFieldChanged:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
