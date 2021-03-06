//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, TAVAnalyticsVideoAdServerMetadata;
@protocol TAVDynamicAdProvider;

@interface TAVVideoBuilder : NSObject
{
    NSArray *_playlistItemProviders;
    id <TAVDynamicAdProvider> _adProvider;
    TAVAnalyticsVideoAdServerMetadata *_adServerMetadata;
    NSMutableArray *_operations;
}

@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) TAVAnalyticsVideoAdServerMetadata *adServerMetadata; // @synthesize adServerMetadata=_adServerMetadata;
@property(readonly, nonatomic) id <TAVDynamicAdProvider> adProvider; // @synthesize adProvider=_adProvider;
@property(readonly, nonatomic) NSArray *playlistItemProviders; // @synthesize playlistItemProviders=_playlistItemProviders;
- (void).cxx_destruct;
- (void)private_operationsFinishedWithCompletion:(CDUnknownBlockType)arg1;
- (id)private_operationWithVideoAdProvider:(id)arg1;
- (id)private_operationWithVideoProvider:(id)arg1;
- (void)buildWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPlaylistItemProviders:(id)arg1 adProvider:(id)arg2;
- (id)init;
- (id)description;

@end

