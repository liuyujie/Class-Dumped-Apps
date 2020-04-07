//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAudioDriverController-Protocol.h"
#import "SPTAudioDriverObserver-Protocol.h"

@class NSArray, NSHashTable, NSMutableArray, NSString;

@interface SPTAudioDriverControllerImplementation : NSObject <SPTAudioDriverObserver, SPTAudioDriverController>
{
    NSMutableArray *_mutableAudioDrivers;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableArray *mutableAudioDrivers; // @synthesize mutableAudioDrivers=_mutableAudioDrivers;
- (void).cxx_destruct;
- (void)audioDriverDidEnd:(id)arg1;
- (id)createAudioDriverWithAudioDriverType:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSArray *audioDrivers;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
