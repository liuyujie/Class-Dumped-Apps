//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBLinkableStateObserverProtocol-Protocol.h"

@class BoltClient, DBAPIClient, DBPayments, DBStoreKit, NSString;
@protocol DBModalManaging, DBNoauthLegacyStormcrow, DBPaymentsAlertDelegate, DBPaymentsUpdateDelegate, DBUserPairingInfoProvider;

@interface DBUserPayments : NSObject <DBLinkableStateObserverProtocol>
{
    NSString *_userId;
    id <DBUserPairingInfoProvider> _userPairingInfoProvider;
    id <DBPaymentsUpdateDelegate> _updateDelegate;
    DBPayments *_payments;
    id _pairingInfoChangeObserver;
    _Bool _unlinked;
    DBAPIClient *_apiClient;
    BoltClient *_boltClient;
    DBStoreKit *_storeKit;
    id <DBModalManaging> _modalManager;
    id <DBNoauthLegacyStormcrow> _noauthStormcrow;
    id <DBPaymentsAlertDelegate> _alertDelegate;
}

@property(nonatomic) __weak id <DBPaymentsAlertDelegate> alertDelegate; // @synthesize alertDelegate=_alertDelegate;
- (void).cxx_destruct;
- (void)prepareToUnlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)db_destroyPayments;
- (void)db_updatePayments;
- (_Bool)db_supportPayments;
- (id)payments;
- (id)db_createPairingInfoChangeObserver;
- (void)dealloc;
- (id)initWithUserId:(id)arg1 storeKit:(id)arg2 pairingInfoProvider:(id)arg3 apiClient:(id)arg4 boltClient:(id)arg5 noauthStormcrow:(id)arg6 updateDelegate:(id)arg7 modalManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

