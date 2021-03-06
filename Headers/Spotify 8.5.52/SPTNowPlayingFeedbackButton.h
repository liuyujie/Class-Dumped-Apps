//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTNowPlayingButton.h"

#import "SPTThemableView-Protocol.h"

@class NSString, SPTTheme, UIColor;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTNowPlayingFeedbackButton : SPTNowPlayingButton <SPTThemableView>
{
    long long _icon;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    long long _selectedIcon;
    UIColor *_selectedColor;
    SPTTheme *_theme;
    unsigned long long _type;
    struct CGSize _iconSize;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic) long long selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void)setIcon:(long long)arg1;
- (long long)icon;
- (void)setIconSize:(struct CGSize)arg1;
- (struct CGSize)iconSize;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)setSelected:(_Bool)arg1;
- (void)updateForSelected;
- (void)applyIcon;
- (void)updateForType;
- (void)bounce;
- (id)initWithType:(unsigned long long)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

