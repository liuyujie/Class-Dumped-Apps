//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFStatefulTableViewController.h>

#import <PSPDFKitUI/PSPDFStyleable-Protocol.h>

@class NSDictionary, NSString, UIBarButtonItem;
@protocol PSPDFSignatureSelectorViewControllerDelegate, PSPDFSignatureStore;

@interface PSPDFSignatureSelectorViewController : PSPDFStatefulTableViewController <PSPDFStyleable>
{
    UIBarButtonItem *_addSignatureButtonItem;
    UIBarButtonItem *_doneButtonItem;
    _Bool _forcesStatusBarHidden;
    id <PSPDFSignatureStore> _signatureStore;
    id <PSPDFSignatureSelectorViewControllerDelegate> _delegate;
    NSDictionary *_userInfo;
}

@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <PSPDFSignatureSelectorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <PSPDFSignatureStore> signatureStore; // @synthesize signatureStore=_signatureStore;
@property(nonatomic) _Bool forcesStatusBarHidden; // @synthesize forcesStatusBarHidden=_forcesStatusBarHidden;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateControllerState;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)pspdf_willTransitionToPresentationStyle:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)setupBarButtonItemsForPopover:(_Bool)arg1;
- (void)commonInit;
- (void)doneAction:(id)arg1;
- (void)addSignatureAction:(id)arg1;
@property(readonly, nonatomic) UIBarButtonItem *doneButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *addSignatureButtonItem;

// Remaining properties
@property(nonatomic) long long barStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isBarTranslucent;
@property(readonly) Class superclass;

@end

