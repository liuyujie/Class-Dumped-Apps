//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBScanImageProviderWithQuad-Protocol.h"
#import "DBScanImageProviderWithStorage-Protocol.h"

@class DBImageDiskBackedStorage, DBImageStorageToken, DBQuadrilateral, NSString, UIImage;
@protocol DBFileEntry;

@interface DBScanImageFileEntryProvider : NSObject <DBScanImageProviderWithStorage, DBScanImageProviderWithQuad>
{
    id <DBFileEntry> _fileEntry;
    UIImage *_thumbnailImage;
    DBImageStorageToken *_storageToken;
    _Bool _isBusinessAccountFile;
    DBImageDiskBackedStorage *_imageStorage;
}

+ (double)db_getCornerValue:(id)arg1 i:(int)arg2 j:(int)arg3;
@property(retain, nonatomic) DBImageDiskBackedStorage *imageStorage; // @synthesize imageStorage=_imageStorage;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *algorithmVersion;
@property(readonly, nonatomic) DBQuadrilateral *quad;
- (id)db_getActionInfoMetadata;
- (void)db_replaceForFullResImage:(id)arg1;
- (id)fileRevInfoForLogging;
- (void)db_loadRepr:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadFullRes:(CDUnknownBlockType)arg1;
- (void)loadThumbnail:(CDUnknownBlockType)arg1;
- (id)initWithFileEntry:(id)arg1 isBusinessAccountFile:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

