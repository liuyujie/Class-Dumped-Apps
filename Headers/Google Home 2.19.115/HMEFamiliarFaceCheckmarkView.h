//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface HMEFamiliarFaceCheckmarkView : UIImageView
{
    _Bool _selected;
    long long _type;
}

@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)updateVisualState;
- (id)initWithType:(long long)arg1;

@end

