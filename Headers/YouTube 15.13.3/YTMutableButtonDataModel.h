//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTButtonDataModel.h>

@class NSData, NSString, YTCommandModel, YTLoggingDirectivesModel;

@interface YTMutableButtonDataModel : YTButtonDataModel
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) YTLoggingDirectivesModel *loggingDirectives; // @dynamic loggingDirectives;
@property(retain, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(nonatomic) _Bool isInAppPurchase; // @dynamic isInAppPurchase;
@property(retain, nonatomic) NSString *buttonAccessibilityLabel; // @dynamic buttonAccessibilityLabel;
@property(retain, nonatomic) YTCommandModel *buttonCommand; // @dynamic buttonCommand;
@property(retain, nonatomic) NSString *buttonText; // @dynamic buttonText;
- (id)initWithEntityStore:(id)arg1;

@end

