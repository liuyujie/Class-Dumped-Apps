//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMUserMessageTableViewCell.h"

@class CAShapeLayer, UIImageView, UIView, YYLabel;

@interface AWEIMVideoCommentMessageTableViewCell : AWEIMUserMessageTableViewCell
{
    UIView *_bubbleView;
    CAShapeLayer *_bubbleLayer;
    UIImageView *_videoCoverImageView;
    YYLabel *_commentLabel;
}

+ (id)identifier;
+ (struct CGSize)contentSizeWithMesasge:(id)arg1;
@property(retain, nonatomic) YYLabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UIImageView *videoCoverImageView; // @synthesize videoCoverImageView=_videoCoverImageView;
@property(retain, nonatomic) CAShapeLayer *bubbleLayer; // @synthesize bubbleLayer=_bubbleLayer;
@property(retain, nonatomic) UIView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (void).cxx_destruct;
- (id)p_stringWithString:(id)arg1 font:(id)arg2 linkTapAction:(CDUnknownBlockType)arg3 commonTapAction:(CDUnknownBlockType)arg4;
- (id)p_getDisplayNickname;
- (void)layoutSubviews;
- (struct CGRect)p_getDrawFrameForImage:(id)arg1;
- (void)p_updateBubbleLayer;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)menuViewRectContainsPoint:(struct CGPoint)arg1;
- (struct CGRect)menuTargetRect;
- (id)menuInView;
- (id)menuItems;
- (void)videoCoverTapped:(id)arg1;
- (void)setupUI;
- (void)configWithMessage:(id)arg1;

@end

