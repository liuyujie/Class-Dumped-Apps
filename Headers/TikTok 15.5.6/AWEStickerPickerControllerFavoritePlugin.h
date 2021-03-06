//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEStickerPickerControllerPluginProtocol-Protocol.h"

@class ACCCollectionButton, AWEStickerPickerController, NSString, UIView;

@interface AWEStickerPickerControllerFavoritePlugin : NSObject <AWEStickerPickerControllerPluginProtocol>
{
    AWEStickerPickerController *_controller;
    UIView *_favoriteView;
    ACCCollectionButton *_favoriteButton;
}

@property(retain, nonatomic) ACCCollectionButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
@property(retain, nonatomic) UIView *favoriteView; // @synthesize favoriteView=_favoriteView;
@property(nonatomic) __weak AWEStickerPickerController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)p_onFavoriteBtnClicked_IMP:(id)arg1;
- (void)p_onFavoriteBtnClicked:(id)arg1;
- (void)controller:(id)arg1 didSelectNewSticker:(id)arg2 oldSticker:(id)arg3;
- (void)controllerDidFinishLoadStickerCategories:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

