//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol IESLiveEnvironment;

@interface HTSLiveDoubleInteractionTitleBar : UIView
{
    _Bool _useNewStyle;
    id <IESLiveEnvironment> _liveEnvironment;
}

@property(retain, nonatomic) id <IESLiveEnvironment> liveEnvironment; // @synthesize liveEnvironment=_liveEnvironment;
@property(nonatomic) _Bool useNewStyle; // @synthesize useNewStyle=_useNewStyle;
- (void).cxx_destruct;
- (void)loadViews;
- (id)initWithFrame:(struct CGRect)arg1 useNewStyle:(_Bool)arg2;

@end

