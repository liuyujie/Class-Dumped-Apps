//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSDate, NSError, NSString, NSURL, NSURLRequest;

@interface IABLoggingAction : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSURL *_webRequestStarted_initialURL;
    NSDate *_browserOpened_userClickTime;
    NSString *_browserOpened_clickSource;
    unsigned long long _browserOpened_launchMethod;
    long long _webStatusCodeReceived_statusCode;
    NSURLRequest *_webNavigationServerRedirectRequestReceived_request;
    _Bool _webLoadStateChanged_isLoaded;
    NSURLRequest *_webNavigationRequestWillStart_request;
    long long _webNavigationRequestWillStart_navigationType;
    NSURLRequest *_webNavigationRequestFailed_request;
    NSError *_webNavigationRequestFailed_error;
    unsigned long long _browserClosed_dismissMethod;
    unsigned long long _externalAppOpened_type;
    NSURL *_externalAppOpened_targetURL;
    NSURL *_copyLink_targetURL;
    NSURL *_share_targetURL;
    NSString *_share_sharingType;
    NSURL *_openShare_targetURL;
    NSString *_openShare_shareSheetType;
    NSString *_updateClickSource_clickSource;
    NSURL *_reportStart_targetURL;
    NSURL *_reportSubmit_targetURL;
    NSString *_reportSubmit_reportReason;
    unsigned long long _browserRefresh_type;
    NSURL *_saveLink_targetURL;
    NSString *_saveLink_tapSource;
    _Bool _saveLink_isSaved;
}

+ (id)webStatusCodeReceivedWithStatusCode:(long long)arg1;
+ (id)webRequestStartedWithInitialURL:(id)arg1;
+ (id)webNavigationServerRedirectRequestReceivedWithRequest:(id)arg1;
+ (id)webNavigationRequestWillStartWithRequest:(id)arg1 navigationType:(long long)arg2;
+ (id)webNavigationRequestFailedWithRequest:(id)arg1 error:(id)arg2;
+ (id)webLoadStateChangedWithIsLoaded:(_Bool)arg1;
+ (id)webDOMContentLoaded;
+ (id)viewSavedLinks;
+ (id)userInteraction;
+ (id)updateClickSourceWithClickSource:(id)arg1;
+ (id)shareWithTargetURL:(id)arg1 sharingType:(id)arg2;
+ (id)saveLinkWithTargetURL:(id)arg1 tapSource:(id)arg2 isSaved:(_Bool)arg3;
+ (id)reportSubmitWithTargetURL:(id)arg1 reportReason:(id)arg2;
+ (id)reportStartWithTargetURL:(id)arg1;
+ (id)reactivatePixels;
+ (id)openShareWithTargetURL:(id)arg1 shareSheetType:(id)arg2;
+ (id)openMenu;
+ (id)externalAppOpenedWithType:(unsigned long long)arg1 targetURL:(id)arg2;
+ (id)dropPixels;
+ (id)copyLinkWithTargetURL:(id)arg1;
+ (id)browserRefreshWithType:(unsigned long long)arg1;
+ (id)browserOpenedWithUserClickTime:(id)arg1 clickSource:(id)arg2 launchMethod:(unsigned long long)arg3;
+ (id)browserClosedWithDismissMethod:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)matchWebRequestStarted:(CDUnknownBlockType)arg1 browserOpened:(CDUnknownBlockType)arg2 webStatusCodeReceived:(CDUnknownBlockType)arg3 webNavigationServerRedirectRequestReceived:(CDUnknownBlockType)arg4 webDOMContentLoaded:(CDUnknownBlockType)arg5 webLoadStateChanged:(CDUnknownBlockType)arg6 webNavigationRequestWillStart:(CDUnknownBlockType)arg7 webNavigationRequestFailed:(CDUnknownBlockType)arg8 browserClosed:(CDUnknownBlockType)arg9 externalAppOpened:(CDUnknownBlockType)arg10 copyLink:(CDUnknownBlockType)arg11 openMenu:(CDUnknownBlockType)arg12 share:(CDUnknownBlockType)arg13 openShare:(CDUnknownBlockType)arg14 userInteraction:(CDUnknownBlockType)arg15 updateClickSource:(CDUnknownBlockType)arg16 reportStart:(CDUnknownBlockType)arg17 reportSubmit:(CDUnknownBlockType)arg18 browserRefresh:(CDUnknownBlockType)arg19 saveLink:(CDUnknownBlockType)arg20 viewSavedLinks:(CDUnknownBlockType)arg21 reactivatePixels:(CDUnknownBlockType)arg22 dropPixels:(CDUnknownBlockType)arg23;

@end

