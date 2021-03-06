//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"
#import "SunSecurityUtilDerEncoder-Protocol.h"

@class JavaSecurityAlgorithmParameters, NSString, SunSecurityUtilDerValue, SunSecurityUtilObjectIdentifier;

@interface SunSecurityX509AlgorithmId : NSObject <JavaIoSerializable, SunSecurityUtilDerEncoder>
{
    SunSecurityUtilDerValue *params_;
    SunSecurityUtilObjectIdentifier *algid_;
    JavaSecurityAlgorithmParameters *algParams_;
    _Bool constructedFromDer_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getDigAlgFromSigAlgWithNSString:(id)arg1;
+ (id)getEncAlgFromSigAlgWithNSString:(id)arg1;
+ (id)makeSigAlgWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)oidWithIntArray:(id)arg1;
+ (void)reinitializeMappingTableLocked;
+ (id)algOIDWithNSString:(id)arg1;
+ (id)getWithJavaSecurityAlgorithmParameters:(id)arg1;
+ (id)getWithNSString:(id)arg1;
+ (id)getAlgorithmIdWithNSString:(id)arg1;
+ (id)parseWithSunSecurityUtilDerValue:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)paramsToString;
@property(readonly) unsigned long long hash;
- (_Bool)equalsWithSunSecurityUtilObjectIdentifier:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)equalsWithSunSecurityX509AlgorithmId:(id)arg1;
- (id)getEncodedParams;
- (id)getParameters;
- (id)getName;
- (id)getOID;
- (id)encode;
- (void)derEncodeWithJavaIoOutputStream:(id)arg1;
- (void)encodeWithSunSecurityUtilDerOutputStream:(id)arg1;
- (void)decodeParams;
- (id)initWithSunSecurityUtilObjectIdentifier:(id)arg1 withSunSecurityUtilDerValue:(id)arg2;
- (id)initWithSunSecurityUtilObjectIdentifier:(id)arg1 withJavaSecurityAlgorithmParameters:(id)arg2;
- (id)initWithSunSecurityUtilObjectIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

