//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTContextMenuView;

@protocol SPTContextMenuViewInteractionTarget <NSObject>
- (void)interactionEndedInView:(SPTContextMenuView *)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)interactionChangedInView:(SPTContextMenuView *)arg1 translation:(struct CGPoint)arg2;
- (void)interactionBeganInView:(SPTContextMenuView *)arg1 translation:(struct CGPoint)arg2;
@end
