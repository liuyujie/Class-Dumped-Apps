//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelegramUI/EncryptionProvider-Protocol.h>

@class NSString;

@interface OpenSSLEncryptionProvider : NSObject <EncryptionProvider>
{
}

- (id)macosRSAEncrypt:(id)arg1 data:(id)arg2;
- (id)parseRSAPublicKey:(id)arg1;
- (id)rsaEncryptPKCS1OAEPWithPublicKey:(id)arg1 data:(id)arg2;
- (id)rsaEncryptWithPublicKey:(id)arg1 data:(id)arg2;
- (id)createBignumContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

