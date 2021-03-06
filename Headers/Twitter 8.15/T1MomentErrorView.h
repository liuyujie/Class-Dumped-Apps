//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNTouchDownGestureRecognizer, UILabel, UITapGestureRecognizer;

@interface T1MomentErrorView : UIView
{
    CDUnknownBlockType _refreshBlock;
    UILabel *_errorLabel;
    UILabel *_subtitleLabel;
    TFNTouchDownGestureRecognizer *_pressDownGestureRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    struct UIEdgeInsets _additionalContentEdgeInsets;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) TFNTouchDownGestureRecognizer *pressDownGestureRecognizer; // @synthesize pressDownGestureRecognizer=_pressDownGestureRecognizer;
@property(nonatomic) struct UIEdgeInsets additionalContentEdgeInsets; // @synthesize additionalContentEdgeInsets=_additionalContentEdgeInsets;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(copy, nonatomic) CDUnknownBlockType refreshBlock; // @synthesize refreshBlock=_refreshBlock;
- (void).cxx_destruct;
- (void)_didPress:(id)arg1;
- (void)_didTap:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

