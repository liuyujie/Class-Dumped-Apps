//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RUIActionSheetViewControllerDelegate-Protocol.h"

@class NSOrderedSet, NSString, RUIActionSheetViewController;
@protocol FeedSortOptionControllerDelegate;

@interface FeedSortOptionController : NSObject <RUIActionSheetViewControllerDelegate>
{
    id <FeedSortOptionControllerDelegate> _delegate;
    unsigned long long _state;
    unsigned long long _selectedFeedSort;
    unsigned long long _selectedFeedRange;
    RUIActionSheetViewController *_actionSheet;
    NSOrderedSet *_feedSorts;
}

@property(retain, nonatomic) NSOrderedSet *feedSorts; // @synthesize feedSorts=_feedSorts;
@property(retain, nonatomic) RUIActionSheetViewController *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) unsigned long long selectedFeedRange; // @synthesize selectedFeedRange=_selectedFeedRange;
@property(nonatomic) unsigned long long selectedFeedSort; // @synthesize selectedFeedSort=_selectedFeedSort;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <FeedSortOptionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionSheetViewController:(id)arg1 didGetDismissedFromOutside:(_Bool)arg2;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)setupForTimeOptionsWithRetainPreviouslySelectedRange:(_Bool)arg1;
- (void)setupForSortOptions;
- (void)finish;
- (void)presentFromViewController:(id)arg1 fromView:(id)arg2;
- (id)initWithSelectedFeedSort:(unsigned long long)arg1 feedRange:(unsigned long long)arg2 feedSorts:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

