//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABaseReceiptTableViewCell.h"

@class NSArray, NSLayoutConstraint, UILabel, UIView, WAParticipantReceipts, WAProfilePictureDynamicThumbnailView, WAUserJID;

@interface WAGroupReceiptTableViewCell : WABaseReceiptTableViewCell
{
    _Bool _expanded;
    _Bool _mediaMessage;
    _Bool _largeTextSizeLayout;
    UILabel *_contactNameLabel;
    UILabel *_pushNameLabel;
    WAUserJID *_userJID;
    WAParticipantReceipts *_participantReceipts;
    long long _receiptLevel;
    NSLayoutConstraint *_timeLabelMinimumWidthConstraint;
    WAProfilePictureDynamicThumbnailView *_profilePictureView;
    UIView *_contactNameContainerView;
    UIView *_detailsView;
    NSArray *_detailRows;
    NSArray *_constraintsForExpandedState;
    NSLayoutConstraint *_dateLabelVerticalPosition;
}

+ (id)receiptTimeStringForDate:(id)arg1;
+ (id)receiptDetailTimeStringForDate:(id)arg1;
+ (id)receiptDateStringForDate:(id)arg1;
@property(retain, nonatomic) NSLayoutConstraint *dateLabelVerticalPosition; // @synthesize dateLabelVerticalPosition=_dateLabelVerticalPosition;
@property(copy, nonatomic) NSArray *constraintsForExpandedState; // @synthesize constraintsForExpandedState=_constraintsForExpandedState;
@property(nonatomic) _Bool largeTextSizeLayout; // @synthesize largeTextSizeLayout=_largeTextSizeLayout;
@property(copy, nonatomic) NSArray *detailRows; // @synthesize detailRows=_detailRows;
@property(retain, nonatomic) UIView *detailsView; // @synthesize detailsView=_detailsView;
@property(retain, nonatomic) UIView *contactNameContainerView; // @synthesize contactNameContainerView=_contactNameContainerView;
@property(retain, nonatomic) WAProfilePictureDynamicThumbnailView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property(retain, nonatomic) NSLayoutConstraint *timeLabelMinimumWidthConstraint; // @synthesize timeLabelMinimumWidthConstraint=_timeLabelMinimumWidthConstraint;
@property(nonatomic, getter=isMediaMessage) _Bool mediaMessage; // @synthesize mediaMessage=_mediaMessage;
@property(nonatomic) long long receiptLevel; // @synthesize receiptLevel=_receiptLevel;
@property(copy, nonatomic) WAParticipantReceipts *participantReceipts; // @synthesize participantReceipts=_participantReceipts;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) WAUserJID *userJID; // @synthesize userJID=_userJID;
@property(readonly, nonatomic) UILabel *pushNameLabel; // @synthesize pushNameLabel=_pushNameLabel;
@property(readonly, nonatomic) UILabel *contactNameLabel; // @synthesize contactNameLabel=_contactNameLabel;
- (void).cxx_destruct;
- (void)setParticipantReceipts:(id)arg1 receiptLevel:(long long)arg2 isMediaMessage:(_Bool)arg3 expanded:(_Bool)arg4;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateLayoutForExpandedState;
- (void)updateReceiptDetails;
- (void)updateReceiptSummary;
- (id)receiptDateForLevel:(long long)arg1;
- (void)layoutSubviews;
- (void)setTimeLabelMinimumWidth:(double)arg1;
@property(readonly, nonatomic) double timeLabelPreferredWidth;
- (id)initWithReuseIdentifier:(id)arg1;

@end
