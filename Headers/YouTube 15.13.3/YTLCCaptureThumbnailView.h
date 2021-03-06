//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTLCCustomThumbnailCaptureClipper-Protocol.h>

@class NSString, QTMButton, UILabel, YTLCCountdownView;

@interface YTLCCaptureThumbnailView : UIView <YTLCCustomThumbnailCaptureClipper>
{
    QTMButton *_backButton;
    QTMButton *_switchCameraButton;
    long long _streamOrientation;
    YTLCCountdownView *_countdownView;
    UILabel *_countdownLabel;
    UIView *_previewView;
}

@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(retain, nonatomic) YTLCCountdownView *countdownView; // @synthesize countdownView=_countdownView;
@property(nonatomic) long long streamOrientation; // @synthesize streamOrientation=_streamOrientation;
@property(retain, nonatomic) QTMButton *switchCameraButton; // @synthesize switchCameraButton=_switchCameraButton;
@property(retain, nonatomic) QTMButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (id)clippedThumbnailImageFromImage:(id)arg1;
- (struct CGRect)captureBounds;
- (struct CGSize)previewSize;
- (void)layoutSubviews;
- (void)setCountdownText:(id)arg1;
- (void)stopCountdown;
- (void)startCountdownWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

