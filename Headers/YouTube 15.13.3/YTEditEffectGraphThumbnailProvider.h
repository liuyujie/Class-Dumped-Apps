//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTEditEffectThumbnailProvider-Protocol.h>
#import <Module_Framework/YTEditEffectThumbnailSourceDelegate-Protocol.h>
#import <Module_Framework/YTEditEffectsProviderDataChangeObserver-Protocol.h>

@class GIMMe, NSCountedSet, NSMutableDictionary, NSString, YTEditEffectThumbnailSource, YTEditEffectsGraphSettings, YTEditEffectsProvider;

@interface YTEditEffectGraphThumbnailProvider : NSObject <YTEditEffectThumbnailSourceDelegate, YTEditEffectsProviderDataChangeObserver, YTEditEffectThumbnailProvider>
{
    YTEditEffectThumbnailSource *_thumbnailSource;
    NSMutableDictionary *_effectIDPromiseMap;
    NSCountedSet *_effectRetryCount;
    GIMMe *_gimme;
    YTEditEffectsProvider *_effectsProvider;
}

@property(retain, nonatomic) YTEditEffectsProvider *effectsProvider; // @synthesize effectsProvider=_effectsProvider;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)effectsProvider:(id)arg1 effectDidChange:(id)arg2;
- (_Bool)attemptRetryForEffectID:(id)arg1;
- (void)thumbnailSource:(id)arg1 failedToGenerateThumbnailForEffectID:(id)arg2;
- (void)thumbnailSource:(id)arg1 didGenerateThumbnailForEffectID:(id)arg2;
- (void)queueThumbnailGenerationForEffectID:(id)arg1;
- (struct GPCPromise *)createPromiseForEffectID:(id)arg1;
- (struct GPCPromise *)cachedPromiseForEffectID:(id)arg1;
- (void)setThumbnailInputImage:(id)arg1;
@property(retain, nonatomic) YTEditEffectsGraphSettings *graphSettings;
- (struct GPCPromise *)thumbnailPromiseForEffectID:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 mode:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

