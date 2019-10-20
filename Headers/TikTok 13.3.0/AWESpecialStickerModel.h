//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSString;

@interface AWESpecialStickerModel : AWEBaseApiModel
{
    NSString *_stickerID;
    long long _stickerType;
    NSString *_webURL;
    NSString *_title;
    AWEURLModel *_iconURL;
    NSString *_openURL;
}

+ (id)iconURLJSONTransformer;
+ (id)stickerTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(retain, nonatomic) AWEURLModel *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(nonatomic) long long stickerType; // @synthesize stickerType=_stickerType;
@property(copy, nonatomic) NSString *stickerID; // @synthesize stickerID=_stickerID;
- (void).cxx_destruct;

@end
