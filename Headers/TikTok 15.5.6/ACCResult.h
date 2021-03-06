//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface ACCResult : NSObject
{
    unsigned long long _resultOneOfCase;
    id _value;
    NSError *_error;
}

+ (id)failure:(id)arg1;
+ (id)success:(id)arg1;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long resultOneOfCase; // @synthesize resultOneOfCase=_resultOneOfCase;
- (void).cxx_destruct;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (id)map:(CDUnknownBlockType)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;

@end

