//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModel-Protocol.h>

@class NSArray, NSString;

@interface TFNOnboardingTask : NSObject <TFSModel>
{
    NSString *_flowToken;
    NSArray *_subtasks;
}

+ (id)subtaskVersions;
+ (id)supportedSubtaskTypeNames;
+ (id)tasksFromJSONArray:(id)arg1 error:(id *)arg2;
+ (id)tasksFromJSONData:(id)arg1 error:(id *)arg2;
+ (id)tasksFromFile:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *subtasks; // @synthesize subtasks=_subtasks;
@property(readonly, nonatomic) NSString *flowToken; // @synthesize flowToken=_flowToken;
- (void).cxx_destruct;
- (id)initWithFlowToken:(id)arg1 subtasks:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
