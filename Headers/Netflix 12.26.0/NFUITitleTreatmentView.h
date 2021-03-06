//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSCopying-Protocol.h"

@class NFUILabel, NSString, UIImageViewAligned;

@interface NFUITitleTreatmentView : UIView <NSCopying>
{
    _Bool _topAlignFallbackLabelText;
    _Bool _useFramesForImage;
    _Bool _fallbackTitleNeedsLayout;
    double _fallbackDelay;
    NSString *_url;
    UIImageViewAligned *_imageView;
    NFUILabel *_fallbackLabel;
}

@property(nonatomic) _Bool fallbackTitleNeedsLayout; // @synthesize fallbackTitleNeedsLayout=_fallbackTitleNeedsLayout;
@property(nonatomic) _Bool useFramesForImage; // @synthesize useFramesForImage=_useFramesForImage;
@property(retain, nonatomic) NFUILabel *fallbackLabel; // @synthesize fallbackLabel=_fallbackLabel;
@property(retain, nonatomic) UIImageViewAligned *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool topAlignFallbackLabelText; // @synthesize topAlignFallbackLabelText=_topAlignFallbackLabelText;
@property(nonatomic) double fallbackDelay; // @synthesize fallbackDelay=_fallbackDelay;
- (void).cxx_destruct;
- (void)cancelImageRequest;
- (void)prepareForReuse;
- (void)resetWithFrame:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)showFallbackTitle:(id)arg1 fadeIn:(_Bool)arg2;
- (void)showFallbackTitle:(id)arg1;
@property(nonatomic) int alignment;
- (long long)contentMode;
- (void)setContentMode:(long long)arg1;
- (void)configureWithUrl:(id)arg1 fallbackTitle:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1 imageShouldUseFrames:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

