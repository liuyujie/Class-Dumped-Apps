//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSLayoutConstraint, UIPageControl, UIScrollView, UIView;

@interface _TtC9SpeedTest26VPNLearnMoreViewController : UIViewController
{
    // Error parsing type: , name: bottomMargin
    // Error parsing type: , name: topMargin
    // Error parsing type: , name: leftMargin
    // Error parsing type: , name: rightMargin
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: pageControl
    // Error parsing type: , name: slideTitles
    // Error parsing type: , name: slideBodies
    // Error parsing type: , name: backgroundView
    // Error parsing type: , name: scrollViewHeight
    // Error parsing type: , name: slideWidth
    // Error parsing type: , name: secondImageContainer
    // Error parsing type: , name: firstImageContainer
    // Error parsing type: , name: firstSlideAnimation
    // Error parsing type: , name: secondSlideAnimation
    // Error parsing type: , name: VpnModalDismissalDelegate
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)appWillMoveToForeground;
- (void)appMovedToBackground;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)closeTapped:(id)arg1;
@property(nonatomic) __weak UIView *firstImageContainer; // @synthesize firstImageContainer;
@property(nonatomic) __weak UIView *secondImageContainer; // @synthesize secondImageContainer;
@property(nonatomic, retain) NSLayoutConstraint *slideWidth; // @synthesize slideWidth;
@property(nonatomic) __weak NSLayoutConstraint *scrollViewHeight; // @synthesize scrollViewHeight;
@property(nonatomic, retain) UIView *backgroundView; // @synthesize backgroundView;
@property(nonatomic, copy) NSArray *slideBodies;
@property(nonatomic, copy) NSArray *slideTitles;
@property(nonatomic) __weak UIPageControl *pageControl; // @synthesize pageControl;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) __weak UIView *rightMargin; // @synthesize rightMargin;
@property(nonatomic) __weak UIView *leftMargin; // @synthesize leftMargin;
@property(nonatomic) __weak UIView *topMargin; // @synthesize topMargin;
@property(nonatomic) __weak UIView *bottomMargin; // @synthesize bottomMargin;

@end

