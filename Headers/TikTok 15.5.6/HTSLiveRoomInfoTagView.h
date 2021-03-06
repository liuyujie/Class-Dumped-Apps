//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;
@protocol IESLiveEnvironment, IESLiveLocationService, IESLiveTracker, IESLiveUserService;

@interface HTSLiveRoomInfoTagView : UIView
{
    _Bool _showClearImage;
    _Bool _clearImageViewClicked;
    UIImage *_leftImage;
    NSString *_centerContent;
    CDUnknownBlockType _clearImageViewClickedBlock;
    CDUnknownBlockType _tagAreaClickedBlock;
    id <IESLiveLocationService> _locationService;
    id <IESLiveTracker> _tracker;
    id <IESLiveUserService> _userService;
    UIImageView *_leftImageView;
    UILabel *_centerLabel;
    UIImageView *_clearImageView;
    id <IESLiveEnvironment> _appTarget;
}

@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(nonatomic) _Bool clearImageViewClicked; // @synthesize clearImageViewClicked=_clearImageViewClicked;
@property(retain, nonatomic) UIImageView *clearImageView; // @synthesize clearImageView=_clearImageView;
@property(retain, nonatomic) UILabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveLocationService> locationService; // @synthesize locationService=_locationService;
@property(copy, nonatomic) CDUnknownBlockType tagAreaClickedBlock; // @synthesize tagAreaClickedBlock=_tagAreaClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType clearImageViewClickedBlock; // @synthesize clearImageViewClickedBlock=_clearImageViewClickedBlock;
@property(nonatomic) _Bool showClearImage; // @synthesize showClearImage=_showClearImage;
@property(copy, nonatomic) NSString *centerContent; // @synthesize centerContent=_centerContent;
@property(retain, nonatomic) UIImage *leftImage; // @synthesize leftImage=_leftImage;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setupUI;
- (id)init;
- (void)goToLocateSettings;
- (void)authorizeLocationPermission:(_Bool)arg1;

@end

