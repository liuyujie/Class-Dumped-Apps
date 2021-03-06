//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESetupCustomLayoutViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class MDCTextField, MDCTextInputControllerFilled, NSString;
@protocol HMESetupCustomDeviceNameViewControllerDelegate;

@interface HMESetupCustomDeviceNameViewController : HMESetupCustomLayoutViewController <UITextFieldDelegate>
{
    id <HMESetupCustomDeviceNameViewControllerDelegate> _delegate;
    NSString *_chosenDeviceName;
    NSString *_deviceTypeName;
    MDCTextInputControllerFilled *_inputController;
    MDCTextField *_textField;
}

@property(retain, nonatomic) MDCTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) MDCTextInputControllerFilled *inputController; // @synthesize inputController=_inputController;
@property(readonly, nonatomic) NSString *deviceTypeName; // @synthesize deviceTypeName=_deviceTypeName;
@property(copy, nonatomic) NSString *chosenDeviceName; // @synthesize chosenDeviceName=_chosenDeviceName;
@property(nonatomic) __weak id <HMESetupCustomDeviceNameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deviceNameFieldChanged:(id)arg1;
- (id)stringByTrimmingWhitespace:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidLoad;
- (id)initWithInitialDeviceName:(id)arg1 deviceTypeName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

