//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEProfileEditSubmitManager : NSObject
{
}

+ (void)uploadImage:(id)arg1 type:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (_Bool)checkEnableEditUniqueID:(id)arg1;
+ (long long)checkIDIfValid:(id)arg1;
+ (void)submitEditInformationWithParams:(id)arg1 ifChangeUniqueID:(_Bool)arg2 ifChangeImage:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)submitEditInformationWithParams:(id)arg1 ifChangeUniqueID:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)submitEditImageWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)submitEditInformationWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
