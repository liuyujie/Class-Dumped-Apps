//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (WhatsApp)
- (_Bool)wa_fitsInWidth:(double)arg1 maximumNumberOfLines:(unsigned long long)arg2;
- (id)wa_attributedStringByAddingAttributes:(id)arg1;
- (id)wa_attributedStringByAddingAttributes:(id)arg1 aroundHTMLTagName:(id)arg2;
- (_Bool)wa_hasUniformFontSize;
- (id)wa_baseFont;
- (void)wa_rangesOfWordsThatAreIncludedInRange:(struct _NSRange)arg1 withWordRanges:(CDUnknownBlockType)arg2;
- (struct _NSRange)adjustedRange:(struct _NSRange)arg1 byRemovingFormattingSymbolsFromAttributedString:(id)arg2;
- (struct _NSRange)wa_formattingSymbolSuffixRange;
- (struct _NSRange)wa_formattingSymbolPrefixRange;
- (id)wa_attributedStringWithResizedAttachmentsUsingFont:(id)arg1;
- (id)wa_mutabeAttributedStringCopyWithAttachmentsUsingFont:(id)arg1 withControlCharacters:(_Bool)arg2 containsCustomAttachments:(_Bool *)arg3;
- (id)wa_attributedStringWithAttachmentsUsingFont:(id)arg1 withControlCharacters:(_Bool)arg2;
- (id)wa_stringWithAttachmentsStripped;
- (_Bool)wa_containsAttachments;
@end

