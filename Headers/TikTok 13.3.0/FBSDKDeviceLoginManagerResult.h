//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDKAccessToken;

@interface FBSDKDeviceLoginManagerResult : NSObject
{
    _Bool _cancelled;
    FBSDKAccessToken *_accessToken;
}

@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) FBSDKAccessToken *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (id)initWithToken:(id)arg1 isCancelled:(_Bool)arg2;

@end
