//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface NLGEpochKeyInfo : NSObject
{
    unsigned int _keyId;
    unsigned long long _startTime;
    NSData *_keyData;
}

@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int keyId; // @synthesize keyId=_keyId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithKeyId:(unsigned int)arg1 startTime:(unsigned int)arg2 keyData:(id)arg3;

@end

