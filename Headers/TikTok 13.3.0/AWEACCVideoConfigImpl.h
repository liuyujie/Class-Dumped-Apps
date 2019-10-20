//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCVideoConfigProtocol-Protocol.h"

@class NSString;

@interface AWEACCVideoConfigImpl : NSObject <ACCVideoConfigProtocol>
{
    _Bool _isProductUseStandardMusicVideoDuration;
    _Bool _isLongVideoEnaled;
    unsigned long long _beautifyType;
    long long _faceDetectInterval;
    long long _videoUploadMaxSeconds;
    long long _videoSelectableMaxSeconds;
    long long _videoMinSeconds;
    long long _videoMaxSeconds;
    long long _standardVideoMaxSeconds;
    long long _musicMaxSeconds;
    double _bigEyeValueDefault;
    double _bigEyeValueMax;
    double _blusherValueDefault;
    double _blusherValueMax;
    double _faceLiftValueDefault;
    double _faceLiftValueMax;
    double _lipstickValueDefault;
    double _lipstickValueMax;
    double _reshapeLevelDefault;
    double _reshapeLevelMax;
    double _sharpenValueDefault;
    double _sharpenValueMax;
    double _smoothLevelDefault;
    double _smoothLevelMax;
}

@property(nonatomic) double smoothLevelMax; // @synthesize smoothLevelMax=_smoothLevelMax;
@property(nonatomic) double smoothLevelDefault; // @synthesize smoothLevelDefault=_smoothLevelDefault;
@property(nonatomic) double sharpenValueMax; // @synthesize sharpenValueMax=_sharpenValueMax;
@property(nonatomic) double sharpenValueDefault; // @synthesize sharpenValueDefault=_sharpenValueDefault;
@property(nonatomic) double reshapeLevelMax; // @synthesize reshapeLevelMax=_reshapeLevelMax;
@property(nonatomic) double reshapeLevelDefault; // @synthesize reshapeLevelDefault=_reshapeLevelDefault;
@property(nonatomic) double lipstickValueMax; // @synthesize lipstickValueMax=_lipstickValueMax;
@property(nonatomic) double lipstickValueDefault; // @synthesize lipstickValueDefault=_lipstickValueDefault;
@property(nonatomic) double faceLiftValueMax; // @synthesize faceLiftValueMax=_faceLiftValueMax;
@property(nonatomic) double faceLiftValueDefault; // @synthesize faceLiftValueDefault=_faceLiftValueDefault;
@property(nonatomic) double blusherValueMax; // @synthesize blusherValueMax=_blusherValueMax;
@property(nonatomic) double blusherValueDefault; // @synthesize blusherValueDefault=_blusherValueDefault;
@property(nonatomic) double bigEyeValueMax; // @synthesize bigEyeValueMax=_bigEyeValueMax;
@property(nonatomic) double bigEyeValueDefault; // @synthesize bigEyeValueDefault=_bigEyeValueDefault;
@property(nonatomic) long long musicMaxSeconds; // @synthesize musicMaxSeconds=_musicMaxSeconds;
@property(nonatomic) _Bool isLongVideoEnaled; // @synthesize isLongVideoEnaled=_isLongVideoEnaled;
@property(nonatomic) long long standardVideoMaxSeconds; // @synthesize standardVideoMaxSeconds=_standardVideoMaxSeconds;
@property(nonatomic) long long videoMaxSeconds; // @synthesize videoMaxSeconds=_videoMaxSeconds;
@property(nonatomic) long long videoMinSeconds; // @synthesize videoMinSeconds=_videoMinSeconds;
@property(nonatomic) long long videoSelectableMaxSeconds; // @synthesize videoSelectableMaxSeconds=_videoSelectableMaxSeconds;
@property(nonatomic) long long videoUploadMaxSeconds; // @synthesize videoUploadMaxSeconds=_videoUploadMaxSeconds;
@property(nonatomic) _Bool isProductUseStandardMusicVideoDuration; // @synthesize isProductUseStandardMusicVideoDuration=_isProductUseStandardMusicVideoDuration;
@property(nonatomic) long long faceDetectInterval; // @synthesize faceDetectInterval=_faceDetectInterval;
@property(nonatomic) unsigned long long beautifyType; // @synthesize beautifyType=_beautifyType;
- (_Bool)showTitleInVideoCameraBottomView;
- (_Bool)enableUploadClientBOE;
- (void)updateCurrentVideoLenthMode:(long long)arg1;
- (_Bool)enableLongDurationRecordAsTab;
- (long long)currentVideoLenthMode;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
