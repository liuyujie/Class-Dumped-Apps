//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAMediaItem.h>

@interface WAMediaItem (Paths)
+ (_Bool)isFileAtPathProbablyQuickTimeMovie:(id)arg1;
+ (_Bool)linkItemAtPath:(id)arg1 withRelativePath:(id)arg2 toPath:(id)arg3 error:(out id *)arg4;
+ (_Bool)linkItemAtPath:(id)arg1 toRelativePath:(id)arg2;
+ (id)writeItemForJID:(id)arg1 baseName:(id)arg2 pathExtension:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
+ (id)linkPermanentItemFromRelativePath:(id)arg1 forJID:(id)arg2 baseName:(id)arg3 pathExtension:(id)arg4 error:(out id *)arg5;
+ (id)linkTemporaryItemFromAbsolutePath:(id)arg1 forJID:(id)arg2 baseName:(id)arg3 pathExtension:(id)arg4;
+ (id)writeItemWithData:(id)arg1 forJID:(id)arg2 baseName:(id)arg3 pathExtension:(id)arg4;
+ (id)copyItemFromPath:(id)arg1 forJID:(id)arg2 baseName:(id)arg3;
+ (id)transferItemFromPath:(id)arg1 forJID:(id)arg2 baseName:(id)arg3 pathExtension:(id)arg4 withOperation:(CDUnknownBlockType)arg5;
+ (id)randomFileName;
+ (id)relativePathFromSourcePath:(id)arg1 forJID:(id)arg2 baseName:(id)arg3 pathExtension:(id)arg4;
+ (id)relativeMediaPathForJID:(id)arg1;
+ (id)jidFromRelativeMediaPath:(id)arg1;
+ (id)relativePathFromMediaParentDirectoryForFilename:(id)arg1 andJID:(id)arg2;
@end
