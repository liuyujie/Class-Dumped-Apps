//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet;

@interface IGDirectPendingInboxConfig : NSObject
{
    long long _threadSortType;
    NSOrderedSet *_folders;
}

@property(readonly, nonatomic) NSOrderedSet *folders; // @synthesize folders=_folders;
@property(readonly, nonatomic) long long threadSortType; // @synthesize threadSortType=_threadSortType;
- (void).cxx_destruct;
- (void)updateThreadSortType:(long long)arg1;
- (id)initWithThreadSortType:(long long)arg1 folders:(id)arg2;

@end

