//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKFolderColorPalette, NSString;

@interface GDKDefaultFileCVOConfigParamsBuilder : NSObject
{
    _Bool _shortcutResolutionEnabled;
    _Bool _dynamicTypeEnabled;
    int _style;
    NSString *_userID;
    GDKFolderColorPalette *_folderColorPalette;
}

+ (id)builderFromExistingObject:(id)arg1;
+ (id)builderWithUserID:(id)arg1;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) _Bool dynamicTypeEnabled; // @synthesize dynamicTypeEnabled=_dynamicTypeEnabled;
@property(nonatomic) _Bool shortcutResolutionEnabled; // @synthesize shortcutResolutionEnabled=_shortcutResolutionEnabled;
@property(retain, nonatomic) GDKFolderColorPalette *folderColorPalette; // @synthesize folderColorPalette=_folderColorPalette;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)build;

@end

