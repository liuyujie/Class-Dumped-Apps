//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface IESLiveGameInteractPanelModel : NSObject
{
    _Bool _isShow;
    UIView *_containerView;
    unsigned long long _itemType;
    NSString *_title;
}

@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)buildTitleLabel;
- (long long)compareWithOther:(id)arg1;
- (void)buildContainerView;
- (id)initWithTitle:(id)arg1 itemType:(unsigned long long)arg2;

@end

