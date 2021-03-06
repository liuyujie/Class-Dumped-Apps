//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRLinkAccountAction, CDRUnlinkAccountAction, CDRUpdatePersonalizationSettingAction, NSString;

@interface CDRAccountSetting_AccountSettingDialog : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int accountSettingActionOneOfCase; // @dynamic accountSettingActionOneOfCase;
@property(copy, nonatomic) NSString *accountSettingButtonLabel; // @dynamic accountSettingButtonLabel;
@property(copy, nonatomic) NSString *cancelButtonLabel; // @dynamic cancelButtonLabel;
@property(copy, nonatomic) NSString *descriptionHtml; // @dynamic descriptionHtml;
@property(nonatomic) _Bool hasAccountSettingButtonLabel; // @dynamic hasAccountSettingButtonLabel;
@property(nonatomic) _Bool hasCancelButtonLabel; // @dynamic hasCancelButtonLabel;
@property(nonatomic) _Bool hasDescriptionHtml; // @dynamic hasDescriptionHtml;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) CDRLinkAccountAction *linkAccountAction; // @dynamic linkAccountAction;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) CDRUnlinkAccountAction *unlinkAccountAction; // @dynamic unlinkAccountAction;
@property(retain, nonatomic) CDRUpdatePersonalizationSettingAction *updatePersonalizationSettingAction; // @dynamic updatePersonalizationSettingAction;

@end

