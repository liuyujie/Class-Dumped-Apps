//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSSet, NSString;

@interface SBRegistration : NSObject
{
    NSString *ETag;
    NSDate *expiresAt;
    NSSet *tags;
    NSString *deviceToken;
    NSString *registrationId;
}

+ (id)payloadWithDeviceToken:(id)arg1 tags:(id)arg2;
+ (id)Name;
@property(copy, nonatomic) NSString *registrationId; // @synthesize registrationId;
@property(copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken;
@property(copy, nonatomic) NSSet *tags; // @synthesize tags;
@property(copy, nonatomic) NSDate *expiresAt; // @synthesize expiresAt;
@property(copy, nonatomic) NSString *ETag; // @synthesize ETag;
- (void).cxx_destruct;

@end
