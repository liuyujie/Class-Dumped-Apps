//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ManifestAccess : NSObject
{
    NSDictionary *_manifest;
}

+ (id)rankSortedCdnAccessArrayForServers:(id)arg1 manifestAccess:(id)arg2;
@property(copy, nonatomic) NSDictionary *manifest; // @synthesize manifest=_manifest;
- (void).cxx_destruct;
- (id)validCdnForStream:(id)arg1;
- (_Bool)isAudioTrackInTrackPrefereceArray:(id)arg1;
- (_Bool)isTextTrackInTrackPrefereceArray:(id)arg1;
- (void)enumerateTracks:(CDUnknownBlockType)arg1;
- (void)enumerateVideoTracks:(CDUnknownBlockType)arg1;
- (void)enumerateTextTracks:(CDUnknownBlockType)arg1;
- (void)enumerateAudioTracks:(CDUnknownBlockType)arg1;
- (id)locationForKey:(id)arg1;
- (id)cdnAccessAfter:(id)arg1 validCdnIdSet:(id)arg2;
- (id)cdnAccessFromCdnId:(long long)arg1;
- (id)rankSortedCdnAccessArray;
- (id)_searchForVideoNewTrackID:(id)arg1 inAllVideoTracks:(id)arg2;
- (id)_searchForTextNewTrackID:(id)arg1 inAllTextTracks:(id)arg2;
- (id)_searchForAudioNewTrackID:(id)arg1 inAllAudioTracks:(id)arg2;
- (id)_searchForVideoTrackID:(id)arg1 inAllVideoTracks:(id)arg2;
- (id)_searchForTextTrackID:(id)arg1 inAllTextTracks:(id)arg2;
- (id)_searchForAudioTrackID:(id)arg1 inAllAudioTracks:(id)arg2;
- (id)sortedTrackPreferenceAccessArray;
- (id)_trackPreferenceAccessForDefaultTrackOrderListEntry:(id)arg1;
@property(readonly, nonatomic) NSString *movieId;
- (_Bool)isValidTextTrackForDictionary:(id)arg1;
- (_Bool)isValidAudioTrackForDictionary:(id)arg1;
- (_Bool)isValidVideoTrackForDictionary:(id)arg1;
- (id)textTrackForDictionary:(id)arg1;
- (id)audioTrackForDictionary:(id)arg1;
- (id)videoTrackForDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

