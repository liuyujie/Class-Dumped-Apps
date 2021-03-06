//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEAwemeModel, AWEPOISpuInfoModel, AWEUserModel, NSString;

@interface AWEPOIRatingDetailModel : AWEBaseApiModel
{
    NSString *_ratingID;
    NSString *_ratingScore;
    double _createTime;
    AWEUserModel *_user;
    AWEAwemeModel *_aweme;
    AWEPOISpuInfoModel *_spuInfo;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEPOISpuInfoModel *spuInfo; // @synthesize spuInfo=_spuInfo;
@property(retain, nonatomic) AWEAwemeModel *aweme; // @synthesize aweme=_aweme;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *ratingScore; // @synthesize ratingScore=_ratingScore;
@property(copy, nonatomic) NSString *ratingID; // @synthesize ratingID=_ratingID;
- (void).cxx_destruct;

@end

