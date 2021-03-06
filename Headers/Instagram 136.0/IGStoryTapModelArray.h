//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGStoryOverlayTapModel, NSArray;

@interface IGStoryTapModelArray : NSObject <NSCoding>
{
    NSArray *_tapModels;
}

@property(retain, nonatomic) NSArray *tapModels; // @synthesize tapModels=_tapModels;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTapModels:(id)arg1;
- (id)_tapModelObjectsFromTapModelsWithClass:(Class)arg1;
@property(readonly, copy) IGStoryOverlayTapModel *discussionStickerTapModel;
@property(readonly, copy) NSArray *soundOnStickerTapModels;
@property(readonly, copy) IGStoryOverlayTapModel *feedPostStickerTapModel;
@property(readonly, copy) IGStoryOverlayTapModel *invitesStickerTapModel;
@property(readonly, copy) NSArray *bloksStickerTapModels;
@property(readonly, copy) IGStoryOverlayTapModel *chatStickerTapModel;
@property(readonly, copy) IGStoryOverlayTapModel *productShareStickerTapModel;
@property(readonly, copy) IGStoryOverlayTapModel *fundraiserStickerTapModel;
@property(readonly, copy) NSArray *electionStickerTapModels;
@property(readonly, copy) IGStoryOverlayTapModel *countdownStickerConsumptionTapModel;
@property(readonly, copy) IGStoryOverlayTapModel *quizStickerConsumptionTapModel;
@property(readonly, copy) IGStoryOverlayTapModel *musicLyricsStickerTapModel;
@property(readonly, copy) IGStoryOverlayTapModel *musicStickerTapModel;
@property(readonly, copy) IGStoryOverlayTapModel *questionAnswerStickerTapModel;
@property(readonly, copy) IGStoryOverlayTapModel *sliderStickerTapModel;
@property(readonly, copy) IGStoryOverlayTapModel *pollStickerTapModel;
@property(readonly, copy) IGStoryOverlayTapModel *productStickerTapModel;
@property(readonly, copy) IGStoryOverlayTapModel *locationTapModel;
@property(readonly, copy) NSArray *hashtagTapModels;
@property(readonly, copy) NSArray *userTapModels;

@end

