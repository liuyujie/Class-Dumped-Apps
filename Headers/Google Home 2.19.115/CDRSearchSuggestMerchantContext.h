//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRIcon, NSString;

@interface CDRSearchSuggestMerchantContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasMerchantId; // @dynamic hasMerchantId;
@property(nonatomic) _Bool hasTitleHtml; // @dynamic hasTitleHtml;
@property(retain, nonatomic) CDRIcon *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *merchantId; // @dynamic merchantId;
@property(copy, nonatomic) NSString *titleHtml; // @dynamic titleHtml;

@end

