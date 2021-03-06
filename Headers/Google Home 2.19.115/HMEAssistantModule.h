//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASTSettings;
@protocol HMEAssistantCoordinator;

@interface HMEAssistantModule : NSObject
{
    int _assistantVersionNumber;
    ASTSettings *_settings;
    id <HMEAssistantCoordinator> _coordinator;
}

@property(readonly, nonatomic) id <HMEAssistantCoordinator> coordinator; // @synthesize coordinator=_coordinator;
@property(readonly, nonatomic) int assistantVersionNumber; // @synthesize assistantVersionNumber=_assistantVersionNumber;
@property(readonly, nonatomic) ASTSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (id)initWithSSOService:(id)arg1 placesAPIKey:(id)arg2 assistantSettingsEnvironment:(long long)arg3;

@end

