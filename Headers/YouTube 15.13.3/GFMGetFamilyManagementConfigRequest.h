//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GFMApiRequestHeader;

@interface GFMGetFamilyManagementConfigRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFMApiRequestHeader *apiHeader; // @dynamic apiHeader;
@property(nonatomic) _Bool getFixitState; // @dynamic getFixitState;
@property(nonatomic) _Bool getManagementCapabilities; // @dynamic getManagementCapabilities;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;
@property(nonatomic) _Bool hasGetFixitState; // @dynamic hasGetFixitState;
@property(nonatomic) _Bool hasGetManagementCapabilities; // @dynamic hasGetManagementCapabilities;
@property(nonatomic) _Bool hasIsDirectAdd; // @dynamic hasIsDirectAdd;
@property(nonatomic) _Bool isDirectAdd; // @dynamic isDirectAdd;

@end

