//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTBAds : NSObject
{
    _Bool useSecureConnection;
    _Bool testMode;
    _Bool useGeoLocation;
}

+ (id)version;
+ (id)sharedInstance;
@property(nonatomic) _Bool useGeoLocation; // @synthesize useGeoLocation;
@property(nonatomic) _Bool testMode; // @synthesize testMode;
@property(nonatomic) _Bool useSecureConnection; // @synthesize useSecureConnection;
- (void)setLogLevel:(int)arg1;
- (_Bool)handleURL:(id)arg1;
- (id)appKey;
- (void)setAppKey:(id)arg1;

@end

