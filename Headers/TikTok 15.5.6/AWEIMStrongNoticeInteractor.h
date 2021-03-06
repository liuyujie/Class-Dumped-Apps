//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMInteractorObject.h"

@class AWEIMMessageFollowViewInteractor, AWEIMStrongNoticeView;

@interface AWEIMStrongNoticeInteractor : AWEIMInteractorObject
{
    AWEIMMessageFollowViewInteractor *_followInteractor;
    AWEIMStrongNoticeView *_noticeView;
}

@property(retain, nonatomic) AWEIMStrongNoticeView *noticeView; // @synthesize noticeView=_noticeView;
@property(nonatomic) __weak AWEIMMessageFollowViewInteractor *followInteractor; // @synthesize followInteractor=_followInteractor;
- (void).cxx_destruct;
- (double)contentHeight;
- (_Bool)isShowingStrongTips;
- (_Bool)hasMsgCloseStrongTips:(id)arg1 inConversation:(id)arg2;
- (void)markMsgHasCloseStrongTips:(id)arg1 inConversation:(id)arg2;
- (void)updateLayout:(struct CGPoint)arg1;
- (void)showStrongNoticeTipsWithMsg:(id)arg1 inConversation:(id)arg2 origin:(struct CGPoint)arg3;
- (id)vcParent;

@end

