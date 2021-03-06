//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGDirectThread, IGPhoto, IGVideo, IGViewController, NSString;
@protocol IGDirectMessageMenuActionHandling, IGDirectMessageProtocol, IGDirectVisualMessageViewerPresentationManagerContextDelegate;

@protocol IGDirectMessageMenuActionHandlerDelegate <NSObject>
- (IGDirectThread *)currentThread;
- (id <IGDirectVisualMessageViewerPresentationManagerContextDelegate>)visualMessageViewerPresentationManagerContextDelegate;
- (IGViewController *)presentingViewController;
- (IGViewController *)containingViewController;
- (void)menuActionHandler:(id <IGDirectMessageMenuActionHandling>)arg1 didTapReplyToMessage:(id <IGDirectMessageProtocol>)arg2;
- (void)menuActionHandler:(id <IGDirectMessageMenuActionHandling>)arg1 didSaveVideo:(IGVideo *)arg2;
- (void)menuActionHandler:(id <IGDirectMessageMenuActionHandling>)arg1 didSavePhoto:(IGPhoto *)arg2;
- (void)menuActionHandler:(id <IGDirectMessageMenuActionHandling>)arg1 didSaveText:(NSString *)arg2;
- (void)menuActionHandler:(id <IGDirectMessageMenuActionHandling>)arg1 didLookForCreatorWithName:(NSString *)arg2 isSticker:(_Bool)arg3;
@end

