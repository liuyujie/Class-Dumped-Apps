//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DeleteDirectoryHelper : NSObject
{
}

+ (void)db_deleteChildrenOfDirectory:(id)arg1 exceptWhiteListedChildren:(id)arg2 fileManager:(id)arg3 deleteCompletion:(CDUnknownBlockType)arg4;
+ (_Bool)deleteChildrenOfDirectory:(id)arg1 exceptWhiteListedDescendants:(id)arg2;
+ (void)deleteChildrenOfDirectory:(id)arg1 exceptWhiteListedChildren:(id)arg2 fileManager:(id)arg3 deleteCompletion:(CDUnknownBlockType)arg4;
+ (void)deleteChildrenOfDirectory:(id)arg1;
+ (_Bool)deleteFileAtPath:(id)arg1 error:(id *)arg2;
+ (id)db_tempFilePath;

@end

