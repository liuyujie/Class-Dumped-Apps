//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MTBackupDatacenterData : NSObject
{
    int _timestamp;
    int _expirationDate;
    NSArray *_addressList;
}

@property(readonly, nonatomic) NSArray *addressList; // @synthesize addressList=_addressList;
@property(readonly, nonatomic) int expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) int timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)initWithTimestamp:(int)arg1 expirationDate:(int)arg2 addressList:(id)arg3;

@end

