//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ASMOptions;

@interface ASMMAConfigFlagsProvider : NSObject
{
    id <ASMOptions> _options;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <ASMOptions> options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)updateSSOService:(id)arg1 options:(id)arg2;
- (id)cachedFlagsForUserID:(id)arg1;
- (void)freshFlagsForUserWithAuthorization:(id)arg1 service:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)cachedFlagsForAuthorization:(id)arg1 andUpdateWithService:(id)arg2;

@end

