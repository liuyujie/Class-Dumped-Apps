//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEMixVideoModel;

@interface AWEMixVideoDetailInfoModel : AWEBaseApiModel
{
    AWEMixVideoModel *_mixInfo;
}

+ (id)mixInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEMixVideoModel *mixInfo; // @synthesize mixInfo=_mixInfo;
- (void).cxx_destruct;

@end
