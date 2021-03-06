//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel, XBXGamertag;
@protocol XBXHeaderDelegate;

@interface XBXHeader_iPhone : UIView
{
    int _style;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UILabel *_smallTitleLabel;
    UIImageView *_logoImage;
    UIView *_containerView;
    id <XBXHeaderDelegate> _delegate;
    NSString *_styleName;
    XBXGamertag *_gamertag;
}

@property(retain, nonatomic) XBXGamertag *gamertag; // @synthesize gamertag=_gamertag;
@property(retain, nonatomic) NSString *styleName; // @synthesize styleName=_styleName;
@property(nonatomic) __weak id <XBXHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImageView *logoImage; // @synthesize logoImage=_logoImage;
@property(retain, nonatomic) UILabel *smallTitleLabel; // @synthesize smallTitleLabel=_smallTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)loadTopLevelTitleOnly;
- (void)loadTopLevel;
- (void)loadTitleOnly;
- (void)loadSmallTitleOnly;
- (void)loadBackButtonOnly;
- (void)loadBackButtonAndTitle;
- (void)loadBackButtonAndSmallTitle;
- (void)loadBackButtonAllTitles;
@property(copy, nonatomic) NSString *smallTitle;
@property(copy, nonatomic) NSString *title;
- (void)backButtonClicked:(id)arg1;
- (void)initWithStyle:(int)arg1;
- (void)initWithStyleName:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

@end

