//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GenericSelectorAddressSelectorParameters, NSString, OrchCommonParameters;

@interface GenericSelectorParameters : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GenericSelectorAddressSelectorParameters *addressSelectorParameters; // @dynamic addressSelectorParameters;
@property(copy, nonatomic) NSString *cancelButtonText; // @dynamic cancelButtonText;
@property(retain, nonatomic) OrchCommonParameters *commonParameters; // @dynamic commonParameters;
@property(nonatomic) _Bool hasCancelButtonText; // @dynamic hasCancelButtonText;
@property(nonatomic) _Bool hasCommonParameters; // @dynamic hasCommonParameters;
@property(nonatomic) _Bool hasScenario; // @dynamic hasScenario;
@property(nonatomic) int scenario; // @dynamic scenario;
@property(readonly, nonatomic) int scenarioParametersOneOfCase; // @dynamic scenarioParametersOneOfCase;

@end

