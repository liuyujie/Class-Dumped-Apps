//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribe/TFSDatabaseLog-Protocol.h>

@class NSMutableArray;

@interface TFSScribeDatabaseLog : NSObject <TFSDatabaseLog>
{
    NSMutableArray *_errors;
    CDUnknownBlockType _errorBlock;
    CDUnknownBlockType _debugBlock;
}

@property(copy, nonatomic) CDUnknownBlockType debugBlock; // @synthesize debugBlock=_debugBlock;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(retain, nonatomic) NSMutableArray *errors; // @synthesize errors=_errors;
- (void).cxx_destruct;
- (_Bool)debugEnabled;
- (void)logDebug:(id)arg1;
- (void)logError:(id)arg1;
- (id)initWithDebugBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;

@end
