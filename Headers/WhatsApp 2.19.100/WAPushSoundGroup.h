//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WAPushSoundGroup : NSObject
{
    NSString *_localizedName;
    NSArray *_sounds;
}

+ (id)pushSoundWithFilename:(id)arg1 fromGroups:(id)arg2 outIndexPath:(out id *)arg3;
+ (id)pushSoundWithFilename:(id)arg1 fromGroups:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *sounds; // @synthesize sounds=_sounds;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void).cxx_destruct;
- (unsigned long long)indexOfPushSoundWithFilename:(id)arg1;
- (id)initWithLocalizedName:(id)arg1 sounds:(id)arg2;

@end
