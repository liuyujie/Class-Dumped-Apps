//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNumber.h>

@interface JavaUtilConcurrentAtomicStriped64 : NSNumber
{
    unsigned long long cells_;
    // Error parsing type: Aq, name: base_
    // Error parsing type: Ai, name: cellsBusy_
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (long long)applyWithJavaUtilFunctionDoubleBinaryOperator:(id)arg1 withLong:(long long)arg2 withDouble:(double)arg3;
+ (int)advanceProbeWithInt:(int)arg1;
+ (int)getProbe;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)doubleAccumulateWithDouble:(double)arg1 withJavaUtilFunctionDoubleBinaryOperator:(id)arg2 withBoolean:(_Bool)arg3;
- (void)longAccumulateWithLong:(long long)arg1 withJavaUtilFunctionLongBinaryOperator:(id)arg2 withBoolean:(_Bool)arg3;
- (_Bool)casCellsBusy;
- (_Bool)casBaseWithLong:(long long)arg1 withLong:(long long)arg2;
- (id)initPackagePrivate;

@end

