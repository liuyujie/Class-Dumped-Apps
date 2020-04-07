//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@protocol SPTHubInteractionLogger, SPTPlayer, SPTUBIHubsUtilities;

@interface SPTHubPlayFromContextCommandHandler : NSObject <HUBCommandHandler>
{
    id <SPTPlayer> _player;
    id <SPTHubInteractionLogger> _interactionLogger;
    id <SPTUBIHubsUtilities> _ubiHubsInstrumentation;
}

@property(retain, nonatomic) id <SPTUBIHubsUtilities> ubiHubsInstrumentation; // @synthesize ubiHubsInstrumentation=_ubiHubsInstrumentation;
@property(readonly, nonatomic) id <SPTHubInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)obtainPlayOptionsFromCommand:(id)arg1;
- (id)obtainPlayerContextFromCommand:(id)arg1;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithPlayer:(id)arg1 notificationCenter:(id)arg2 interactionLogger:(id)arg3 ubiHubsInstrumentation:(id)arg4;

@end
