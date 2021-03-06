//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/PSPDFFontDownloaderDelegate-Protocol.h>

@class NSString, PSPDFDispatchQueue, PSPDFFontDownloader;

@interface PSPDFAnnotationFontResolver : NSObject <PSPDFFontDownloaderDelegate>
{
    PSPDFDispatchQueue *_updateQueue;
    id _object;
    CDUnknownBlockType _updateHandler;
    NSString *_cancellationToken;
    PSPDFFontDownloader *_downloader;
}

@property(retain, nonatomic) PSPDFFontDownloader *downloader; // @synthesize downloader=_downloader;
@property(readonly, nonatomic) NSString *cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(readonly, nonatomic) __weak id object; // @synthesize object=_object;
@property(readonly, nonatomic) PSPDFDispatchQueue *updateQueue; // @synthesize updateQueue=_updateQueue;
- (void).cxx_destruct;
- (void)fontDownloader:(id)arg1 didFailResolvingFontDescriptor:(id)arg2 withError:(id)arg3;
- (void)fontDownloader:(id)arg1 didResolveFont:(id)arg2 forFontDescriptor:(id)arg3;
- (void)attemptResolvingName:(id)arg1 size:(double)arg2 symbolicTraits:(id)arg3 withUpdateHandler:(CDUnknownBlockType)arg4;
- (id)convertTraits:(id)arg1;
- (void)becomeDisposable;
- (id)initWithUpdateQueue:(id)arg1 forObject:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

