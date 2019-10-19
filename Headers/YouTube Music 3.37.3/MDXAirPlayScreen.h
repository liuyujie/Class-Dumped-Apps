//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDXScreen-Protocol.h"

@class NSDate, NSString;

@interface MDXAirPlayScreen : NSObject <MDXScreen>
{
    _Bool _audioDevice;
    int _routeType;
    NSString *_clientName;
    NSString *_loungeToken;
    NSDate *_loungeTokenExpiration;
    NSString *_name;
    NSString *_screenID;
}

@property(copy, nonatomic) NSString *screenID; // @synthesize screenID=_screenID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
- (void).cxx_destruct;
- (id)sessionWithPairingHandler:(id)arg1;
- (id)channel;
- (_Bool)hasValidLoungeToken;
@property(readonly, nonatomic) int routeType; // @synthesize routeType=_routeType;
@property(readonly, nonatomic) NSDate *loungeTokenExpiration; // @synthesize loungeTokenExpiration=_loungeTokenExpiration;
@property(readonly, nonatomic) NSString *loungeToken; // @synthesize loungeToken=_loungeToken;
- (id)signInSessionID;
@property(readonly, nonatomic, getter=isAudioDevice) _Bool audioDevice; // @synthesize audioDevice=_audioDevice;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
