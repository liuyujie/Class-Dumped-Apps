//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDKActivityCV.h"

@class GDKShortcutOverlayView, NSString;

@interface GDKActivityFileCV : GDKActivityCV
{
    GDKShortcutOverlayView *_shortcutOverlay;
    NSString *_accessibilityLabel;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, nonatomic) GDKShortcutOverlayView *shortcutOverlay; // @synthesize shortcutOverlay=_shortcutOverlay;
- (void).cxx_destruct;
- (void)updateViewWithObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

