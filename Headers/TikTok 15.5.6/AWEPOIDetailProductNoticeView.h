//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AWEPOIDetailProductNoticeView : UIView
{
    UILabel *_noticeLbl;
    UIImageView *_arrowImage;
    CDUnknownBlockType _noticeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType noticeBlock; // @synthesize noticeBlock=_noticeBlock;
@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UILabel *noticeLbl; // @synthesize noticeLbl=_noticeLbl;
- (void).cxx_destruct;
- (void)setState:(_Bool)arg1;
- (void)p_handleTapEvent:(id)arg1;
- (void)p_setupUI;
- (id)init;

@end

