//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XBXHttpRequestDelegate-Protocol.h"
#import "XBXIEDSServiceManager-Protocol.h"

@class NSArray, NSMutableArray, NSString, XBXUser;
@protocol XBXITokenProvider;

@interface XBXEDSServiceManager : NSObject <XBXIEDSServiceManager, XBXHttpRequestDelegate>
{
    struct IEDSV2ServiceManager *edsNativeServiceManager;
    struct IEDSV2ServiceCallback *edsNativeCallbackHandler;
    struct ILRCPlatformSpecific *platformSpecific;
    unsigned int _requestIndex;
    _Bool _allowMusicSearch;
    _Bool _allowVideoSearch;
    int _currentEnvironment;
    XBXUser *_currentUser;
    id <XBXITokenProvider> _currentTokenProvider;
    NSMutableArray *_mudsRequestQueueInternal;
    NSArray *_promotionalContentRestrictedRegions;
}

@property(nonatomic) _Bool allowVideoSearch; // @synthesize allowVideoSearch=_allowVideoSearch;
@property(nonatomic) _Bool allowMusicSearch; // @synthesize allowMusicSearch=_allowMusicSearch;
@property(retain, nonatomic) NSArray *promotionalContentRestrictedRegions; // @synthesize promotionalContentRestrictedRegions=_promotionalContentRestrictedRegions;
@property(retain, nonatomic) NSMutableArray *mudsRequestQueueInternal; // @synthesize mudsRequestQueueInternal=_mudsRequestQueueInternal;
@property(nonatomic) id <XBXITokenProvider> currentTokenProvider; // @synthesize currentTokenProvider=_currentTokenProvider;
@property(retain, nonatomic) XBXUser *currentUser; // @synthesize currentUser=_currentUser;
@property(nonatomic) int currentEnvironment; // @synthesize currentEnvironment=_currentEnvironment;
- (void)onSGAppLocaleChanged:(id)arg1;
- (id)httpManager;
- (id)getEnvironmentPrefix;
- (id)getSubscription;
- (void)callDelegate:(id)arg1 selector:(SEL)arg2 response:(id)arg3;
- (struct IEDSV2ServiceManager *)sharedEDSServiceManager;
- (void *)getEDSServiceManager;
- (void)initializeServiceManager;
- (void)reset;
- (id)getContentRestrictionsHeader;
- (void)didCompleteRequest:(id)arg1 requestId:(int)arg2 data:(id)arg3 connectionError:(id)arg4 requestContext:(id)arg5 httpResponse:(id)arg6;
- (void)dealloc;
- (void)unregisterFromPendingRequests:(id)arg1;
- (void)onAppEnteredForeground;
- (void)onAppEnteredBackground;
- (void)onUserLogout;
- (void)setTokenProvider:(id)arg1;
- (void)setUser:(id)arg1;
- (void)setEnvironment:(int)arg1;
- (void)getActivities:(id)arg1;
- (void)browse:(id)arg1 skipItems:(unsigned int)arg2;
- (void)getRelatedItem:(id)arg1;
- (void)getAdditionalAirings:(id)arg1;
- (void)getDetail:(id)arg1;
- (void)getTopSearchTerms:(id)arg1;
- (_Bool)search:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setTargetedDeviceType:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

