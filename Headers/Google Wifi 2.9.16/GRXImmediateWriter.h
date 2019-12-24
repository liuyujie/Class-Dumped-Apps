//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GRXWriter.h"

@class NSEnumerator, NSError;
@protocol GRXWriteable;

@interface GRXImmediateWriter : GRXWriter
{
    NSEnumerator *_enumerator;
    NSError *_errorOrNil;
    id <GRXWriteable> _writeable;
    long long _state;
}

+ (id)emptyWriter;
+ (id)writerWithError:(id)arg1;
+ (id)writerWithValue:(id)arg1;
+ (id)writerWithContainer:(id)arg1;
+ (id)writerWithValueSupplier:(CDUnknownBlockType)arg1;
+ (id)writerWithEnumerator:(id)arg1;
+ (id)writerWithEnumerator:(id)arg1 error:(id)arg2;
- (long long)state;
- (void).cxx_destruct;
- (void)setState:(long long)arg1;
- (void)finishWithError:(id)arg1;
- (void)startWithWriteable:(id)arg1;
- (void)writeUntilPausedOrStopped;
- (id)initWithEnumerator:(id)arg1 error:(id)arg2;
- (id)init;

@end
