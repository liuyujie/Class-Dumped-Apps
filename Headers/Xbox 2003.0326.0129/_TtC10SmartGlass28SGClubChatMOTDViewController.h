//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXModalViewController.h"

@class NSLayoutConstraint, UILabel, UITextView, _TtC10SmartGlass16SGLocalizedLabel, _TtC10SmartGlass17SGLocalizedButton;

@interface _TtC10SmartGlass28SGClubChatMOTDViewController : XBXModalViewController
{
    // Error parsing type: , name: chatTopicTitleLabel
    // Error parsing type: , name: postedUserLabel
    // Error parsing type: , name: messageEditViewHelperLabel
    // Error parsing type: , name: messageEditView
    // Error parsing type: , name: postButtonBottomConstraint
    // Error parsing type: , name: postButton
    // Error parsing type: , name: memberOnlyLabel
    // Error parsing type: , name: messageEditViewHeightConstraint
    // Error parsing type: , name: minMessageEditViewHeight
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)postButtonTapped:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (void)onNavigatedFrom:(id)arg1 andCompleteBlock:(CDUnknownBlockType)arg2;
- (void)onNavigatedTo:(id)arg1 andCompleteBlock:(CDUnknownBlockType)arg2;
- (void)onInitialize;
@property(nonatomic) __weak NSLayoutConstraint *messageEditViewHeightConstraint; // @synthesize messageEditViewHeightConstraint;
@property(nonatomic) __weak _TtC10SmartGlass16SGLocalizedLabel *memberOnlyLabel; // @synthesize memberOnlyLabel;
@property(nonatomic) __weak _TtC10SmartGlass17SGLocalizedButton *postButton; // @synthesize postButton;
@property(nonatomic) __weak NSLayoutConstraint *postButtonBottomConstraint; // @synthesize postButtonBottomConstraint;
@property(nonatomic) __weak UITextView *messageEditView; // @synthesize messageEditView;
@property(nonatomic) __weak UILabel *messageEditViewHelperLabel; // @synthesize messageEditViewHelperLabel;
@property(nonatomic) __weak UILabel *postedUserLabel; // @synthesize postedUserLabel;
@property(nonatomic) __weak UILabel *chatTopicTitleLabel; // @synthesize chatTopicTitleLabel;

@end

