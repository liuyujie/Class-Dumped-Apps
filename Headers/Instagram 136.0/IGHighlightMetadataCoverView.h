//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGHighlightCoverViewType-Protocol.h>
#import <InstagramAppCoreFramework/UITextFieldDelegate-Protocol.h>

@class IGHighlightCoverPreviewView, IGTextField, NSString, UIButton;
@protocol IGHighlightCoverCellDelegate;

@interface IGHighlightMetadataCoverView : UIView <UITextFieldDelegate, IGHighlightCoverViewType>
{
    IGHighlightCoverPreviewView *_coverPreviewView;
    UIButton *_editCoverButton;
    id <IGHighlightCoverCellDelegate> _delegate;
    IGTextField *_titleTextField;
}

+ (double)preferredHeight;
@property(readonly, nonatomic) IGTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(nonatomic) __weak id <IGHighlightCoverCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_editCoverTapped:(id)arg1;
- (void)configureWithCover:(id)arg1 title:(id)arg2 module:(id)arg3 disabled:(_Bool)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

