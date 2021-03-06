//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "ASTThemable-Protocol.h"

@class NSString, UIColor;

@interface ASTHotwordSensitivityThemableImageView : UIImageView <ASTThemable>
{
    UIColor *_canonicalTintColor;
}

@property(retain, nonatomic) UIColor *canonicalTintColor; // @synthesize canonicalTintColor=_canonicalTintColor;
- (void).cxx_destruct;
- (void)applyTheme:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;

@end

