//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRMerchant, NSString;

@interface CDRMerchantModuleHeader : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *disclaimerHtml; // @dynamic disclaimerHtml;
@property(nonatomic) _Bool hasDisclaimerHtml; // @dynamic hasDisclaimerHtml;
@property(nonatomic) _Bool hasIsMerchantHomeHeader; // @dynamic hasIsMerchantHomeHeader;
@property(nonatomic) _Bool hasMerchant; // @dynamic hasMerchant;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasSubtitle1Html; // @dynamic hasSubtitle1Html;
@property(nonatomic) _Bool hasSubtitle2Html; // @dynamic hasSubtitle2Html;
@property(nonatomic) _Bool isMerchantHomeHeader; // @dynamic isMerchantHomeHeader;
@property(retain, nonatomic) CDRMerchant *merchant; // @dynamic merchant;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(copy, nonatomic) NSString *subtitle1Html; // @dynamic subtitle1Html;
@property(copy, nonatomic) NSString *subtitle2Html; // @dynamic subtitle2Html;

@end

