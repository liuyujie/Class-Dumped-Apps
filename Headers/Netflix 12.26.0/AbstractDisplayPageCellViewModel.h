//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DisplayPageCellViewModelProtocol-Protocol.h"
#import "NFUIDisplayPageCellViewModelProtocol-Protocol.h"

@class NFUIDisplayPageDetailsEntity, NFUIDisplayPageDownloadsEntity, NFUIDisplayPageOriginalsEntity, NFUIDisplayPageSimilarsEntity, NFUIDisplayPageVolatileEntity, NSIndexPath, NSNumber, NSString, PlaybackSourceModel;
@protocol NFUIDownloadObserverProtocol, NFUIViewSizeCacheObjectProtocol;

@interface AbstractDisplayPageCellViewModel : NSObject <DisplayPageCellViewModelProtocol, NFUIDisplayPageCellViewModelProtocol>
{
    _Bool _isSupplementary;
    _Bool _selected;
    NSIndexPath *_indexPath;
    NSString *_identifier;
    NSString *_kind;
    long long _videoId;
    long long _videoType;
    NFUIDisplayPageDetailsEntity *_detailsEntity;
    NFUIDisplayPageVolatileEntity *_volatileEntity;
    NFUIDisplayPageOriginalsEntity *_originalsEntity;
    NFUIDisplayPageSimilarsEntity *_similarsEntity;
    NFUIDisplayPageDownloadsEntity *_downloadsEntity;
    PlaybackSourceModel *_playbackSourceModel;
    NSNumber *_episodeId;
    id <NFUIViewSizeCacheObjectProtocol> _sizeCacheObject;
    id <NFUIDownloadObserverProtocol> _downloadObserver;
}

@property(nonatomic) __weak id <NFUIDownloadObserverProtocol> downloadObserver; // @synthesize downloadObserver=_downloadObserver;
@property(retain, nonatomic) id <NFUIViewSizeCacheObjectProtocol> sizeCacheObject; // @synthesize sizeCacheObject=_sizeCacheObject;
@property(copy, nonatomic) NSNumber *episodeId; // @synthesize episodeId=_episodeId;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) PlaybackSourceModel *playbackSourceModel; // @synthesize playbackSourceModel=_playbackSourceModel;
@property(retain, nonatomic) NFUIDisplayPageDownloadsEntity *downloadsEntity; // @synthesize downloadsEntity=_downloadsEntity;
@property(retain, nonatomic) NFUIDisplayPageSimilarsEntity *similarsEntity; // @synthesize similarsEntity=_similarsEntity;
@property(retain, nonatomic) NFUIDisplayPageOriginalsEntity *originalsEntity; // @synthesize originalsEntity=_originalsEntity;
@property(retain, nonatomic) NFUIDisplayPageVolatileEntity *volatileEntity; // @synthesize volatileEntity=_volatileEntity;
@property(retain, nonatomic) NFUIDisplayPageDetailsEntity *detailsEntity; // @synthesize detailsEntity=_detailsEntity;
@property(nonatomic) _Bool isSupplementary; // @synthesize isSupplementary=_isSupplementary;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)renewEntity;
- (void)configureWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

