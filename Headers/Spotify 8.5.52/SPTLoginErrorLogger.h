//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLoginLogger;

@interface SPTLoginErrorLogger : NSObject
{
    id <SPTLoginLogger> _logger;
}

@property(retain, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (id)adjustErrorIdentifierForErrorCode:(unsigned long long)arg1;
- (void)logFacebookErrorWithCode:(unsigned long long)arg1 screenIdentifier:(id)arg2;
- (void)logErrorWithCode:(unsigned long long)arg1 fieldIdentifier:(id)arg2 screenIdentifier:(id)arg3;
- (id)initWithLogger:(id)arg1;

@end
