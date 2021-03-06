//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBAutoupdaterVerifier-Protocol.h>

@class NSArray, NSString;

@interface FBAutoupdaterCompositeVerifier : NSObject <FBAutoupdaterVerifier>
{
    NSArray *_verifiers;
}

@property(copy, nonatomic) NSArray *verifiers; // @synthesize verifiers=_verifiers;
- (void).cxx_destruct;
- (_Bool)verifyUpdate:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (id)initWithVerifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

