//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleProtobufDescriptorProtos_FieldOptions;

@interface ComGoogleProtobufDescriptors_FieldDescriptor : NSObject
{
    struct CGPFieldData *data_;
    unsigned int tag_;
    unsigned long long javaType_;
    id valueType_;
    ComGoogleProtobufDescriptorProtos_FieldOptions *fieldOptions_;
    struct ComGoogleProtobufDescriptors_Descriptor *containingType_;
    struct ComGoogleProtobufDescriptors_OneofDescriptor *containingOneof_;
}

- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (id)getOptions;
- (id)getDefaultValue;
- (struct ComGoogleProtobufDescriptors_EnumDescriptor *)getEnumType;
- (struct ComGoogleProtobufDescriptors_Descriptor *)getMessageType;
- (struct ComGoogleProtobufDescriptors_OneofDescriptor *)getContainingOneof;
- (_Bool)isExtension;
- (_Bool)isRepeated;
- (_Bool)isRequired;
- (id)getName;
- (int)getNumber;
- (id)getJavaType;
- (id)getType;
- (id)initWithData:(struct CGPFieldData *)arg1 containingType:(struct ComGoogleProtobufDescriptors_Descriptor *)arg2;

@end

