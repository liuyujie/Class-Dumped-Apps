//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GwtJsArray;

@interface ComGoogleAppsDocsXplatMathDoubleMatrix : NSObject
{
    int width_;
    int height_;
    GwtJsArray *array_;
}

+ (void)forEachWithComGoogleAppsDocsXplatMathDoubleMatrix:(id)arg1 withComGoogleAppsDocsXplatMathDoubleMatrix_MatrixValueConsumer:(id)arg2;
+ (id)mapWithComGoogleAppsDocsXplatMathDoubleMatrix:(id)arg1 withComGoogleAppsDocsXplatMathDoubleMatrix_MatrixValueProvider:(id)arg2;
- (void)dealloc;
- (_Bool)equalsWithToleranceWithComGoogleAppsDocsXplatMathDoubleMatrix:(id)arg1 withJavaLangDouble:(id)arg2;
- (id)toArray;
- (void)setValueAtWithInt:(int)arg1 withInt:(int)arg2 withDouble:(double)arg3;
- (id)getValueAtWithInt:(int)arg1 withInt:(int)arg2;
- (int)getHeight;
- (int)getWidth;
- (id)initWithGwtJsArray:(id)arg1;
- (id)initWithInt:(int)arg1 withInt:(int)arg2;

@end

