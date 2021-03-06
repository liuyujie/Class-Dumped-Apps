//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBBannerProvider-Protocol.h"
#import "DBLinkableStateObserverProtocol-Protocol.h"

@class DBCameraUploadManager, DBObserverHandle, DBUserState, DBWeakObserverMap, NSString;
@protocol DBAnalyticsLogger, DBBanner, DBCameraUploadUserStatusModelProtocol, DBModalManaging;

@interface DBCameraUploadBannerProvider : NSObject <DBLinkableStateObserverProtocol, DBBannerProvider>
{
    DBWeakObserverMap *_bannerManagerMap;
    id <DBBanner> _currentBanner;
    DBObserverHandle *_statusObserver;
    unsigned long long _currentCameraUploadBannerType;
    DBCameraUploadManager *_cameraUploadManager;
    DBUserState *_userState;
    id <DBAnalyticsLogger> _analyticsLogger;
    id <DBCameraUploadUserStatusModelProtocol> _cameraUploadUserStatusModel;
    id <DBModalManaging> _modalManager;
}

- (void).cxx_destruct;
- (void)db_stopObserving;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)db_getBannerType;
- (void)db_logCuBannerStatusWithBannerAction:(unsigned long long)arg1;
- (void)db_refreshBanner;
- (unsigned long long)db_getCurrentBannerType;
- (id)currentBanner;
- (void)checkForNewBanners;
- (id)registerBannerManager:(id)arg1;
- (void)db_notifyOfCurrentBannerDismissal;
- (void)db_showNewBanner:(id)arg1;
- (void)db_emitBannerToDisplay;
- (CDUnknownBlockType)accessoryAction;
- (CDUnknownBlockType)tapAction;
- (void)dealloc;
- (id)initWithCameraUploadUserStatusModel:(id)arg1 analyticsLogger:(id)arg2 modalManager:(id)arg3;
- (id)initWithUserState:(id)arg1 cameraUploadManager:(id)arg2 withAnalyticsLogger:(id)arg3 modalManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

