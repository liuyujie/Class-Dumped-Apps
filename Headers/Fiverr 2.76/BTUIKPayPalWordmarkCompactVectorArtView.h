//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BraintreeDropIn/BTUIKPayPalWordmarkVectorArtView.h>

@interface BTUIKPayPalWordmarkCompactVectorArtView : BTUIKPayPalWordmarkVectorArtView
{
    _Bool _includePadding;
}

@property(nonatomic) _Bool includePadding; // @synthesize includePadding=_includePadding;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (void)updateConstraints;
- (void)drawArt;
- (void)setupWithArtDimensions:(struct CGSize)arg1;
- (id)init;
- (id)initWithPadding;

@end

