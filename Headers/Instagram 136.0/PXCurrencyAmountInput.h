//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <InstagramAppCoreFramework/NSCoding-Protocol.h>
#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@class NSString;

@interface PXCurrencyAmountInput : FBValueObject <NSCopying, NSCoding>
{
    NSString *_amount;
    NSString *_currency;
}

@property(readonly, copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
- (void).cxx_destruct;
- (id)initWithAmount:(id)arg1 currency:(id)arg2;

@end

