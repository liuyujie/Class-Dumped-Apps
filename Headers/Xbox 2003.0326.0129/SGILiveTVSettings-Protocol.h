//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGISettings-Protocol.h"

@class NSString;

@protocol SGILiveTVSettings <SGISettings>
- (void)refreshSGSettings;
- (_Bool)allowPowerOnOff;
- (_Bool)isNotRatedContentExplicit;
- (NSString *)nonAdultContentRatings;
- (_Bool)isShowSpecificRatingsLocales;
- (_Bool)isUrcPiPEnabled;
- (_Bool)isNetworkTestEnabled;
- (_Bool)isUrcEnabled;
- (_Bool)isOneGuideEnabled;
@end

