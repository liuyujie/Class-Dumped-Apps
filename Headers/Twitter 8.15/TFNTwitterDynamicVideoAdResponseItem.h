//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TFNTwitterDynamicVideoAd;

@interface TFNTwitterDynamicVideoAdResponseItem : NSObject
{
    TFNTwitterDynamicVideoAd *_ad;
    NSString *_passthroughString;
}

@property(readonly, copy, nonatomic) NSString *passthroughString; // @synthesize passthroughString=_passthroughString;
@property(readonly, nonatomic) TFNTwitterDynamicVideoAd *ad; // @synthesize ad=_ad;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAd:(id)arg1 passthroughString:(id)arg2;

@end
