//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGFacebookPageAddress : NSObject <NSCopying>
{
    NSString *_street;
    NSString *_postalCode;
}

@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *formatedAddress;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStreet:(id)arg1 postalCode:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

