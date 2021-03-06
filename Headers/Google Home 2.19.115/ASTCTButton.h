//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTCTImage, ASTCTInteractiveElement, ASTCTProvider, GPBDuration, NSString;

@interface ASTCTButton : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBDuration *buttonAutoPressDuration; // @dynamic buttonAutoPressDuration;
@property(readonly, nonatomic) int buttonPressedActionOneOfCase; // @dynamic buttonPressedActionOneOfCase;
@property(nonatomic) int buttonType; // @dynamic buttonType;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(nonatomic) _Bool hasButtonAutoPressDuration; // @dynamic hasButtonAutoPressDuration;
@property(nonatomic) _Bool hasButtonType; // @dynamic hasButtonType;
@property(nonatomic) _Bool hasEnabled; // @dynamic hasEnabled;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(retain, nonatomic) ASTCTImage *image; // @dynamic image;
@property(retain, nonatomic) ASTCTInteractiveElement *interactiveElement; // @dynamic interactiveElement;
@property(retain, nonatomic) ASTCTProvider *provider; // @dynamic provider;
@property(copy, nonatomic) NSString *text; // @dynamic text;

@end

