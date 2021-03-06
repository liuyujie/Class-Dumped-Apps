//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/OGLGMAccountSelectorCellBase.h>

#import <Module_Framework/OGLGM2AccountSelectorTextAndImageCell-Protocol.h>

@class NSString, OGLTextWithImageView;

@interface OGLGM2AccountSelectorGeneralCellBase : OGLGMAccountSelectorCellBase <OGLGM2AccountSelectorTextAndImageCell>
{
    _Bool _disableImageTint;
    long long _brandFontFace;
    OGLTextWithImageView *_textWithImageView;
}

+ (double)heightWithItem:(id)arg1 constrainToCellWidth:(double)arg2;
@property(nonatomic) _Bool disableImageTint; // @synthesize disableImageTint=_disableImageTint;
@property(retain, nonatomic) OGLTextWithImageView *textWithImageView; // @synthesize textWithImageView=_textWithImageView;
@property(nonatomic) long long brandFontFace; // @synthesize brandFontFace=_brandFontFace;
- (void).cxx_destruct;
- (void)applyTheme;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateWithItem:(id)arg1;
- (id)imageTintColor;
- (id)textStyleConfiguration;
- (id)layoutConfiguration;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double horizontalInset;
@property(readonly) Class superclass;

@end

