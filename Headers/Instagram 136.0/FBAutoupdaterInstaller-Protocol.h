//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class FBAutoupdaterHost, FBAutoupdaterUpdate, NSArray, NSString;

@protocol FBAutoupdaterInstaller <NSObject>
- (NSArray *)installedUpdatesForHost:(FBAutoupdaterHost *)arg1;
- (_Bool)isUpdateInstalledAtPath:(NSString *)arg1 metadataFilename:(NSString *)arg2;
- (FBAutoupdaterUpdate *)loadUpdateFromPath:(NSString *)arg1 metadataFilename:(NSString *)arg2 error:(id *)arg3;
- (_Bool)install:(FBAutoupdaterUpdate *)arg1 fromPath:(NSString *)arg2 toPath:(NSString *)arg3 metadataFilename:(NSString *)arg4 error:(id *)arg5;
@end

