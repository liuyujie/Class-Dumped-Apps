//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSString;

@interface DBFILESFolderOverviewMetadata : NSObject <DBSerializable, NSCopying>
{
    NSString *_descriptionRevisionId;
    NSString *_contentReferencesRevisionId;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, copy, nonatomic) NSString *contentReferencesRevisionId; // @synthesize contentReferencesRevisionId=_contentReferencesRevisionId;
@property(readonly, copy, nonatomic) NSString *descriptionRevisionId; // @synthesize descriptionRevisionId=_descriptionRevisionId;
- (void).cxx_destruct;
- (_Bool)isEqualToFolderOverviewMetadata:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initDefault;
- (id)initWithDescriptionRevisionId:(id)arg1 contentReferencesRevisionId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

