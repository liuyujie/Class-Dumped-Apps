//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentView.h>

@class GDKStoragePlan, QTMButton, UILabel;
@protocol GDKShowSubscriptionsCVDelegate;

@interface GDKShowSubscriptionsCV : GOOBaseContentView
{
    GDKStoragePlan *_plan;
    UILabel *_titleLabel;
    UILabel *_subtitle;
    QTMButton *_buyButton;
    id <GDKShowSubscriptionsCVDelegate> _delegate;
}

+ (id)unwrapObject:(id)arg1;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) __weak id <GDKShowSubscriptionsCVDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QTMButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain, nonatomic) UILabel *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GDKStoragePlan *plan; // @synthesize plan=_plan;
- (void).cxx_destruct;
- (void)didTapBuyStorage;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;
- (void)updateConstraints;
- (void)makeConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

