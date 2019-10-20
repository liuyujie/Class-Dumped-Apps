//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDelegate-Protocol.h"
#import "WAAutoCompleteSelectorViewDelegate-Protocol.h"
#import "WACaptionBarDelegate-Protocol.h"
#import "WAMentionsSelectorViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView, UIView, WAChatSession, WALiveLocationCaptionBarTableViewCell, WALiveLocationPickerTableViewCell, WALiveLocationShareSettings, WAMentionsSelectorView;
@protocol WALiveLocationTableViewControllerDelegate;

@interface WALiveLocationTableViewController : UIViewController <UITableViewDelegate, WACaptionBarDelegate, WAMentionsSelectorViewDelegate, WAAutoCompleteSelectorViewDelegate>
{
    UITableView *_tableView;
    NSArray *_rows;
    WALiveLocationShareSettings *_settings;
    WALiveLocationPickerTableViewCell *_pickerCell;
    WALiveLocationCaptionBarTableViewCell *_captionBarCell;
    unsigned long long _tagOfCellBeingEdited;
    NSArray *_pickerRows;
    WAChatSession *_chatSession;
    UIView *_mentionsSelectorContainer;
    WAMentionsSelectorView *_mentionsSelectorView;
    double _animationDuration;
    long long _animationCurve;
    _Bool _animatingRotation;
    struct CGRect _keyboardFrame;
    _Bool _keyboardShown;
    _Bool _suppressCloseButton;
    id <WALiveLocationTableViewControllerDelegate> _delegate;
    NSString *_chatName;
}

@property(nonatomic) _Bool suppressCloseButton; // @synthesize suppressCloseButton=_suppressCloseButton;
@property(copy, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) __weak id <WALiveLocationTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showErrorMessage:(id)arg1;
- (void)send:(id)arg1;
- (void)autoCompleteSelectorView:(id)arg1 willBecomeHidden:(_Bool)arg2;
- (void)mentionsSelectorView:(id)arg1 didSelectContactWithName:(id)arg2 jid:(id)arg3 forTextRange:(struct _NSRange)arg4;
- (void)updateMentionsSelectorContainerFrame;
- (void)updateMentionsSelectorViewLayoutWithAnimationCurve:(long long)arg1 animationDuration:(double)arg2;
- (void)configureMentionsSelectorView;
- (void)captionBarDidRequestShowStickerStore:(id)arg1;
- (void)captionBar:(id)arg1 didRequestShowGIFSearchWithPreloadedItems:(id)arg2;
- (void)captionBar:(id)arg1 didRequestSendGIF:(id)arg2;
- (void)captionBar:(id)arg1 didRequestSendSticker:(id)arg2;
- (void)captionBarDidRequestAddMedia:(id)arg1;
- (void)captionBarDidChangeDistanceFromBottom:(id)arg1;
- (void)captionBarDidChangeText:(id)arg1;
- (void)captionBarIgnoreWillShowKeyboard:(id)arg1;
- (void)captionBarDidHideKeyboard:(id)arg1;
- (void)captionBarWillHideKeyboard:(id)arg1;
- (void)captionBarDidShowKeyboard:(id)arg1;
- (void)captionBarWillShowKeyboard:(id)arg1;
- (_Bool)captionBar:(id)arg1 canMentionUser:(id)arg2;
- (void)captionBarDidStopEditingMention:(id)arg1;
- (void)captionBar:(id)arg1 didEditMention:(id)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)captionBarShouldTrackMentions:(id)arg1;
- (_Bool)canCaptionBarAddMedia:(id)arg1;
- (void)captionBarDidRequestSendMessage:(id)arg1;
- (void)captionBarDidFinishEditing:(id)arg1;
- (void)captionBarDidBeginEditing:(id)arg1;
- (void)captionBarDidChangeHeight:(id)arg1;
- (double)captionBarContainerHeight:(id)arg1;
- (double)wa_extraBottomInset;
- (_Bool)wa_cardNavigationControllerShouldCenterTitle;
- (_Bool)wa_cardNavigationControllerShouldHaveFlatTop;
- (double)wa_minimumVisibleCardHeight;
- (id)wa_cardNavigationControllerTrailingButton;
- (void)dismiss;
- (void)wa_cardNavigationControllerTrailingButtonPressed:(id)arg1;
- (_Bool)wa_autoExpandOnContentSizeChange;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)commentRow;
- (id)pickerRow;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)minutes;
- (void)adjustViewsForKeyboardFrame:(struct CGRect)arg1;
- (void)adjustViewsForKeyboardFrame:(struct CGRect)arg1 withAnimationDuration:(double)arg2 animationCurve:(long long)arg3;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)keyboardDidHideNotification:(id)arg1;
- (void)keyboardDidShowNotification:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (_Bool)landscapeMode;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 mentionsSelectorContainer:(id)arg2 chatSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
