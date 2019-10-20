//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESSoundDataProvider-Protocol.h"

@class NSString, NSURL;
@protocol IESSoundDataProviderDelegate;

@interface IESSoundDataProvider_File : NSObject <IESSoundDataProvider>
{
    struct __CFReadStream *_streamRef;
    char *_dataBuffer;
    unsigned int _dataBufferSize;
    unsigned long long _readOffset;
    unsigned long long _readStart;
    unsigned long long _readLength;
    id <IESSoundDataProviderDelegate> _delegate;
    NSURL *_fileURL;
}

@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) __weak id <IESSoundDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void *)readBytes:(unsigned long long *)arg1;
- (_Bool)read:(unsigned long long)arg1 maxLength:(unsigned long long)arg2;
- (_Bool)read;
- (void)close;
- (_Bool)open;
@property(readonly, nonatomic) NSString *contentType;
@property(readonly, nonatomic) _Bool isFinished;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) unsigned long long receivedLength;
@property(readonly, nonatomic) unsigned long long totalLength;
- (id)initWithURL:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
