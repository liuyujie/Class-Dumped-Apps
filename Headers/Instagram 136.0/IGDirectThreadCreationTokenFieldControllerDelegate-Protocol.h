//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGDirectRecipientCellViewModel, IGDirectThreadCreationTokenFieldController, IGUser, NSString;

@protocol IGDirectThreadCreationTokenFieldControllerDelegate <NSObject>
- (void)directThreadCreationTokenFieldController:(IGDirectThreadCreationTokenFieldController *)arg1 tokenFieldDidChangeHeight:(double)arg2;
- (void)directThreadCreationTokenFieldController:(IGDirectThreadCreationTokenFieldController *)arg1 didPressReturnWithRecipientCellViewModel:(IGDirectRecipientCellViewModel *)arg2;
- (void)directThreadCreationTokenFieldController:(IGDirectThreadCreationTokenFieldController *)arg1 didDeleteUser:(IGUser *)arg2;
- (void)directThreadCreationTokenFieldController:(IGDirectThreadCreationTokenFieldController *)arg1 didChangeQuery:(NSString *)arg2;
@end

