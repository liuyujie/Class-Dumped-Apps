//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEIMXSAssistantModel, AWEXSAssistantNoticeGroupInfoModel;

@interface AWEXSAssistantNoticeModel : AWEBaseApiModel
{
    AWEXSAssistantNoticeGroupInfoModel *_groupInfo;
    AWEIMXSAssistantModel *_itemInfo;
}

+ (id)itemInfoJSONTransformer;
+ (id)groupInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEIMXSAssistantModel *itemInfo; // @synthesize itemInfo=_itemInfo;
@property(retain, nonatomic) AWEXSAssistantNoticeGroupInfoModel *groupInfo; // @synthesize groupInfo=_groupInfo;
- (void).cxx_destruct;

@end

