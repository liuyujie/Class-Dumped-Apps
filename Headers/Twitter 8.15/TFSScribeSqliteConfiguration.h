//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFSDatabaseUIApplicationLink;

@interface TFSScribeSqliteConfiguration : NSObject
{
    CDUnknownBlockType _debugBlock;
    CDUnknownBlockType _errorBlock;
    TFSDatabaseUIApplicationLink *_applicationLink;
}

@property(readonly, nonatomic) TFSDatabaseUIApplicationLink *applicationLink; // @synthesize applicationLink=_applicationLink;
@property(readonly, copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType debugBlock; // @synthesize debugBlock=_debugBlock;
- (void).cxx_destruct;
- (id)initWithApplicationLink:(id)arg1 errorBlock:(CDUnknownBlockType)arg2 debugBlock:(CDUnknownBlockType)arg3;

@end
