//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTView.h"

@class RCTBridge;

@interface RCTSafeAreaView : RCTView
{
    RCTBridge *_bridge;
    struct UIEdgeInsets _currentSafeAreaInsets;
}

- (void).cxx_destruct;
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBridge:(id)arg1;

@end

