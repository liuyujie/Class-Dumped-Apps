//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface StoredRegistrationEntry : NSObject
{
    NSString *RegistrationName;
    NSString *RegistrationId;
    NSString *ETag;
}

@property(copy, nonatomic) NSString *ETag; // @synthesize ETag;
@property(copy, nonatomic) NSString *RegistrationId; // @synthesize RegistrationId;
@property(copy, nonatomic) NSString *RegistrationName; // @synthesize RegistrationName;
- (void).cxx_destruct;
- (id)toString;
- (id)initWithString:(id)arg1;

@end
