//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PHTPhenotypeFlag.h"

@class NSData;

@interface PHTPhenotypeDataFlag : PHTPhenotypeFlag
{
    NSData *_defaultValue;
    NSData *_testOverride;
}

@property(retain, nonatomic) NSData *testOverride; // @synthesize testOverride=_testOverride;
@property(readonly, nonatomic) NSData *defaultValue; // @synthesize defaultValue=_defaultValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *value;
- (id)initWithName:(id)arg1 defaultValue:(id)arg2 flags:(id)arg3;

@end

