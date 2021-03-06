//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBStarredInfo-Protocol.h"

@class DBDropboxPath, NSDate, NSString;

@interface DBFileStarredInfo : NSObject <DBStarredInfo>
{
    NSString *_starredIdentifier;
    NSString *_title;
    long long _fileType;
    NSDate *_timestamp;
    NSString *_actingUserId;
    long long _starredState;
    NSString *_starredModelDatabaseUniqueIdentifier;
    DBDropboxPath *_filePath;
}

@property(readonly, nonatomic) DBDropboxPath *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) NSString *starredModelDatabaseUniqueIdentifier; // @synthesize starredModelDatabaseUniqueIdentifier=_starredModelDatabaseUniqueIdentifier;
@property(nonatomic) long long starredState; // @synthesize starredState=_starredState;
@property(readonly, copy, nonatomic) NSString *actingUserId; // @synthesize actingUserId=_actingUserId;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long fileType; // @synthesize fileType=_fileType;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *starredIdentifier; // @synthesize starredIdentifier=_starredIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPath:(id)arg1 fileType:(long long)arg2 actingUserId:(id)arg3 timestamp:(id)arg4 starredState:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

