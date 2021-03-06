//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class AWERiskPreventModel, AWESearchCorrectModel, AWESearchFrequencyManager, AWESearchHarmfulCategoryManager, AWESearchKeyWordModel, NSArray, NSDictionary, NSNumber, NSString, UIViewController;
@protocol AWEHttpTask;

@interface AWESearchVideoListDataViewController : AWEListDataController
{
    _Bool _fromHotSearch;
    _Bool _shouldHideCorrection;
    _Bool _isFilterSearch;
    _Bool _hitLimit;
    _Bool _shouldLoginLimit;
    _Bool _isSearchSourceGS;
    AWESearchKeyWordModel *_keyWord;
    NSString *_gsKeyword;
    NSString *_correctName;
    AWERiskPreventModel *_riskPreventModel;
    NSString *_requestID;
    NSDictionary *_logPassback;
    AWESearchCorrectModel *_correctModel;
    NSArray *_guideSearchWordList;
    unsigned long long _publishTime;
    unsigned long long _sortType;
    UIViewController *_refViewController;
    AWESearchFrequencyManager *_frequencyManager;
    AWESearchHarmfulCategoryManager *_harmfulCategoryManager;
    NSNumber *_offset;
    long long _refreshCount;
    long long _loadmoreCount;
    id <AWEHttpTask> _task;
}

@property(nonatomic) __weak id <AWEHttpTask> task; // @synthesize task=_task;
@property(nonatomic) long long loadmoreCount; // @synthesize loadmoreCount=_loadmoreCount;
@property(nonatomic) long long refreshCount; // @synthesize refreshCount=_refreshCount;
@property(copy, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool isSearchSourceGS; // @synthesize isSearchSourceGS=_isSearchSourceGS;
@property(retain, nonatomic) AWESearchHarmfulCategoryManager *harmfulCategoryManager; // @synthesize harmfulCategoryManager=_harmfulCategoryManager;
@property(retain, nonatomic) AWESearchFrequencyManager *frequencyManager; // @synthesize frequencyManager=_frequencyManager;
@property(nonatomic) _Bool shouldLoginLimit; // @synthesize shouldLoginLimit=_shouldLoginLimit;
@property(nonatomic) _Bool hitLimit; // @synthesize hitLimit=_hitLimit;
@property(nonatomic) __weak UIViewController *refViewController; // @synthesize refViewController=_refViewController;
@property(nonatomic) unsigned long long sortType; // @synthesize sortType=_sortType;
@property(nonatomic) unsigned long long publishTime; // @synthesize publishTime=_publishTime;
@property(nonatomic) _Bool isFilterSearch; // @synthesize isFilterSearch=_isFilterSearch;
@property(copy, nonatomic) NSArray *guideSearchWordList; // @synthesize guideSearchWordList=_guideSearchWordList;
@property(retain, nonatomic) AWESearchCorrectModel *correctModel; // @synthesize correctModel=_correctModel;
@property(nonatomic) _Bool shouldHideCorrection; // @synthesize shouldHideCorrection=_shouldHideCorrection;
@property(retain, nonatomic) NSDictionary *logPassback; // @synthesize logPassback=_logPassback;
@property(nonatomic) _Bool fromHotSearch; // @synthesize fromHotSearch=_fromHotSearch;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) AWERiskPreventModel *riskPreventModel; // @synthesize riskPreventModel=_riskPreventModel;
@property(copy, nonatomic) NSString *correctName; // @synthesize correctName=_correctName;
@property(copy, nonatomic) NSString *gsKeyword; // @synthesize gsKeyword=_gsKeyword;
@property(retain, nonatomic) AWESearchKeyWordModel *keyWord; // @synthesize keyWord=_keyWord;
- (void).cxx_destruct;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadWithPullType:(long long)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

