//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSDKCoreKit/FBSDKAppLinkResolving-Protocol.h>

@class NSMutableDictionary, NSString;

@interface FBSDKAppLinkResolver : NSObject <FBSDKAppLinkResolving>
{
    NSMutableDictionary *_cachedFBSDKAppLinks;
    long long _userInterfaceIdiom;
}

+ (id)resolver;
+ (void)initialize;
@property(nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(retain, nonatomic) NSMutableDictionary *cachedFBSDKAppLinks; // @synthesize cachedFBSDKAppLinks=_cachedFBSDKAppLinks;
- (void).cxx_destruct;
- (void)appLinksFromURLs:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)appLinkFromURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithUserInterfaceIdiom:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

