//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, XBXUserActivity;
@protocol SGActivityPreviewDataModelDelegate;

@protocol SGIActivityPreviewDataModel <NSObject>
- (void)unregisterFromPendingRequests:(id)arg1;
- (XBXUserActivity *)getActivityPreviewForItemLocatorNow:(NSString *)arg1;
- (void)getActivityPreviewForItemLocator:(NSString *)arg1 callbackDelegate:(id <SGActivityPreviewDataModelDelegate>)arg2 withRequestContext:(id)arg3;
@end

