//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/NSCopying-Protocol.h>

@class NSString, WAPBCompanionDeviceInfo_PairInfo;

@interface WAPendingCompanionDevice : NSObject <NSCopying>
{
    WAPBCompanionDeviceInfo_PairInfo *_rawInfo;
}

@property(readonly, nonatomic) WAPBCompanionDeviceInfo_PairInfo *rawInfo; // @synthesize rawInfo=_rawInfo;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *key;
- (id)initWithKey:(id)arg1 data:(id)arg2;
- (id)initWithJID:(id)arg1 pairDate:(id)arg2 code:(id)arg3;
- (id)initWithPairInfo:(id)arg1;

@end

