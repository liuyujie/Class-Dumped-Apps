//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSNumber, NSString;

@interface AWELiveFansModel : AWEBaseApiModel
{
    _Bool _isFans;
    _Bool _isLight;
    NSString *_fansName;
    NSNumber *_fansLevel;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool isLight; // @synthesize isLight=_isLight;
@property(nonatomic) _Bool isFans; // @synthesize isFans=_isFans;
@property(retain, nonatomic) NSNumber *fansLevel; // @synthesize fansLevel=_fansLevel;
@property(retain, nonatomic) NSString *fansName; // @synthesize fansName=_fansName;
- (void).cxx_destruct;
- (_Bool)shouldShowFansEnterAnimation;
- (id)initWithDict:(id)arg1;
- (id)init;

@end
