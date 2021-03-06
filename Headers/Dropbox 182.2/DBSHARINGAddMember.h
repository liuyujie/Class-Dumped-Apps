//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBSerializable-Protocol.h>
#import <DropboxExtensions/NSCopying-Protocol.h>

@class DBSHARINGAccessLevel, DBSHARINGMemberSelector, NSString;

@interface DBSHARINGAddMember : NSObject <DBSerializable, NSCopying>
{
    DBSHARINGMemberSelector *_member;
    DBSHARINGAccessLevel *_accessLevel;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) DBSHARINGAccessLevel *accessLevel; // @synthesize accessLevel=_accessLevel;
@property(readonly, nonatomic) DBSHARINGMemberSelector *member; // @synthesize member=_member;
- (void).cxx_destruct;
- (_Bool)isEqualToAddMember:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithMember:(id)arg1;
- (id)initWithMember:(id)arg1 accessLevel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

