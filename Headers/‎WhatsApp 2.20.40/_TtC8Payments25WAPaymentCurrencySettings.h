//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC8Payments25WAPaymentCurrencySettings : NSObject
{
    // Error parsing type: , name: code
    // Error parsing type: , name: symbol
    // Error parsing type: , name: decimalSeparator
    // Error parsing type: , name: paymentsType
    // Error parsing type: , name: $__lazy_storage_$_isPrefixSymbol
    // Error parsing type: , name: $__lazy_storage_$_paymentIconString
    // Error parsing type: , name: $__lazy_storage_$_paymentRequestIconString
    // Error parsing type: , name: $__lazy_storage_$_amountPrecision
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) BOOL amountPrecision;
@property(nonatomic, copy) NSString *paymentRequestIconString;
@property(nonatomic, copy) NSString *paymentIconString;
@property(nonatomic) _Bool isPrefixSymbol;
- (id)initWithCurrencyCode:(id)arg1;
- (id)initWithTransaction:(id)arg1;
@property(nonatomic, readonly) long long paymentsType; // @synthesize paymentsType;
@property(nonatomic, readonly) NSString *decimalSeparator;
@property(nonatomic, readonly) NSString *symbol;
@property(nonatomic, readonly) NSString *code;

@end

