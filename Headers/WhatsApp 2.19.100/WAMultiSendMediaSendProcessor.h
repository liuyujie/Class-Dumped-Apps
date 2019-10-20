//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAMultiSendMediaItemQuality, WAProgressAlertController;
@protocol WAMultiSendMediaSendProcessorDelegate;

@interface WAMultiSendMediaSendProcessor : NSObject
{
    _Bool _cancelExportRequested;
    WAProgressAlertController *_exportProgressController;
    _Bool _isCheckingPhotosPermission;
    _Bool _isSending;
    _Bool _isExportingItems;
    id <WAMultiSendMediaSendProcessorDelegate> _delegate;
    WAMultiSendMediaItemQuality *_quality;
}

@property(readonly, nonatomic) _Bool isExportingItems; // @synthesize isExportingItems=_isExportingItems;
@property(readonly, nonatomic) _Bool isSending; // @synthesize isSending=_isSending;
@property(readonly, nonatomic) WAMultiSendMediaItemQuality *quality; // @synthesize quality=_quality;
@property(nonatomic) __weak id <WAMultiSendMediaSendProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateOptimisticUploadsForItems:(id)arg1 error:(_Bool)arg2;
- (void)convertItemAtIndexFromPlaceholderToActualItem:(long long)arg1 mediaItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelAllExportWithMediaItems:(id)arg1;
- (void)cancelExportWithMediaItems:(id)arg1;
- (void)updateExportProgressWithMediaItems:(id)arg1;
- (void)presentExportProgressControllerIfNeededWithItems:(id)arg1 presentationCompletion:(CDUnknownBlockType)arg2;
- (void)setExportingItems:(_Bool)arg1 mediaItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)finishWithProcessedItems:(id)arg1 originalItems:(id)arg2 errorMessage:(id)arg3;
- (void)sendMediaItems:(id)arg1 fromItems:(id)arg2 atIndex:(long long)arg3 saveToCameraRoll:(_Bool)arg4;
- (void)sendAllMediaItemsDirectly:(id)arg1;
- (id)initWithMediaItemQuality:(id)arg1;

@end
