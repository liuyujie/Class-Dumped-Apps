//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor;

@interface SPTArtistAboutLargePreviewVerifiedCheckStyle : NSObject <GLUEStyle>
{
    UIColor *_verifiedCheckCircleColor;
    UIColor *_verifiedCheckColor;
    UIColor *_verifiedCheckShadowColor;
    unsigned long long _verifiedCheckStarPoints;
    double _verifiedCheckShadowOpacity;
    struct CGSize _verifiedCheckIconSize;
    struct CGSize _verifiedCheckInnerSize;
    struct CGSize _verifiedCheckSize;
}

@property(nonatomic) double verifiedCheckShadowOpacity; // @synthesize verifiedCheckShadowOpacity=_verifiedCheckShadowOpacity;
@property(nonatomic) unsigned long long verifiedCheckStarPoints; // @synthesize verifiedCheckStarPoints=_verifiedCheckStarPoints;
@property(retain, nonatomic) UIColor *verifiedCheckShadowColor; // @synthesize verifiedCheckShadowColor=_verifiedCheckShadowColor;
@property(retain, nonatomic) UIColor *verifiedCheckColor; // @synthesize verifiedCheckColor=_verifiedCheckColor;
@property(retain, nonatomic) UIColor *verifiedCheckCircleColor; // @synthesize verifiedCheckCircleColor=_verifiedCheckCircleColor;
@property(nonatomic) struct CGSize verifiedCheckSize; // @synthesize verifiedCheckSize=_verifiedCheckSize;
@property(nonatomic) struct CGSize verifiedCheckInnerSize; // @synthesize verifiedCheckInnerSize=_verifiedCheckInnerSize;
@property(nonatomic) struct CGSize verifiedCheckIconSize; // @synthesize verifiedCheckIconSize=_verifiedCheckIconSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

