//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEAwemeResponseModel.h"

@class AWENewHotSearchModel;

@interface AWEAwemeHotSpotResponseModel : AWEAwemeResponseModel
{
    AWENewHotSearchModel *_hotSearchModel;
}

+ (id)hotSearchModelTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWENewHotSearchModel *hotSearchModel; // @synthesize hotSearchModel=_hotSearchModel;
- (void).cxx_destruct;

@end

