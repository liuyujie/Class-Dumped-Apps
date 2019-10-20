//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAQRCodeScannerViewController.h"

#import "WAQRCodeScannerViewControllerDelegate-Protocol.h"
#import "WAWebClientQRHelpViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UIView, WABubbleTextView, WAWebClientQRHelpView;

@interface WAWebClientQRCodeScannerViewController : WAQRCodeScannerViewController <WAWebClientQRHelpViewDelegate, WAQRCodeScannerViewControllerDelegate>
{
    WAWebClientQRHelpView *_helpView;
    UILabel *_titleLabel;
    UIView *_titleBackgroundView;
    UIButton *_dismissButton;
    WABubbleTextView *_retryingView;
    unsigned long long _retryCount;
    CDUnknownBlockType _dismissalBlock;
}

+ (void)presentWithBlock:(CDUnknownBlockType)arg1 dismissBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)hideRetryingView;
- (void)retry;
- (void)willShowExitButton;
- (void)willAcceptQRCode;
- (void)dismissHelpView:(id)arg1;
- (void)webClientQRHelpViewDidCompleteFirstIteration:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDismissBlock:(CDUnknownBlockType)arg1;
- (void)qrCodeScannerViewControllerDidCancel:(id)arg1;
- (void)qrCodeScannerViewController:(id)arg1 didFinishWithCode:(id)arg2;
- (_Bool)qrCodeScannerViewController:(id)arg1 shouldAcceptCode:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
