//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIDownloadMetadataContent.h"

@class NSDictionary, NSString;

@interface NFUIDownloadMetadataShow : NFUIDownloadMetadataContent
{
    NSDictionary *_metadataURLMap;
    NSString *_displayArt;
}

@property(readonly, copy, nonatomic) NSString *displayArt; // @synthesize displayArt=_displayArt;
- (void).cxx_destruct;
- (void)displayArtImage:(double)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (id)metadataURLMap;

@end

