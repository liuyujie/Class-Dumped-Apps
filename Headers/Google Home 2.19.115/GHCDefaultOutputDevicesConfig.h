//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCDeviceId;

@interface GHCDefaultOutputDevicesConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMusicAndAudioDeviceId; // @dynamic hasMusicAndAudioDeviceId;
@property(nonatomic) _Bool hasTvDeviceId; // @dynamic hasTvDeviceId;
@property(retain, nonatomic) GHCDeviceId *musicAndAudioDeviceId; // @dynamic musicAndAudioDeviceId;
@property(retain, nonatomic) GHCDeviceId *tvDeviceId; // @dynamic tvDeviceId;

@end

