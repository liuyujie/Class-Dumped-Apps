//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDFCRotatableAnnotationHelper : NSObject
{
    struct Handle<std::__1::shared_ptr<PDFC::RotatableAnnotationHelper>, std::__1::shared_ptr<PDFC::RotatableAnnotationHelper>> _cppRefHandle;
}

+ (id)create;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize)getContentSizeForRotation:(int)arg1 boundingBox:(struct CGRect)arg2 storedContentSize:(id)arg3 scaleStoredSize:(_Bool)arg4;
- (id)initWithCpp:(const shared_ptr_4c6a7903 *)arg1;

@end

