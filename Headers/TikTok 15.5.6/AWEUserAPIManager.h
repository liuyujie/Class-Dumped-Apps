//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEUserAPIManager : NSObject
{
}

+ (id)multipleUnbind:(id)arg1;
+ (id)checkOut;
+ (id)checkIn:(_Bool)arg1;
+ (id)checkInWhenLaunch;
+ (id)checkIn;
+ (id)loginWithTicket:(id)arg1;
+ (id)logoutFrom:(id)arg1;
+ (id)fetchUser:(_Bool)arg1 isColdLaunch:(_Bool)arg2;
+ (id)fetchPassportUser;
+ (_Bool)fetchPassportEnabled;

@end

