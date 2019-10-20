//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

@interface AWEResourceBaseDownloaderTask : NSObject
{
    float _lastProgressValue;
    long long _currentLength;
    long long _totalLength;
    NSFileHandle *_fileHandle;
    NSString *_savePath;
}

@property(copy, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(nonatomic) float lastProgressValue; // @synthesize lastProgressValue=_lastProgressValue;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(nonatomic) long long totalLength; // @synthesize totalLength=_totalLength;
@property(nonatomic) long long currentLength; // @synthesize currentLength=_currentLength;
- (void).cxx_destruct;
- (_Bool)isCancel;
- (void)cancel;
- (void)reset;
- (void)removeTempFileAndCloseFileHandle;
- (id)finishAndCheckFile:(id)arg1;
- (void)receiveDataAndWriteToFileEnd:(id)arg1;
- (id)tempSavePath:(id)arg1;
- (id)initWithChannel:(id)arg1 savePath:(id)arg2;

@end
