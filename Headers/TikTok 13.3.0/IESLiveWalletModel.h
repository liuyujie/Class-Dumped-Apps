//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface IESLiveWalletModel : MTLModel <MTLJSONSerializing>
{
    unsigned long long _userID;
    unsigned long long _diamondNum;
    long long _totalMoney;
    long long _hostIncomePercent;
    unsigned long long _watermelonNum;
    NSString *_couponInfo;
    NSArray *_couponDetail;
    unsigned long long _missionCurrencyNum;
}

+ (id)couponDetailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) unsigned long long missionCurrencyNum; // @synthesize missionCurrencyNum=_missionCurrencyNum;
@property(retain, nonatomic) NSArray *couponDetail; // @synthesize couponDetail=_couponDetail;
@property(copy, nonatomic) NSString *couponInfo; // @synthesize couponInfo=_couponInfo;
@property(nonatomic) unsigned long long watermelonNum; // @synthesize watermelonNum=_watermelonNum;
@property(nonatomic) long long hostIncomePercent; // @synthesize hostIncomePercent=_hostIncomePercent;
@property(nonatomic) long long totalMoney; // @synthesize totalMoney=_totalMoney;
@property(nonatomic) unsigned long long diamondNum; // @synthesize diamondNum=_diamondNum;
@property(nonatomic) unsigned long long userID; // @synthesize userID=_userID;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
