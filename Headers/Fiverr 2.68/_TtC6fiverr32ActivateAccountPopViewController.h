//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UILabel, UIView;

@interface _TtC6fiverr32ActivateAccountPopViewController : UIViewController
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: popupView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: supportButton
    // Error parsing type: , name: resendButton
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)resendClicked:(id)arg1;
- (void)supportClicked:(id)arg1;
- (void)backgroundClicked:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
@property(nonatomic) __weak UIButton *resendButton; // @synthesize resendButton;
@property(nonatomic) __weak UIButton *supportButton; // @synthesize supportButton;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UIView *popupView; // @synthesize popupView;

@end
