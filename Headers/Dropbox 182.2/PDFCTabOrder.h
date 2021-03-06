//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface PDFCTabOrder : NSObject
{
    NSArray *_widgetIDs;
    NSNumber *_pageFrom;
    NSNumber *_pageTo;
}

+ (id)TabOrderWithWidgetIDs:(id)arg1 pageFrom:(id)arg2 pageTo:(id)arg3;
@property(readonly, nonatomic) NSNumber *pageTo; // @synthesize pageTo=_pageTo;
@property(readonly, nonatomic) NSNumber *pageFrom; // @synthesize pageFrom=_pageFrom;
@property(readonly, nonatomic) NSArray *widgetIDs; // @synthesize widgetIDs=_widgetIDs;
- (void).cxx_destruct;
- (id)description;
- (id)initWithWidgetIDs:(id)arg1 pageFrom:(id)arg2 pageTo:(id)arg3;

@end

