//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

@class GOOTextField, JETPortOpeningTextFieldsContentViewObject, NSLayoutConstraint, UIImageView;

@interface JETPortOpeningTextFieldsContentView : GOOBaseContentView
{
    JETPortOpeningTextFieldsContentViewObject *_viewObject;
    UIImageView *_arrowImageView;
    GOOTextField *_wanStartingPortTextField;
    GOOTextField *_startingPortTextField;
    GOOTextField *_endingPortTextField;
    NSLayoutConstraint *_wanStartingPortTextFieldHeightConstraint;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
@property(retain, nonatomic) NSLayoutConstraint *wanStartingPortTextFieldHeightConstraint; // @synthesize wanStartingPortTextFieldHeightConstraint=_wanStartingPortTextFieldHeightConstraint;
@property(retain, nonatomic) GOOTextField *endingPortTextField; // @synthesize endingPortTextField=_endingPortTextField;
@property(retain, nonatomic) GOOTextField *startingPortTextField; // @synthesize startingPortTextField=_startingPortTextField;
@property(retain, nonatomic) GOOTextField *wanStartingPortTextField; // @synthesize wanStartingPortTextField=_wanStartingPortTextField;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) JETPortOpeningTextFieldsContentViewObject *viewObject; // @synthesize viewObject=_viewObject;
- (void).cxx_destruct;
- (void)endingPortTextDidChange:(id)arg1;
- (void)startingPortTextDidChange:(id)arg1;
- (void)wanStartingPortTextDidChange:(id)arg1;
- (void)updateViewWithObject:(id)arg1;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

