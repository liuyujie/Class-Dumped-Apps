//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEAppAwemeSettingMessage-Protocol.h"
#import "AWEProfileActivityManagerProtocol-Protocol.h"

@class AWEProfileActivityLinkModel, NSString;

@interface AWEProfileActivityManager : NSObject <AWEAppAwemeSettingMessage, AWEProfileActivityManagerProtocol>
{
    _Bool _showProfileActivityTip;
    _Bool _hasClickedCloseButton;
    _Bool _hasCheckedProfileBanner;
    _Bool _isProfileActivityImageReady;
    AWEProfileActivityLinkModel *_linkInfo;
}

+ (id)sharedInstance;
+ (void)checkedActivity:(_Bool)arg1;
+ (_Bool)haveCheckedActivity;
+ (_Bool)showProfileActivityView:(id)arg1 hasLinkModel:(_Bool)arg2;
+ (double)activityViewHeight:(id)arg1 hasLinkModel:(_Bool)arg2;
+ (double)activityViewHeight;
+ (void)snapshotImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)snapshotForView:(id)arg1 frame:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)fetchProfileActivityModelWithUserModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool isProfileActivityImageReady; // @synthesize isProfileActivityImageReady=_isProfileActivityImageReady;
@property(nonatomic) _Bool hasCheckedProfileBanner; // @synthesize hasCheckedProfileBanner=_hasCheckedProfileBanner;
@property(nonatomic) _Bool hasClickedCloseButton; // @synthesize hasClickedCloseButton=_hasClickedCloseButton;
@property(retain, nonatomic) AWEProfileActivityLinkModel *linkInfo; // @synthesize linkInfo=_linkInfo;
@property(nonatomic) _Bool showProfileActivityTip; // @synthesize showProfileActivityTip=_showProfileActivityTip;
- (void).cxx_destruct;
- (void)updateShowProfileActivityTip;
- (void)awemeSettingDidChange;
- (void)recordCloseBanner;
- (_Bool)canProfileActivityViewPresent;
- (void)hideActivityTip:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

