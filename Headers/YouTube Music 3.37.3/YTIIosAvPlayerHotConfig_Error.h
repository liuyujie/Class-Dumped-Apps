//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIIosAvPlayerHotConfig_Error : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long errorCode; // @dynamic errorCode;
@property(copy, nonatomic) NSString *errorDomain; // @dynamic errorDomain;
@property(nonatomic) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(nonatomic) _Bool hasErrorDomain; // @dynamic hasErrorDomain;
@property(nonatomic) _Bool hasUnderlyingError; // @dynamic hasUnderlyingError;
@property(retain, nonatomic) YTIIosAvPlayerHotConfig_Error *underlyingError; // @dynamic underlyingError;

@end
