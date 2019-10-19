//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"

@class NSArray, NSString, NSURL, PreviewViewController, SCAMusicShare, SCPreviewConfiguration, SCSendToTransitionProvider, SCShazamSharePreviewModel, SCUserSession, UIImage, UIViewController;
@protocol SCSendToScreen, SCShazamShareControllerDelegate;

@interface SCShazamShareController : NSObject <SCSendToDelegate, SendSnapNavigationControllerDelegate, SCSendToNavigationDelegate>
{
    SCUserSession *_userSession;
    UIViewController<SCSendToScreen> *_sendViewController;
    SCPreviewConfiguration *_previewConfiguration;
    SCSendToTransitionProvider *_transitionProvider;
    UIViewController *_fromViewController;
    PreviewViewController *_previewViewController;
    NSURL *_songURL;
    NSString *_songTitle;
    NSString *_artistName;
    long long _source;
    UIImage *_artistImage;
    UIImage *_topSnapImage;
    _Bool _sendFromShare;
    _Bool _needToSend;
    NSArray *_recipientUsernames;
    NSArray *_mischiefs;
    SCAMusicShare *_musicShareEvent;
    NSString *_additionalText;
    SCShazamSharePreviewModel *_shazamSharePreviewModel;
    id <SCShazamShareControllerDelegate> _delegate;
    NSString *_topSnapURL;
}

@property(copy, nonatomic) NSString *topSnapURL; // @synthesize topSnapURL=_topSnapURL;
@property(nonatomic) __weak id <SCShazamShareControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissSendViewController:(id)arg1;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 mischiefs:(id)arg5 businessProfiles:(id)arg6 appStories:(id)arg7 gallery:(_Bool)arg8 inviteRecipientShown:(long long)arg9 additionalText:(id)arg10;
- (void)_resumeSend;
- (id)_previewConfigurationWithParams:(id)arg1;
- (void)editPressedFromContextMenuFromViewController:(id)arg1;
- (void)sharePressedFromShazamCard:(id)arg1;
- (void)sendPressedFromContextMenuFromViewController:(id)arg1;
- (void)didSendSnaps:(id)arg1 postToStory:(_Bool)arg2;
- (void)didSaveSnapWithParameters:(id)arg1;
- (void)didSendChatMessage;
- (void)didCancelFromPreview:(id)arg1;
- (void)endKhaleesiShare;
- (void)_dismissPreviewViewController;
- (void)shareWithParams:(id)arg1 fromViewController:(id)arg2;
- (id)initWithUserSession:(id)arg1 songURL:(id)arg2 songTitle:(id)arg3 artistName:(id)arg4 source:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
