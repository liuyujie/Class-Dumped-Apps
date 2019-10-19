//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUScannableAction-Protocol.h"

@class NSString, SOJUScannableDeepLinkPostInfo;

@protocol SOJUScannableActionDeepLink <NSObject, NSCoding, NSCopying, SOJUScannableAction>
@property(readonly, copy, nonatomic) SOJUScannableDeepLinkPostInfo *postInfo;
@property(readonly, copy, nonatomic) NSString *status;
@property(readonly, copy, nonatomic) NSString *secondaryColor;
@property(readonly, copy, nonatomic) NSString *primaryColor;
@property(readonly, copy, nonatomic) NSString *url;
@property(readonly, copy, nonatomic) NSString *iconUrl;
@property(readonly, copy, nonatomic) NSString *byline;
@property(readonly, copy, nonatomic) NSString *header;
@end
