//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface RLMUserResponseModel : NSObject
{
    _Bool _isAdmin;
    NSString *_identity;
    NSArray *_accounts;
    NSDictionary *_metadata;
}

@property(nonatomic) _Bool isAdmin; // @synthesize isAdmin=_isAdmin;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(retain, nonatomic) NSString *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (void)parseMetadataFromJSON:(id)arg1;

@end

