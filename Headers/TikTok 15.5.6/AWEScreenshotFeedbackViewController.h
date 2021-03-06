//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIButton, UIImage;

@interface AWEScreenshotFeedbackViewController : UIViewController
{
    _Bool _useAdvanced;
    NSString *_previousPageClass;
    UIImage *_image;
    NSString *_imageURLString;
    CDUnknownBlockType _updateImageURLStringBlock;
    UIButton *_reportButton;
}

@property(retain, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
@property(nonatomic) _Bool useAdvanced; // @synthesize useAdvanced=_useAdvanced;
@property(copy, nonatomic) CDUnknownBlockType updateImageURLStringBlock; // @synthesize updateImageURLStringBlock=_updateImageURLStringBlock;
@property(retain, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *previousPageClass; // @synthesize previousPageClass=_previousPageClass;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)_cancel;
- (void)_report:(id)arg1;
- (void)openAdvancedFeedbackWithButton:(id)arg1;
- (void)jiraButton:(id)arg1;
- (void)_uploadImage;
- (void)updateReportButton;
- (void)didTapSwith:(id)arg1;
- (void)_loadSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithImage:(id)arg1;

@end

