//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle;

@interface IGBundle : NSObject
{
    NSBundle *_nsbundle;
}

+ (id)bundleForClass:(Class)arg1;
+ (id)mainBundle;
+ (id)bundleWithURL:(id)arg1;
+ (id)bundleWithPath:(id)arg1;
+ (id)filterKitOSXAssetBundle;
+ (id)filterKitAssetBundle;
- (void).cxx_destruct;
- (id)appStoreReceiptURL;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)localizedInfoDictionary;
- (id)infoDictionary;
- (id)resourcePath;
- (id)bundleIdentifier;
- (id)localizations;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
- (id)bundlePath;
- (id)initWithNSBundle:(id)arg1;

@end

