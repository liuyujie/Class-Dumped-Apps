//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/DTAttributedTextContentViewDelegate-Protocol.h>
#import <Module_Framework/GKSCallToActionPanelDelegate-Protocol.h>

@class DTAttributedLabel, DTAttributedTextView, GIMMe, GIPNetworkImageView, GKSCallToActionPanel, NSString;
@protocol GFMIInvitationConclusionViewDelegate;

@interface GFMIInvitationConclusionView : UIView <DTAttributedTextContentViewDelegate, GKSCallToActionPanelDelegate>
{
    GIMMe *_gimme;
    id <GFMIInvitationConclusionViewDelegate> _delegate;
    GIPNetworkImageView *_headerImageView;
    DTAttributedLabel *_titleLabel;
    UIView *_titleLabelWrapper;
    DTAttributedTextView *_descriptionView;
    GKSCallToActionPanel *_callToActionPanel;
}

@property(retain, nonatomic) GKSCallToActionPanel *callToActionPanel; // @synthesize callToActionPanel=_callToActionPanel;
@property(retain, nonatomic) DTAttributedTextView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIView *titleLabelWrapper; // @synthesize titleLabelWrapper=_titleLabelWrapper;
@property(retain, nonatomic) DTAttributedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GIPNetworkImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(nonatomic) __weak id <GFMIInvitationConclusionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (double)profileMetricScale;
- (double)headerImagePadding;
- (double)headerImageSize;
- (void)layoutDescription;
- (void)layoutTitle;
- (id)HTMLStringForString:(id)arg1 font:(id)arg2 alignment:(unsigned char)arg3;
- (void)linkTapped:(id)arg1;
- (void)handleCallToActionPanelSecondaryAction;
- (void)handleCallToActionPanelPrimaryAction;
- (id)attributedTextContentView:(id)arg1 viewForLink:(id)arg2 identifier:(id)arg3 frame:(struct CGRect)arg4;
- (void)layoutSubviews;
- (id)initWithPage:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

