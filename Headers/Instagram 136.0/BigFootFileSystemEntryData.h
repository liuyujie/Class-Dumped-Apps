//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/BigFootEntryDataDictionaryRepresentation-Protocol.h>

@class NSString;

@interface BigFootFileSystemEntryData : NSObject <BigFootEntryDataDictionaryRepresentation>
{
    unsigned long long _availableDiskSpace;
    unsigned long long _freeDiskSpace;
    unsigned long long _totalDiskSpace;
}

@property(readonly, nonatomic) unsigned long long totalDiskSpace; // @synthesize totalDiskSpace=_totalDiskSpace;
@property(readonly, nonatomic) unsigned long long freeDiskSpace; // @synthesize freeDiskSpace=_freeDiskSpace;
@property(readonly, nonatomic) unsigned long long availableDiskSpace; // @synthesize availableDiskSpace=_availableDiskSpace;
- (struct NSDictionary *)dictionaryRepresentation;
- (id)initWithAvailabeDiskSpace:(unsigned long long)arg1 freeDiskSpace:(unsigned long long)arg2 totalDiskSpace:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

