//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTPlaylistURIResolver;

@interface SPTSharePlaylistHelper : NSObject <SPTFeatureFlagSignalObserver>
{
    _Bool _allowV2Sharing;
    id <SPTPlaylistURIResolver> _playlistURIResolver;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _allowV2SharingSignal;
}

@property(nonatomic) _Bool allowV2Sharing; // @synthesize allowV2Sharing=_allowV2Sharing;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> allowV2SharingSignal; // @synthesize allowV2SharingSignal=_allowV2SharingSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(retain, nonatomic) id <SPTPlaylistURIResolver> playlistURIResolver; // @synthesize playlistURIResolver=_playlistURIResolver;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)normalizeSharingEntityURI:(id)arg1 withContextSourceURI:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)normalizeContextAwareSharingEntityURI:(id)arg1 withContextSourceURI:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)normalizeURI:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)normalizeSharingEntityData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPlaylistURIResolver:(id)arg1 featureFlagFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

