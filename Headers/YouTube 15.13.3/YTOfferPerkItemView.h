//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPerkViewProtocol-Protocol.h"

@class NSString, YTFormattedStringLabel;

@interface YTOfferPerkItemView : UIView <YTPerkViewProtocol>
{
    YTFormattedStringLabel *_label;
}

- (void).cxx_destruct;
- (id)thumbnailMappings;
- (struct UIEdgeInsets)preferredEdgeInset;
- (void)layoutSubviews;
- (void)sizeHeightToFitWithWidth:(double)arg1;
- (id)initWithOfferPerkItemRenderer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

