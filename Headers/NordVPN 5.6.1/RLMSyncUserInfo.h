//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface RLMSyncUserInfo : NSObject
{
    _Bool _isAdmin;
    NSArray *_accounts;
    NSString *_identity;
    NSDictionary *_metadata;
}

+ (id)syncUserInfoWithModel:(id)arg1;
@property(nonatomic) _Bool isAdmin; // @synthesize isAdmin=_isAdmin;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *identity; // @synthesize identity=_identity;
@property(retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;
- (id)initPrivate;

@end

