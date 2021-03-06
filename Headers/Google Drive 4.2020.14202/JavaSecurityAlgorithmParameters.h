//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaSecurityAlgorithmParametersSpi, JavaSecurityProvider, NSString;

@interface JavaSecurityAlgorithmParameters : NSObject
{
    JavaSecurityProvider *provider_;
    JavaSecurityAlgorithmParametersSpi *paramSpi_;
    NSString *algorithm_;
    _Bool initialized_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getInstanceWithNSString:(id)arg1 withJavaSecurityProvider:(id)arg2;
+ (id)getInstanceWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)getInstanceWithNSString:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)getEncodedWithNSString:(id)arg1;
- (id)getEncoded;
- (id)getParameterSpecWithIOSClass:(id)arg1;
- (void)init__WithByteArray:(id)arg1 withNSString:(id)arg2;
- (void)init__WithByteArray:(id)arg1;
- (void)init__WithJavaSecuritySpecAlgorithmParameterSpec:(id)arg1;
- (id)getProvider;
- (id)getAlgorithm;
- (id)initWithJavaSecurityAlgorithmParametersSpi:(id)arg1 withJavaSecurityProvider:(id)arg2 withNSString:(id)arg3;

@end

