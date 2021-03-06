//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/HAMBuildableObjectBuilder-Protocol.h>
#import <Module_Framework/NSCopying-Protocol.h>

@class NSArray, NSString, NSURL;
@protocol HAMFormat;

@interface HAMDASHMPDSegmentIndexBuilder : NSObject <HAMBuildableObjectBuilder, NSCopying>
{
    int _timescale;
    NSArray *_timelineItems;
    NSArray *_segmentURLs;
    NSURL *_baseURL;
    id <HAMFormat> _format;
    NSString *_mediaTemplate;
}

@property(retain, nonatomic) NSString *mediaTemplate; // @synthesize mediaTemplate=_mediaTemplate;
@property(retain, nonatomic) id <HAMFormat> format; // @synthesize format=_format;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(nonatomic) int timescale; // @synthesize timescale=_timescale;
@property(retain, nonatomic) NSArray *segmentURLs; // @synthesize segmentURLs=_segmentURLs;
@property(retain, nonatomic) NSArray *timelineItems; // @synthesize timelineItems=_timelineItems;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (id)build;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

