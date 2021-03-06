//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface SCYSenderTrustedInfo : NSObject
{
    NSData *_identityKey;
    NSArray *_knownUserIdRepresentations;
}

+ (id)senderTrustedInfoWithIdentityKey:(id)arg1 knownUserIdRepresentations:(id)arg2;
@property(readonly, nonatomic) NSArray *knownUserIdRepresentations; // @synthesize knownUserIdRepresentations=_knownUserIdRepresentations;
@property(readonly, nonatomic) NSData *identityKey; // @synthesize identityKey=_identityKey;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentityKey:(id)arg1 knownUserIdRepresentations:(id)arg2;

@end

