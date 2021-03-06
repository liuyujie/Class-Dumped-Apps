//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class CADisplayLink, NSIndexPath, NSString, UIColor;
@protocol TOKTextStyleBrowserViewControllerDelegate;

@interface TOKTextStyleBrowserViewController : UICollectionViewController
{
    NSString *_string;
    CADisplayLink *_displayLink;
    double _currentYOffset;
    double _targetYOffset;
    NSIndexPath *_highlightIndexPath;
    NSIndexPath *_targetIndexPath;
    double _dragPercent;
    _Bool _hasHitNearZero;
    _Bool _userDidScroll;
    id <TOKTextStyleBrowserViewControllerDelegate> _delegate;
    UIColor *_fontLabelColor;
    UIColor *_exampleLabelColor;
    struct CGPoint _fingerPosition;
}

+ (id)textStyles;
@property(retain, nonatomic) UIColor *exampleLabelColor; // @synthesize exampleLabelColor=_exampleLabelColor;
@property(retain, nonatomic) UIColor *fontLabelColor; // @synthesize fontLabelColor=_fontLabelColor;
@property(readonly, nonatomic) _Bool userDidScroll; // @synthesize userDidScroll=_userDidScroll;
@property(nonatomic) struct CGPoint fingerPosition; // @synthesize fingerPosition=_fingerPosition;
@property(nonatomic) __weak id <TOKTextStyleBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)displayLinkTick:(id)arg1;
- (void)animateOutWithDelay:(double)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)animateInWithTargetStyle:(long long)arg1;
- (void)viewDidLoad;
- (void)configureLayout:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)init;

@end

