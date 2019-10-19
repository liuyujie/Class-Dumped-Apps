//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAudioSessionListener-Protocol.h"
#import "SCCallStatusProviderForVideoNotePlayer-Protocol.h"
#import "SCTalkClientController-Protocol.h"
#import "SCTalkSessionDependenciesProvider-Protocol.h"

@class NSString, SCChatInputViewController, SCTAvatarServices, SCTV3AudioServices, SCTV3ChatServices, SCTalkV3Manager;
@protocol SCTV3ClientDependenciesProvider, SCTV3LensesServices, SCTalkSession;

@interface SCTalkV3Mixin : NSObject <SCTalkSessionDependenciesProvider, SCCallStatusProviderForVideoNotePlayer, SCAudioSessionListener, SCTalkClientController>
{
    id <SCTalkSession> _talkSession;
    SCTalkV3Manager *_talkManager;
    SCTV3AudioServices *_audioServices;
    id <SCTV3ClientDependenciesProvider> _chatDP;
    SCChatInputViewController *_chatInputController;
    SCTAvatarServices *_avatarServices;
    SCTV3ChatServices *_chatServices;
    id <SCTV3LensesServices> _lensesServices;
    _Bool _visible;
    _Bool _closeProximity;
    double _knownAudioVolume;
}

- (void).cxx_destruct;
- (_Bool)_hasMicrophonePermission;
- (unsigned long long)_mediaForNotification:(id)arg1;
- (_Bool)_shouldHandleNotification:(id)arg1;
- (void)_handleNotificationIfNeeded;
- (void)_proximityChanged;
- (void)_updateProximityState:(_Bool)arg1;
- (_Bool)_proximityState;
- (void)_updateVisibility:(_Bool)arg1;
- (void)_initTalkSessionIfMissing;
- (void)_destroyTalkSession;
- (void)_activateOrBackgroundTalkSession;
- (void)_setActiveTalkSession:(id)arg1;
- (void)audioSession:(id)arg1 didChangeVolume:(double)arg2;
- (void)audioSession:(id)arg1 didChangeProximityMonitoring:(_Bool)arg2;
- (_Bool)callInProgress;
- (void)_inputModeDidChange:(id)arg1;
- (id)_resignDictationFirstResponder:(id)arg1;
- (id)callkitServices;
- (id)tooltipServices;
- (id)lensesServices;
- (id)chatServices;
- (id)avatarServices;
- (void)viewDidBecomeActive;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;
- (void)viewWillResignActive;
- (void)viewWillEnterBackground;
- (void)viewDidSwipeOut;
- (void)viewDidSwipeIn;
- (void)setupCallButtonsIfNeeded;
- (void)chatMediaDidCloseFullscreen;
- (void)chatMediaWillEnterFullscreen;
- (_Bool)shouldSuppressKeyboard;
- (void)setChatInputController:(id)arg1 shouldAttachAsListener:(_Bool)arg2;
- (id)fullscreenAnnouncer;
- (id)talkSession;
- (void)refreshParticipants;
- (void)activateTalkPostGroupCreation;
- (void)setActiveTalkSessionForConversationWithId:(id)arg1;
- (id)activeConvoId;
- (id)initWithChatDP:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
