//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWELiveMultiInteractListModel, AWELiveNearbyTV, AWELiveRoomConfigModel, AWELiveRoomSourceCountModel, AWELiveStreamURLModel, AWEShareModel, AWEURLModel, AWEUserModel, NSNumber, NSString;

@interface AWELiveRoomModel : AWEBaseApiModel
{
    _Bool _inSandBox;
    _Bool _isCommerceLive;
    _Bool _isAudioLive;
    _Bool _screenshotRoom;
    _Bool _thirdPartyRoom;
    _Bool _isOfficalRoom;
    NSNumber *_roomID;
    long long _status;
    AWEUserModel *_owner;
    NSString *_title;
    long long _userCount;
    long long _newFansCount;
    long long _createTime;
    long long _finishTime;
    NSNumber *_streamID;
    AWELiveStreamURLModel *_streamURL;
    AWELiveStreamURLModel *_backupStreamURL;
    AWEShareModel *_shareInfo;
    long long _diggCount;
    long long _totalUserCount;
    long long _coins;
    AWEURLModel *_dynamicCoverURL;
    AWEURLModel *_roomCoverURL;
    NSString *_roomTypeTag;
    AWELiveRoomConfigModel *_config;
    AWELiveRoomSourceCountModel *_sourceCount;
    long long _liveMode;
    AWEURLModel *_liveFeedCellWebpCover;
    long long _cellIndexOfChannel;
    NSString *_enterFrom;
    NSString *_groupID;
    NSString *_secondStageTagString;
    NSNumber *_interactiveEnabled;
    AWELiveMultiInteractListModel *_interactList;
    AWELiveNearbyTV *_nearbyTV;
    NSString *_videoFeedTag;
    NSString *_distance;
    NSString *_ownerUserID;
}

+ (id)videoFeedTagJSONTransformer;
+ (id)sourceCountJSONTransformer;
+ (id)configJSONTransformer;
+ (id)roomCoverURLJSONTransformer;
+ (id)dynamicCoverURLJSONTransformer;
+ (id)shareInfoJSONTransformer;
+ (id)ownerJSONTransformer;
+ (id)backupStreamURLJSONTransformer;
+ (id)streamURLJSONTransformer;
+ (id)liveFeedCellWebpCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)instanceFromLiveRoom:(id)arg1;
@property(retain, nonatomic) NSString *ownerUserID; // @synthesize ownerUserID=_ownerUserID;
@property(nonatomic) _Bool isOfficalRoom; // @synthesize isOfficalRoom=_isOfficalRoom;
@property(nonatomic) _Bool thirdPartyRoom; // @synthesize thirdPartyRoom=_thirdPartyRoom;
@property(nonatomic) _Bool screenshotRoom; // @synthesize screenshotRoom=_screenshotRoom;
@property(copy, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *videoFeedTag; // @synthesize videoFeedTag=_videoFeedTag;
@property(retain, nonatomic) AWELiveNearbyTV *nearbyTV; // @synthesize nearbyTV=_nearbyTV;
@property(retain, nonatomic) AWELiveMultiInteractListModel *interactList; // @synthesize interactList=_interactList;
@property(retain, nonatomic) NSNumber *interactiveEnabled; // @synthesize interactiveEnabled=_interactiveEnabled;
@property(nonatomic) _Bool isAudioLive; // @synthesize isAudioLive=_isAudioLive;
@property(retain, nonatomic) NSString *secondStageTagString; // @synthesize secondStageTagString=_secondStageTagString;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(nonatomic) long long cellIndexOfChannel; // @synthesize cellIndexOfChannel=_cellIndexOfChannel;
@property(nonatomic) _Bool isCommerceLive; // @synthesize isCommerceLive=_isCommerceLive;
@property(retain, nonatomic) AWEURLModel *liveFeedCellWebpCover; // @synthesize liveFeedCellWebpCover=_liveFeedCellWebpCover;
@property(nonatomic) long long liveMode; // @synthesize liveMode=_liveMode;
@property(retain, nonatomic) AWELiveRoomSourceCountModel *sourceCount; // @synthesize sourceCount=_sourceCount;
@property(retain, nonatomic) AWELiveRoomConfigModel *config; // @synthesize config=_config;
@property(readonly, nonatomic) NSString *roomTypeTag; // @synthesize roomTypeTag=_roomTypeTag;
@property(retain, nonatomic) AWEURLModel *roomCoverURL; // @synthesize roomCoverURL=_roomCoverURL;
@property(retain, nonatomic) AWEURLModel *dynamicCoverURL; // @synthesize dynamicCoverURL=_dynamicCoverURL;
@property(nonatomic) _Bool inSandBox; // @synthesize inSandBox=_inSandBox;
@property(nonatomic) long long coins; // @synthesize coins=_coins;
@property(nonatomic) long long totalUserCount; // @synthesize totalUserCount=_totalUserCount;
@property(nonatomic) long long diggCount; // @synthesize diggCount=_diggCount;
@property(retain, nonatomic) AWEShareModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) AWELiveStreamURLModel *backupStreamURL; // @synthesize backupStreamURL=_backupStreamURL;
@property(retain, nonatomic) AWELiveStreamURLModel *streamURL; // @synthesize streamURL=_streamURL;
@property(retain, nonatomic) NSNumber *streamID; // @synthesize streamID=_streamID;
@property(nonatomic) long long finishTime; // @synthesize finishTime=_finishTime;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long newFansCount; // @synthesize newFansCount=_newFansCount;
@property(nonatomic) long long userCount; // @synthesize userCount=_userCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) AWEUserModel *owner; // @synthesize owner=_owner;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
- (void).cxx_destruct;
- (id)initWithRoomID:(id)arg1;

@end

