//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSPointerArray.h>

@interface NSPointerArray (PSPDFFoundation)
- (void)pspdf_enumeratePointersAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)pspdf_enumeratePointersWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)pspdf_enumeratePointersUsingBlock:(CDUnknownBlockType)arg1;
- (void)pspdf_removePointer:(void *)arg1;
@end

