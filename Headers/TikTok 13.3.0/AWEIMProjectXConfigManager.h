//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEIMProjectXConfigManagerProtocol-Protocol.h"
#import "AWEUserMessage-Protocol.h"

@class AWEIMProjectXConfig, NSArray, NSString, UIImage;

@interface AWEIMProjectXConfigManager : NSObject <AWEUserMessage, AWEIMProjectXConfigManagerProtocol>
{
    _Bool _projectXAccountActive;
    NSArray *_avatarURLArray;
    AWEIMProjectXConfig *_config;
    NSString *_dynamicSubtitle;
    NSString *_dynamicScheme;
    NSString *_dynamicLogoIconURL;
    NSString *_dynamicBGIconURL;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *dynamicBGIconURL; // @synthesize dynamicBGIconURL=_dynamicBGIconURL;
@property(retain, nonatomic) NSString *dynamicLogoIconURL; // @synthesize dynamicLogoIconURL=_dynamicLogoIconURL;
@property(retain, nonatomic) NSString *dynamicScheme; // @synthesize dynamicScheme=_dynamicScheme;
@property(retain, nonatomic) NSString *dynamicSubtitle; // @synthesize dynamicSubtitle=_dynamicSubtitle;
@property(retain, nonatomic) AWEIMProjectXConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool projectXAccountActive; // @synthesize projectXAccountActive=_projectXAccountActive;
@property(retain, nonatomic) NSArray *avatarURLArray; // @synthesize avatarURLArray=_avatarURLArray;
- (void).cxx_destruct;
- (void)tryToDownloadImageURL:(id)arg1;
- (id)fileNameForRemoteURL:(id)arg1;
- (id)localDirectoryPath;
- (void)didFinishLogout;
@property(readonly, nonatomic) UIImage *story_response_my_story_icon;
@property(readonly, nonatomic) NSString *tail_install_title;
@property(readonly, nonatomic) NSString *redEnvelopeMessage;
@property(readonly, nonatomic) NSString *videoRedEnvelopeMessage;
@property(readonly, nonatomic) UIImage *publish_board_im_icon;
@property(readonly, nonatomic) UIImage *share_board_im_red_envelope_icon;
@property(readonly, nonatomic) NSString *share_board_im_title;
@property(readonly, nonatomic) UIImage *share_board_im_icon;
@property(readonly, nonatomic) NSString *planBBannerScheme;
@property(readonly, nonatomic) NSString *planBBannerTitle;
@property(readonly, nonatomic) NSString *story_detail_input_placeholder;
@property(readonly, nonatomic) UIImage *story_detail_input_icon;
@property(readonly, nonatomic) NSString *download_x_url;
@property(readonly, nonatomic) unsigned long long chat_list_style;
@property(readonly, nonatomic) UIImage *chat_list_banner_bg;
@property(readonly, nonatomic) UIImage *chat_list_banner_icon;
@property(readonly, nonatomic) NSString *chat_no_installed_button_title;
@property(readonly, nonatomic) NSString *chat_installed_button_title;
@property(readonly, nonatomic) UIImage *chat_no_unread_msg_icon;
@property(readonly, nonatomic) NSString *planASubTitle;
@property(readonly, nonatomic) NSString *chat_no_unread_msg_title;
@property(readonly, nonatomic) NSString *alert_install_transfer_title;
@property(readonly, nonatomic) NSString *alert_install_profile_title;
@property(readonly, nonatomic) UIImage *contact_send_msg_icon;
@property(readonly, nonatomic) UIImage *profile_more_send_msg_btn_icon;
@property(readonly, nonatomic) UIImage *profile_send_msg_btn_icon;
- (void)syncConfig;
- (void)reloadDynamicSubtitleFromServerDic:(id)arg1;
- (void)downloadResource;
- (id)p_imageWithRemoteURL:(id)arg1 defaultImage:(id)arg2;
- (id)p_configValue:(id)arg1 defaultValue:(id)arg2;
@property(readonly, nonatomic) unsigned long long displayForXStyle;
- (_Bool)languageChinese;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
