//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGUserSessionObject-Protocol.h>

@class IGUserDefaults, NSString;

@interface IGStoryLinksStore : NSObject <IGUserSessionObject>
{
    IGUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasMoreShoppingLinkOptions;
@property(nonatomic) _Bool isProductDetailPageLinkAllowed;
@property(nonatomic) _Bool isProfileShopLinkAllowed;
@property(nonatomic) _Bool isAREffectLinkAllowed;
@property(nonatomic) _Bool isIGTVLinkAllowed;
- (id)initWithUserDefaults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

