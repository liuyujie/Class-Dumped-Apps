//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WATwoFactorWipeToken : NSObject
{
    NSDate *_validityDate;
    _Bool _isFullWipe;
    NSString *_token;
}

+ (id)tokenFromResponseDictionary:(id)arg1;
@property(readonly, nonatomic) _Bool isFullWipe; // @synthesize isFullWipe=_isFullWipe;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
@property(readonly, nonatomic) double timeUntilValid;
@property(readonly, nonatomic) _Bool isValid;
- (id)initWithToken:(id)arg1 validityDate:(id)arg2 isFullWipe:(_Bool)arg3;

@end

