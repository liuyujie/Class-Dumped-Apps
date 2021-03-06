//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEStickerPickerControllerPluginProtocol-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AWEStickerPickerController, NSArray, NSString, UIView;

@interface AWEStickerPickerControllerCollectionStickerPlugin : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, AWEStickerPickerControllerPluginProtocol>
{
    AWEStickerPickerController *_controller;
    UIView *_collectionStickerView;
    NSArray *_stickers;
}

@property(retain, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(retain, nonatomic) UIView *collectionStickerView; // @synthesize collectionStickerView=_collectionStickerView;
@property(nonatomic) __weak AWEStickerPickerController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)controller:(id)arg1 willHandleSelectSticker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

