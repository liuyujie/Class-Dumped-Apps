//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMECameraClipLoader-Protocol.h"
#import "HMENestMediaLoader-Protocol.h"

@class GTMSessionFetcher, GTMSessionFetcherService, NSMutableArray, NSString, NSURL;
@protocol HMECameraClipLoaderDelegate;

@interface HMESessionFetcherCameraClipLoader : NSObject <HMECameraClipLoader, HMENestMediaLoader>
{
    id <HMECameraClipLoaderDelegate> _clipLoaderDelegate;
    NSURL *_localClipURL;
    GTMSessionFetcherService *_service;
    NSURL *_clipURL;
    GTMSessionFetcher *_fetcher;
    NSMutableArray *_loadCompletions;
}

@property(readonly, nonatomic) NSMutableArray *loadCompletions; // @synthesize loadCompletions=_loadCompletions;
@property(retain, nonatomic) GTMSessionFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(readonly, nonatomic) NSURL *clipURL; // @synthesize clipURL=_clipURL;
@property(readonly, nonatomic) GTMSessionFetcherService *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSURL *localClipURL; // @synthesize localClipURL=_localClipURL;
@property(nonatomic) __weak id <HMECameraClipLoaderDelegate> clipLoaderDelegate; // @synthesize clipLoaderDelegate=_clipLoaderDelegate;
- (void).cxx_destruct;
- (void)cancel;
- (void)loadingFinishedWithError:(id)arg1;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadClip;
- (void)dealloc;
- (id)initWithURL:(id)arg1 service:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

