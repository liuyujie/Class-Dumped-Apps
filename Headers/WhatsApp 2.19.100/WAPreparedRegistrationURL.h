//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface WAPreparedRegistrationURL : NSObject
{
    NSString *_baseURLString;
    NSArray *_params;
    NSURL *_proxyURL;
}

- (void).cxx_destruct;
- (id)urlWithRecoveryToken:(id)arg1;
- (id)initWithBaseURLString:(id)arg1 params:(id)arg2 encryptWithProxyURL:(id)arg3;

@end
