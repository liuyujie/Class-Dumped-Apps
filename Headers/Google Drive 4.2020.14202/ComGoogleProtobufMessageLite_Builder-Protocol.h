//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageLiteOrBuilder-Protocol.h"
#import "JavaObject-Protocol.h"

@class ComGoogleProtobufByteString, ComGoogleProtobufExtensionRegistryLite, IOSByteArray, JavaIoInputStream;
@protocol ComGoogleProtobufMessageLite, ComGoogleProtobufMessageLite_Builder;

@protocol ComGoogleProtobufMessageLite_Builder <ComGoogleProtobufMessageLiteOrBuilder, JavaObject>
- (_Bool)mergeDelimitedFromWithJavaIoInputStream:(JavaIoInputStream *)arg1 withComGoogleProtobufExtensionRegistryLite:(ComGoogleProtobufExtensionRegistryLite *)arg2;
- (_Bool)mergeDelimitedFromWithJavaIoInputStream:(JavaIoInputStream *)arg1;
- (id <ComGoogleProtobufMessageLite_Builder>)mergeFromWithJavaIoInputStream:(JavaIoInputStream *)arg1 withComGoogleProtobufExtensionRegistryLite:(ComGoogleProtobufExtensionRegistryLite *)arg2;
- (id <ComGoogleProtobufMessageLite_Builder>)mergeFromWithJavaIoInputStream:(JavaIoInputStream *)arg1;
- (id <ComGoogleProtobufMessageLite_Builder>)mergeFromWithByteArray:(IOSByteArray *)arg1 withComGoogleProtobufExtensionRegistryLite:(ComGoogleProtobufExtensionRegistryLite *)arg2;
- (id <ComGoogleProtobufMessageLite_Builder>)mergeFromWithByteArray:(IOSByteArray *)arg1;
- (id <ComGoogleProtobufMessageLite_Builder>)mergeFromWithComGoogleProtobufByteString:(ComGoogleProtobufByteString *)arg1 withComGoogleProtobufExtensionRegistryLite:(ComGoogleProtobufExtensionRegistryLite *)arg2;
- (id <ComGoogleProtobufMessageLite_Builder>)mergeFromWithComGoogleProtobufByteString:(ComGoogleProtobufByteString *)arg1;
- (id <ComGoogleProtobufMessageLite>)build;
@end

