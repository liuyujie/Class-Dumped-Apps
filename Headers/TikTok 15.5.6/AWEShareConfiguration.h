//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEShareContext, AWEShareTask, NSMutableArray;

@interface AWEShareConfiguration : NSObject
{
    AWEShareTask *_task;
    NSMutableArray *_channels;
}

@property(readonly, nonatomic) NSMutableArray *channels; // @synthesize channels=_channels;
@property(readonly, nonatomic) AWEShareTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (id)description;
- (void)configureView:(id)arg1 withItemHandler:(CDUnknownBlockType)arg2;
- (void)sortChannelsUsingComparator:(CDUnknownBlockType)arg1;
- (void)removeChannelsMatching:(CDUnknownBlockType)arg1;
- (void)removeChannelsWithCategory:(long long)arg1;
- (void)removeChannelsWithTypes:(id)arg1;
- (id)removeChannelWithType:(id)arg1;
- (unsigned long long)insertChannel:(id)arg1 beforeChannelWithType:(id)arg2;
- (unsigned long long)insertChannel:(id)arg1 afterChannelWithType:(id)arg2;
- (void)addChannels:(id)arg1;
- (void)addChannel:(id)arg1;
- (id)channelForType:(id)arg1;
- (unsigned long long)indexOfChannelWithType:(id)arg1;
@property(readonly, nonatomic) AWEShareContext *context;
- (id)initWithTask:(id)arg1 channels:(id)arg2;

@end

