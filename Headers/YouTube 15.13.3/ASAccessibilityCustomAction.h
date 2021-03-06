//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityCustomAction.h>

#import <Module_Framework/ASAccessibilityElementPositioning-Protocol.h>

@class ASDisplayNode;

@interface ASAccessibilityCustomAction : UIAccessibilityCustomAction <ASAccessibilityElementPositioning>
{
    ASDisplayNode *_node;
    id _value;
    struct _NSRange _textRange;
}

@property(nonatomic) struct _NSRange textRange; // @synthesize textRange=_textRange;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) ASDisplayNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect accessibilityFrame;

@end

