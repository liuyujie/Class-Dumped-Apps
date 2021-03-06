//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFBaseViewController.h>

#import <PSPDFKitUI/PSPDFNoteAnnotationViewControllerDataProviderDelegate-Protocol.h>
#import <PSPDFKitUI/PSPDFStyleable-Protocol.h>
#import <PSPDFKitUI/UITableViewDataSource-Protocol.h>
#import <PSPDFKitUI/UITableViewDelegate-Protocol.h>
#import <PSPDFKitUI/UITextViewDelegate-Protocol.h>

@class NSString, PSPDFAnnotation, PSPDFBaseTableViewController, PSPDFConfiguration, PSPDFKeyboardTracker, PSPDFNoteAnnotationStyleView, PSPDFNoteAnnotationViewControllerDataProvider, PSPDFNoteAnnotationViewControllerTextViewDelegateHandler, PSPDFSelectableBarButtonItem, UIBarButtonItem, UIColor, UITableView, UITextView, UIView;
@protocol PSPDFNoteAnnotationViewControllerDelegate, PSPDFNoteAnnotationViewControllerDelegate><PSPDFDelegateProxying;

@interface PSPDFNoteAnnotationViewController : PSPDFBaseViewController <PSPDFNoteAnnotationViewControllerDataProviderDelegate, UITableViewDataSource, UITableViewDelegate, UITextViewDelegate, PSPDFStyleable>
{
    struct {
        unsigned int isAddingReply:1;
    } _flags;
    PSPDFSelectableBarButtonItem *_optionsButton;
    UIView *_backgroundView;
    _Bool _showsTimestamps;
    _Bool _showsAuthorName;
    UIColor *_commentBackgroundColor;
    PSPDFBaseTableViewController *_tableViewController;
    PSPDFNoteAnnotationStyleView *_optionsView;
    UITextView *_editingTextView;
    UIBarButtonItem *_trashBarButtonItem;
    PSPDFNoteAnnotationViewControllerTextViewDelegateHandler *_textViewDelegateHandler;
    PSPDFKeyboardTracker *_keyboardTracker;
    id <PSPDFNoteAnnotationViewControllerDelegate><PSPDFDelegateProxying> _delegateProxyStorage;
    PSPDFNoteAnnotationViewControllerDataProvider *_dataProvider;
}

@property(readonly, nonatomic) PSPDFNoteAnnotationViewControllerDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain) id <PSPDFNoteAnnotationViewControllerDelegate><PSPDFDelegateProxying> delegateProxyStorage; // @synthesize delegateProxyStorage=_delegateProxyStorage;
@property(retain, nonatomic) PSPDFKeyboardTracker *keyboardTracker; // @synthesize keyboardTracker=_keyboardTracker;
@property(retain, nonatomic) PSPDFNoteAnnotationViewControllerTextViewDelegateHandler *textViewDelegateHandler; // @synthesize textViewDelegateHandler=_textViewDelegateHandler;
@property(retain, nonatomic) UIBarButtonItem *trashBarButtonItem; // @synthesize trashBarButtonItem=_trashBarButtonItem;
@property(retain, nonatomic) UITextView *editingTextView; // @synthesize editingTextView=_editingTextView;
@property(retain, nonatomic) PSPDFNoteAnnotationStyleView *optionsView; // @synthesize optionsView=_optionsView;
@property(readonly, nonatomic) PSPDFBaseTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(nonatomic) _Bool showsAuthorName; // @synthesize showsAuthorName=_showsAuthorName;
@property(nonatomic) _Bool showsTimestamps; // @synthesize showsTimestamps=_showsTimestamps;
@property(retain, nonatomic) UIColor *commentBackgroundColor; // @synthesize commentBackgroundColor=_commentBackgroundColor;
- (void).cxx_destruct;
- (void)reevaluateColorsForAddReplyView:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)tappedReviewRow:(id)arg1;
- (void)showSetStatusDialogForCell:(id)arg1 sender:(id)arg2;
- (void)moreButtonTapped:(id)arg1;
- (void)setReviewButtonTapped:(id)arg1;
- (void)deleteOrClearAnnotationWithoutConfirmation;
- (void)deleteAnnotation:(id)arg1;
- (_Bool)shouldPresentActionSheetAsPopover;
- (id)deleteAnnotationActionTitle;
- (void)addReplyAction:(id)arg1;
- (void)updateTitle;
@property(readonly, nonatomic) UITextView *textView;
@property(readonly, nonatomic) PSPDFSelectableBarButtonItem *optionsButton;
- (void)setUpKyboardTracking;
- (void)flushPendingChangesInTextView:(id)arg1;
- (void)updateAddReplyView:(id)arg1 animated:(_Bool)arg2;
- (void)doneButtonTapped:(id)arg1;
- (id)commentCellAtIndex:(unsigned long long)arg1;
- (id)firstCommentCell;
- (_Bool)beginEditingIfAppropriate;
- (_Bool)beginEditingCommentAtIndex:(unsigned long long)arg1;
- (_Bool)beginEditing;
@property(readonly, nonatomic) UITableView *tableView;
- (id)retrieveAddReplyViewForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateBackgroundColorsAnimated:(_Bool)arg1;
- (void)toggleOptions:(id)arg1;
- (void)finishUpdatingOptionsViewVisible:(_Bool)arg1 finished:(_Bool)arg2;
- (void)updateInsets;
- (void)updateOptionsViewVisible:(_Bool)arg1 inPopover:(_Bool)arg2;
- (_Bool)isOptionsViewVisible;
- (void)showOptions:(_Bool)arg1;
- (void)updateNoteStyleView;
- (void)setupOptionView;
- (void)viewDidLayoutSubviews;
- (void)updateForPresentationInPopover:(_Bool)arg1;
- (void)dismissAlertControllerIfNeeded;
- (void)pspdf_willTransitionToPresentationStyle:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppearAfterNotBeingAppeared:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)makeNewCommentFirstResponderIfNeededWithIndexPathDiff:(id)arg1;
- (void)noteAnnotationViewControllerDataProvider:(id)arg1 didUpdateWithIndexPathDiff:(id)arg2;
- (void)noteAnnotationViewControllerDataProviderRequestsPendingChanges:(id)arg1;
@property(nonatomic) _Bool showColorAndIconOptions;
@property(retain, nonatomic) PSPDFConfiguration *configuration;
@property(retain, nonatomic) PSPDFAnnotation *annotation;
- (id)initWithCoder:(id)arg1;
- (id)initWithAnnotation:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (Class)classForClass:(Class)arg1;
@property(retain, nonatomic) id <PSPDFNoteAnnotationViewControllerDelegate><PSPDFDelegateProxying> delegateProxy;
@property(nonatomic) __weak id <PSPDFNoteAnnotationViewControllerDelegate> delegate;
- (void)updateToolbar;
- (void)setupToolbar;
@property(readonly, nonatomic) UIView *backgroundView;
- (void)updateTextView:(id)arg1;

// Remaining properties
@property(nonatomic) long long barStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool forcesStatusBarHidden;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isBarTranslucent;
@property(readonly) Class superclass;

@end

