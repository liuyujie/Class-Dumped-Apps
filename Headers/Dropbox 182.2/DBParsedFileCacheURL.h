//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBDropboxPath, NSString;

@interface DBParsedFileCacheURL : NSObject
{
    NSString *_accountRoleString;
    DBDropboxPath *_filePath;
    NSString *_sharedLinkSessionId;
}

@property(copy, nonatomic) NSString *sharedLinkSessionId; // @synthesize sharedLinkSessionId=_sharedLinkSessionId;
@property(retain, nonatomic) DBDropboxPath *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *accountRoleString; // @synthesize accountRoleString=_accountRoleString;
- (void).cxx_destruct;

@end

