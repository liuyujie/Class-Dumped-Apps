//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRColor, NSString;

@interface CDRBackgroundCarouselPanelImage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *fifeURL16X9; // @dynamic fifeURL16X9;
@property(copy, nonatomic) NSString *fifeURL1X1; // @dynamic fifeURL1X1;
@property(copy, nonatomic) NSString *fifeURL1X2; // @dynamic fifeURL1X2;
@property(nonatomic) _Bool hasFifeURL16X9; // @dynamic hasFifeURL16X9;
@property(nonatomic) _Bool hasFifeURL1X1; // @dynamic hasFifeURL1X1;
@property(nonatomic) _Bool hasFifeURL1X2; // @dynamic hasFifeURL1X2;
@property(nonatomic) _Bool hasHeaderBlurColor; // @dynamic hasHeaderBlurColor;
@property(nonatomic) _Bool hasTextBlurColor; // @dynamic hasTextBlurColor;
@property(retain, nonatomic) CDRColor *headerBlurColor; // @dynamic headerBlurColor;
@property(retain, nonatomic) CDRColor *textBlurColor; // @dynamic textBlurColor;

@end

