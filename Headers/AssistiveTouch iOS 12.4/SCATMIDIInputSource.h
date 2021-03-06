//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATHardwareInputSource.h"

@class AXMIDIManager;

@interface SCATMIDIInputSource : SCATHardwareInputSource
{
    AXMIDIManager *_midiManager;
}

@property(retain, nonatomic) AXMIDIManager *midiManager; // @synthesize midiManager=_midiManager;
- (void).cxx_destruct;
- (long long)switchKeyForSwitch:(id)arg1;
- (struct NSString *)switchSource;
- (_Bool)isMIDIInputSource;
- (void)_handleMIDIEvent:(id)arg1 device:(id)arg2 entity:(id)arg3 endpoint:(id)arg4;
- (long long)_switchKeyForEvent:(id)arg1;
- (void)dealloc;
- (id)init;

@end

