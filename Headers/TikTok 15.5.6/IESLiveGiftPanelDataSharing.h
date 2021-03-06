//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSEventContext, HTSLiveGiftItem, HTSLiveGivingServiceWrapper, HTSLiveMyAssetsStore, IESLiveUserModel, LiveRoomModel, NSArray;

@interface IESLiveGiftPanelDataSharing : NSObject
{
    _Bool _linkMicOnly;
    _Bool _enableLockGiftTab;
    HTSLiveGivingServiceWrapper *_givingService;
    HTSEventContext *_trackContext;
    HTSLiveMyAssetsStore *_assetsStore;
    LiveRoomModel *_room;
    double _panelWidth;
    double _landscapeGiftPanelViewHeigthOffset;
    IESLiveUserModel *_toUser;
    long long _countPerGroup;
    unsigned long long _currentPageIndex;
    unsigned long long _currentPageType;
    NSArray *_collectionVMs;
    HTSLiveGiftItem *_currentSelectedGiftItem;
}

@property(retain, nonatomic) HTSLiveGiftItem *currentSelectedGiftItem; // @synthesize currentSelectedGiftItem=_currentSelectedGiftItem;
@property(nonatomic) _Bool enableLockGiftTab; // @synthesize enableLockGiftTab=_enableLockGiftTab;
@property(copy, nonatomic) NSArray *collectionVMs; // @synthesize collectionVMs=_collectionVMs;
@property(nonatomic) unsigned long long currentPageType; // @synthesize currentPageType=_currentPageType;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) long long countPerGroup; // @synthesize countPerGroup=_countPerGroup;
@property(retain, nonatomic) IESLiveUserModel *toUser; // @synthesize toUser=_toUser;
@property(nonatomic) _Bool linkMicOnly; // @synthesize linkMicOnly=_linkMicOnly;
@property(nonatomic) double landscapeGiftPanelViewHeigthOffset; // @synthesize landscapeGiftPanelViewHeigthOffset=_landscapeGiftPanelViewHeigthOffset;
@property(nonatomic) double panelWidth; // @synthesize panelWidth=_panelWidth;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
@property(retain, nonatomic) HTSLiveMyAssetsStore *assetsStore; // @synthesize assetsStore=_assetsStore;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(retain, nonatomic) HTSLiveGivingServiceWrapper *givingService; // @synthesize givingService=_givingService;
- (void).cxx_destruct;
- (id)itemViewModelWithPageType:(unsigned long long)arg1;
- (id)selectedCollectionViewModel;
- (id)init;

@end

