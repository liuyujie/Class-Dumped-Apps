//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class PSPDFDocument;

@interface PSPDFPageLabelFormatter : NSFormatter
{
    PSPDFDocument *_document;
}

+ (id)localizedStringFromPageRange:(struct _NSRange)arg1 document:(id)arg2;
@property(retain, nonatomic) PSPDFDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromRange:(struct _NSRange)arg1;

@end

