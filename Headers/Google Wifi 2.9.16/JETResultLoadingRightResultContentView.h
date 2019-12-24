//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETTextContentView.h"

#import "QTMActivityIndicatorDelegate-Protocol.h"

@class NSString, NSTimer, QTMActivityIndicator, UIImageView, UILabel;

@interface JETResultLoadingRightResultContentView : JETTextContentView <QTMActivityIndicatorDelegate>
{
    NSTimer *_revealTimer;
    QTMActivityIndicator *_indicator;
    UILabel *_resultLabel;
    UIImageView *_completedImageView;
}

@property(nonatomic) __weak UIImageView *completedImageView; // @synthesize completedImageView=_completedImageView;
@property(nonatomic) __weak UILabel *resultLabel; // @synthesize resultLabel=_resultLabel;
@property(nonatomic) __weak QTMActivityIndicator *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) NSTimer *revealTimer; // @synthesize revealTimer=_revealTimer;
- (void).cxx_destruct;
- (void)loadingDidFinish;
- (void)layoutSubviews;
- (void)updateViewWithObject:(id)arg1;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
