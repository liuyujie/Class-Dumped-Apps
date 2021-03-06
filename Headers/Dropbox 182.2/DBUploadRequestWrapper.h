//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBUploadRequestTask-Protocol.h>

@class DBUploadTask, NSString;

@interface DBUploadRequestWrapper : NSObject <DBUploadRequestTask>
{
    DBUploadTask *_task;
    CDUnknownBlockType _progressBlock;
}

- (void).cxx_destruct;
- (void)db_progressChanged:(double)arg1;
- (void)setRequestUploadProgressBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)start;
- (id)initWithUploadTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

