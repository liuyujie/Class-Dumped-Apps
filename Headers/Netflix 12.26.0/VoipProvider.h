//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VoipConfig;
@protocol _TtP8ArgoCore8ACFModel_;

@interface VoipProvider : NSObject
{
    VoipConfig *_config;
    id <_TtP8ArgoCore8ACFModel_> _falcorModel;
}

@property(retain, nonatomic) id <_TtP8ArgoCore8ACFModel_> falcorModel; // @synthesize falcorModel=_falcorModel;
@property(retain, nonatomic) VoipConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)callControllerWithDelegate:(id)arg1;
- (void)loadConfig:(CDUnknownBlockType)arg1;
- (id)initWithFalcorModel:(id)arg1;

@end

