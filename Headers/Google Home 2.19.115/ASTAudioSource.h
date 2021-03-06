//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GAKAudioUnitGraph, GAKIOUnit;

@interface ASTAudioSource : NSObject
{
    GAKIOUnit *_ioUnit;
    GAKAudioUnitGraph *_audioUnitGraph;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)stopAudioUnitGraph;
- (id)startAudioUnitGraph;
- (id)setupAudioUnitGraph;
@property(readonly, nonatomic) GAKAudioUnitGraph *audioUnitGraph;
@property(readonly, nonatomic) GAKIOUnit *ioUnit;
- (id)init;

@end

