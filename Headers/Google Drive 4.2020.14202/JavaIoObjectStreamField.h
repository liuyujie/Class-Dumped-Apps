//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaLangComparable-Protocol.h"

@class NSString;

@interface JavaIoObjectStreamField : NSObject <JavaLangComparable>
{
    int offset_;
    NSString *name_;
    id type_;
    NSString *typeString_;
    _Bool unshared_;
    _Bool isDeserialized_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (_Bool)defaultResolve;
- (void)setUnsharedWithBoolean:(_Bool)arg1;
- (_Bool)isUnshared;
- (void)resolveWithJavaLangClassLoader:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)setOffsetWithInt:(int)arg1;
- (_Bool)writeFieldWithJavaIoDataOutputStream:(id)arg1;
- (_Bool)isPrimitive;
- (id)getTypeString;
- (unsigned short)typeCodeOfWithIOSClass:(id)arg1;
- (unsigned short)getTypeCode;
- (id)getType;
- (id)getTypeInternal;
- (int)getOffset;
- (id)getName;
- (int)compareToWithId:(id)arg1;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)initWithNSString:(id)arg1 withIOSClass:(id)arg2 withBoolean:(_Bool)arg3;
- (id)initWithNSString:(id)arg1 withIOSClass:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

