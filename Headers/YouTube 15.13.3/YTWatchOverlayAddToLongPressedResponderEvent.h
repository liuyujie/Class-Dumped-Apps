//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTResponderEvent.h>

@class UIView;

@interface YTWatchOverlayAddToLongPressedResponderEvent : YTResponderEvent
{
    UIView *_fromView;
}

+ (id)eventFromView:(id)arg1 firstResponder:(id)arg2;
@property(readonly, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
- (void).cxx_destruct;
- (id)initWithView:(id)arg1 firstResponder:(id)arg2;

@end

