//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Core/UIGestureRecognizerDelegate-Protocol.h>

@interface _TtC4Core15ContextMenuView : UIView <UIGestureRecognizerDelegate>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: menuContainers
    // Error parsing type: , name: currentMenuStack
    // Error parsing type: , name: primaryMenuItems
    // Error parsing type: , name: deleteMenuItem
    // Error parsing type: , name: secondaryMenuItems
    // Error parsing type: , name: debugMenuItems
    // Error parsing type: , name: selectionFeedbackGenerator
    // Error parsing type: , name: highlightedRow
    // Error parsing type: , name: primaryActions
    // Error parsing type: , name: secondaryActions
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)performMoreRowAction;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

