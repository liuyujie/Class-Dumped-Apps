//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWERiskPreventModel, AWESearchNilInfoModel, AWESearchNilTextModel, NSArray;

@interface AWEDoubleColumnSearchMerchandiseResponse : AWEBaseApiModel
{
    _Bool _hasMore;
    NSArray *_results;
    long long _cursor;
    AWESearchNilInfoModel *_searchNilInfo;
    AWESearchNilTextModel *_searchNilText;
    AWERiskPreventModel *_riskPrevent;
}

+ (id)resultsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWERiskPreventModel *riskPrevent; // @synthesize riskPrevent=_riskPrevent;
@property(retain, nonatomic) AWESearchNilTextModel *searchNilText; // @synthesize searchNilText=_searchNilText;
@property(retain, nonatomic) AWESearchNilInfoModel *searchNilInfo; // @synthesize searchNilInfo=_searchNilInfo;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (id)init;

@end

