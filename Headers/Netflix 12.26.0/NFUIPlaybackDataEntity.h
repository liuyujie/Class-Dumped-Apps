//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COEntity.h"

@class NFUIBookmark, NSDictionary;

@interface NFUIPlaybackDataEntity : COEntity
{
    _Bool _maturityPINProtected;
    _Bool _contentPreviewPINProtected;
    _Bool _requiresAgeVerification;
    _Bool _availableForDownload;
    _Bool _availableForED;
    NSDictionary *_prePlayExperienceData;
    NSDictionary *_bookmarkData;
}

+ (id)falcorKeyPathsForUpdateMap;
+ (id)falcorKeyPathMap;
@property(retain, nonatomic) NSDictionary *bookmarkData; // @synthesize bookmarkData=_bookmarkData;
@property(readonly, nonatomic) NSDictionary *prePlayExperienceData; // @synthesize prePlayExperienceData=_prePlayExperienceData;
@property(readonly, nonatomic, getter=isAvailableForED) _Bool availableForED; // @synthesize availableForED=_availableForED;
@property(readonly, nonatomic, getter=isAvailableForDownload) _Bool availableForDownload; // @synthesize availableForDownload=_availableForDownload;
@property(readonly, nonatomic) _Bool requiresAgeVerification; // @synthesize requiresAgeVerification=_requiresAgeVerification;
@property(readonly, nonatomic, getter=isContentPreviewsPINProtected) _Bool contentPreviewPINProtected; // @synthesize contentPreviewPINProtected=_contentPreviewPINProtected;
@property(readonly, nonatomic, getter=isMaturityPINProtected) _Bool maturityPINProtected; // @synthesize maturityPINProtected=_maturityPINProtected;
- (void).cxx_destruct;
- (_Bool)isValidForPlayback;
@property(readonly, copy, nonatomic) NFUIBookmark *bookmark;

@end

