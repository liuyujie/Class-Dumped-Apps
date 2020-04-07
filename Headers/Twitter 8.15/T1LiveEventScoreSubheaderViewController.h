//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/T1ResizableHeaderSubheader-Protocol.h>

@class NSString, T1LiveEventScoreView, T1MomentScoreView, TFNTwitterLiveEventTopModule, TFNTwitterLiveEventTopModuleScore, TIPImagePipeline;

@interface T1LiveEventScoreSubheaderViewController : TFNViewController <T1ResizableHeaderSubheader>
{
    _Bool _scoreCardRedesignEnabled;
    CDUnknownBlockType _preferredHeightCheckBlock;
    id _subheaderInfo;
    TFNTwitterLiveEventTopModule *_topModule;
    TIPImagePipeline *_imagePipeline;
    T1MomentScoreView *_momentScoreView;
    T1LiveEventScoreView *_liveEventScoreView;
}

@property(retain, nonatomic) T1LiveEventScoreView *liveEventScoreView; // @synthesize liveEventScoreView=_liveEventScoreView;
@property(retain, nonatomic) T1MomentScoreView *momentScoreView; // @synthesize momentScoreView=_momentScoreView;
@property(retain, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(nonatomic, getter=isScoreCardRedesignEnabled) _Bool scoreCardRedesignEnabled; // @synthesize scoreCardRedesignEnabled=_scoreCardRedesignEnabled;
@property(retain, nonatomic) TFNTwitterLiveEventTopModule *topModule; // @synthesize topModule=_topModule;
@property(retain, nonatomic) id subheaderInfo; // @synthesize subheaderInfo=_subheaderInfo;
@property(copy, nonatomic) CDUnknownBlockType preferredHeightCheckBlock; // @synthesize preferredHeightCheckBlock=_preferredHeightCheckBlock;
- (void).cxx_destruct;
- (void)_t1_setupScoreViewIfReady;
- (double)_t1_liveEventScoreViewPreferredHeight;
- (struct CGRect)_t1_scoreRectFromWrapperRect:(struct CGRect)arg1;
- (double)preferredHeight;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, nonatomic) TFNTwitterLiveEventTopModuleScore *topModuleScore;
- (void)_t1_dynamicColorsDidReload:(id)arg1;
- (id)initWithTopModule:(id)arg1 imagePipeline:(id)arg2 scoreCardRedesignEnabled:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
