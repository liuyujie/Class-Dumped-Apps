//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol ACCABTestProtocol, ACCENVProtocol, ACCRTLProtocol;

@protocol ACCBaseServiceContainerProtocol <NSObject>
- (id <ACCRTLProtocol>)provideSingletonACCRTLProtocolWithArguments:(NSArray *)arg1;
- (id <ACCABTestProtocol>)provideSingletonACCABTestProtocolWithArguments:(NSArray *)arg1;
- (id <ACCENVProtocol>)provideSingletonACCENVProtocolWithArguments:(NSArray *)arg1;
@end

