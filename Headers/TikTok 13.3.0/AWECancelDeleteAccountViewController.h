//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UIImageView, UILabel;

@interface AWECancelDeleteAccountViewController : UIViewController
{
    UIImageView *_imageView;
    UILabel *_contentLabel;
    UIButton *_logoutButton;
    UIButton *_cancelButton;
    CDUnknownBlockType _logoutBlock;
    CDUnknownBlockType _cancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType logoutBlock; // @synthesize logoutBlock=_logoutBlock;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *logoutButton; // @synthesize logoutButton=_logoutButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)_cancelAction;
- (void)_logoutAction;
- (id)_createButton;
- (void)viewDidLoad;
- (id)initWithLogoutAction:(CDUnknownBlockType)arg1 cancelAction:(CDUnknownBlockType)arg2;

@end
