//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SBMainScreenActiveInterfaceOrientationWindow, UITextView;

@interface SBLogWindowController : UIViewController
{
    UITextView *_logTextView;
    SBMainScreenActiveInterfaceOrientationWindow *_logWindow;
}

+ (id)sharedInstanceIfAvailable;
+ (id)sharedInstance;
@property(retain, nonatomic) SBMainScreenActiveInterfaceOrientationWindow *logWindow; // @synthesize logWindow=_logWindow;
@property(retain, nonatomic) UITextView *logTextView; // @synthesize logTextView=_logTextView;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
