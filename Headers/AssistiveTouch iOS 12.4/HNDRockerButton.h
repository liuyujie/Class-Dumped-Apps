//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HNDView.h"

#import "AXAssistiveTouchLayoutItem-Protocol.h"

@class NSBundle, NSString, UIImage, UIImageView, UILabel, UIView;
@protocol HNDRockerButtonDataSource;

@interface HNDRockerButton : HNDView <AXAssistiveTouchLayoutItem>
{
    CDUnknownBlockType _downBlock;
    CDUnknownBlockType _upBlock;
    NSString *_title;
    _Bool _selected;
    _Bool _highlighted;
    UILabel *_label;
    NSString *_imageName;
    UIImageView *_imageView;
    _Bool _isEmptyFavorite;
    _Bool _customTitle;
    _Bool _isBackButton;
    _Bool _showWithGuidedAccess;
    _Bool isEmptyFavorite;
    _Bool customTitle;
    _Bool isModalDown;
    _Bool _continueHighlightAfterTouch;
    _Bool _disabled;
    NSBundle *_imageBundle;
    CDUnknownBlockType _substantialTransitionOccurredBlock;
    NSString *_location;
    id <HNDRockerButtonDataSource> _dataSource;
    NSString *_type;
    UIImage *_selectedImage;
    UIImage *_unselectedImage;
}

+ (id)buttonWithTitle:(id)arg1 imageName:(id)arg2 downBlock:(CDUnknownBlockType)arg3 upBlock:(CDUnknownBlockType)arg4 dataSource:(id)arg5 showWithGuidedAccess:(_Bool)arg6;
@property(retain, nonatomic) UIImage *unselectedImage; // @synthesize unselectedImage=_unselectedImage;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <HNDRockerButtonDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) CDUnknownBlockType substantialTransitionOccurredBlock; // @synthesize substantialTransitionOccurredBlock=_substantialTransitionOccurredBlock;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool showWithGuidedAccess; // @synthesize showWithGuidedAccess=_showWithGuidedAccess;
@property(retain, nonatomic) NSBundle *imageBundle; // @synthesize imageBundle=_imageBundle;
@property(nonatomic) _Bool continueHighlightAfterTouch; // @synthesize continueHighlightAfterTouch=_continueHighlightAfterTouch;
@property(nonatomic) _Bool isBackButton; // @synthesize isBackButton=_isBackButton;
@property(nonatomic) _Bool isModalDown; // @synthesize isModalDown;
@property(nonatomic) _Bool customTitle; // @synthesize customTitle;
@property(nonatomic) _Bool isEmptyFavorite; // @synthesize isEmptyFavorite;
@property(copy, nonatomic) CDUnknownBlockType upBlock; // @synthesize upBlock=_upBlock;
@property(copy, nonatomic) CDUnknownBlockType downBlock; // @synthesize downBlock=_downBlock;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (id)description;
- (id)accessibilityLabel;
- (struct CGRect)accessibilityFrame;
- (_Bool)isAccessibilityElement;
@property(readonly, nonatomic) UIView *imageViewContainerView;
- (void)dealloc;
- (void)updateTextColor;
- (id)getDeviceSpecificImage;
- (id)currentImage;
- (void)resetImages;
- (_Bool)_inSelectedState;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)performPress:(_Bool)arg1;
- (void)handleRealUpEvent:(struct CGPoint)arg1 maxOrb:(double)arg2;
- (void)handleRealCancelEvent:(struct CGPoint)arg1;
- (void)handleFingerDriftedAway;
- (void)handleRealDownEvent:(struct CGPoint)arg1;
- (void)_updateImage;
- (void)_updateFont;
- (id)viewForLastBaselineLayout;
- (id)initWithImageName:(id)arg1;

@end
