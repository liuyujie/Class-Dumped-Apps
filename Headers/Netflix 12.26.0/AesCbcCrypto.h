//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MslClient/StoreCrypto-Protocol.h>

@class AppleObfuscatedStoreCrypto, NSString;

@interface AesCbcCrypto : NSObject <StoreCrypto>
{
    AppleObfuscatedStoreCrypto *_crypto;
}

@property(readonly, nonatomic) AppleObfuscatedStoreCrypto *crypto; // @synthesize crypto=_crypto;
- (void).cxx_destruct;
- (id)plainDataFromCipherPayload:(id)arg1 iv:(id)arg2;
- (id)iv;
- (id)initWithObfuscatedStoreCrypto:(id)arg1;
- (id)checksum:(id)arg1;
- (id)cipherPayload:(id)arg1 iv:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

