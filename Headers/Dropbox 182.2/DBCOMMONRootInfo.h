//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSString;

@interface DBCOMMONRootInfo : NSObject <DBSerializable, NSCopying>
{
    NSString *_rootNamespaceId;
    NSString *_homeNamespaceId;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, copy, nonatomic) NSString *homeNamespaceId; // @synthesize homeNamespaceId=_homeNamespaceId;
@property(readonly, copy, nonatomic) NSString *rootNamespaceId; // @synthesize rootNamespaceId=_rootNamespaceId;
- (void).cxx_destruct;
- (_Bool)isEqualToRootInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithRootNamespaceId:(id)arg1 homeNamespaceId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

