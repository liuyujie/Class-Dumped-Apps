//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewCell.h"

@class HMETile, HMEUnifiedDevice;

@interface HMEDevicePickerCell : MDCCollectionViewCell
{
    HMEUnifiedDevice *_device;
    HMETile *_tile;
}

@property(readonly, nonatomic) HMETile *tile; // @synthesize tile=_tile;
@property(retain, nonatomic) HMEUnifiedDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)formattedString:(id)arg1 font:(id)arg2 textColor:(id)arg3 lineHeight:(double)arg4;
- (void)setupForDevice;
- (id)accessibilityLabel;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

