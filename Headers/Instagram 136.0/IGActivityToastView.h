//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGActivityToastData, IGActivityToastItem, NSArray;

@interface IGActivityToastView : UIView
{
    NSArray *_allItemsListedFromLeftToRight;
    NSArray *_allItemsListedByPriority;
    _Bool _hasUnseenBrandedContentNotification;
    _Bool _hasUnstaleBrandedContent;
    _Bool _onlyShowComments;
    IGActivityToastData *_toastData;
    IGActivityToastItem *_commentsItem;
    IGActivityToastItem *_likesItem;
    IGActivityToastItem *_relationshipsItem;
    IGActivityToastItem *_storyMentionsItem;
    IGActivityToastItem *_usertagsItem;
    IGActivityToastItem *_brandedContentItem;
    IGActivityToastItem *_shoppingItem;
}

@property(retain, nonatomic) IGActivityToastItem *shoppingItem; // @synthesize shoppingItem=_shoppingItem;
@property(retain, nonatomic) IGActivityToastItem *brandedContentItem; // @synthesize brandedContentItem=_brandedContentItem;
@property(retain, nonatomic) IGActivityToastItem *usertagsItem; // @synthesize usertagsItem=_usertagsItem;
@property(retain, nonatomic) IGActivityToastItem *storyMentionsItem; // @synthesize storyMentionsItem=_storyMentionsItem;
@property(retain, nonatomic) IGActivityToastItem *relationshipsItem; // @synthesize relationshipsItem=_relationshipsItem;
@property(retain, nonatomic) IGActivityToastItem *likesItem; // @synthesize likesItem=_likesItem;
@property(retain, nonatomic) IGActivityToastItem *commentsItem; // @synthesize commentsItem=_commentsItem;
@property(nonatomic) _Bool onlyShowComments; // @synthesize onlyShowComments=_onlyShowComments;
@property(retain, nonatomic) IGActivityToastData *toastData; // @synthesize toastData=_toastData;
- (void).cxx_destruct;
- (void)_setUpAccessbilityLabels:(id)arg1;
- (id)toastItemsToShow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

