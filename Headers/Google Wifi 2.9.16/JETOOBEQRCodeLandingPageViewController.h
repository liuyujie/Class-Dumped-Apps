//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETOOBEViewController.h"

@class JETBottomBarView;

@interface JETOOBEQRCodeLandingPageViewController : JETOOBEViewController
{
    JETBottomBarView *_bottomBarView;
}

+ (id)displayCameraPermissionAlert;
@property(retain, nonatomic) JETBottomBarView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
- (void).cxx_destruct;
- (void)closeButtonTapped;
- (void)scanButtonTapped;
- (void)manualButtonTapped;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
