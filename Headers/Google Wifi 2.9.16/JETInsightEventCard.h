//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETInsightCustomCard.h"

#import "NSCopying-Protocol.h"

@class JETInsight, NSDictionary, NSMutableArray, NSTimer;

@interface JETInsightEventCard : JETInsightCustomCard <NSCopying>
{
    JETInsight *_insight;
    NSDictionary *_inAppLinkHandlers;
    NSMutableArray *_moreActions;
    NSMutableArray *_actionButtons;
    NSTimer *_pollingTimer;
}

@property(retain, nonatomic) NSTimer *pollingTimer; // @synthesize pollingTimer=_pollingTimer;
@property(retain, nonatomic) NSMutableArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(retain, nonatomic) NSMutableArray *moreActions; // @synthesize moreActions=_moreActions;
@property(copy, nonatomic) NSDictionary *inAppLinkHandlers; // @synthesize inAppLinkHandlers=_inAppLinkHandlers;
@property(readonly, nonatomic) JETInsight *insight; // @synthesize insight=_insight;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)actionTappedOnButton:(id)arg1;
- (void)actionTakenOn:(id)arg1;
- (id)dynamicCardActionErrorMessage:(id)arg1;
- (void)schedulePeriodicPolling;
- (void)performPeriodicPolling;
- (void)pollForDynamicCard;
- (void)handleCustomerAction:(id)arg1;
- (id)generateInAppLinkHandlers;
- (_Bool)isSupportedInsightsAction:(id)arg1;
- (CDUnknownBlockType)moreActionButtonCallback:(id)arg1 isDismissable:(_Bool)arg2;
- (void)generateActionButtons;
- (_Bool)containsUnsupportedInsightAction;
- (id)accessibilityCustomActions;
- (id)cardActionButtons;
- (id)cardBody;
- (id)cardTitle;
- (id)headerImageURL;
- (CDUnknownBlockType)moreActionButtonCallback;
- (id)cardCategory;
- (id)constructViewSection;
- (void)dismissWithCallback:(CDUnknownBlockType)arg1;
- (_Bool)isDismissable;
- (id)init;
- (id)initWithUserState:(id)arg1 group:(id)arg2 imageCache:(id)arg3 delegate:(id)arg4;
- (id)initWithInsight:(id)arg1 imageCache:(id)arg2 delegate:(id)arg3;

@end
