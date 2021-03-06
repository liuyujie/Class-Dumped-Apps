//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESLiveImage, NSNumber, NSString;

@interface IESLiveGiftPanelOpeartion : MTLModel <MTLJSONSerializing>
{
    IESLiveImage *_leadingImage;
    IESLiveImage *_trailingImage;
    NSString *_title;
    NSString *_titleColor;
    NSNumber *_titleSize;
    NSString *_event;
    NSString *_schema;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(copy, nonatomic) NSString *event; // @synthesize event=_event;
@property(retain, nonatomic) NSNumber *titleSize; // @synthesize titleSize=_titleSize;
@property(copy, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) IESLiveImage *trailingImage; // @synthesize trailingImage=_trailingImage;
@property(retain, nonatomic) IESLiveImage *leadingImage; // @synthesize leadingImage=_leadingImage;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

