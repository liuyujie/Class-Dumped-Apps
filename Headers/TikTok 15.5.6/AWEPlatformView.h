//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImageView;

@interface AWEPlatformView : UIButton
{
    CDUnknownBlockType _onViewClickedBlock;
    UIImageView *_platformImageView;
    UIImageView *_loadingImageView;
    CDUnknownBlockType _succeedCompletion;
    CDUnknownBlockType _errorCompletion;
    NSString *_appleMusicID;
}

@property(copy, nonatomic) NSString *appleMusicID; // @synthesize appleMusicID=_appleMusicID;
@property(copy, nonatomic) CDUnknownBlockType errorCompletion; // @synthesize errorCompletion=_errorCompletion;
@property(copy, nonatomic) CDUnknownBlockType succeedCompletion; // @synthesize succeedCompletion=_succeedCompletion;
@property(retain, nonatomic) UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
@property(retain, nonatomic) UIImageView *platformImageView; // @synthesize platformImageView=_platformImageView;
@property(copy, nonatomic) CDUnknownBlockType onViewClickedBlock; // @synthesize onViewClickedBlock=_onViewClickedBlock;
- (void).cxx_destruct;
- (void)onViewClicked;
- (void)configWithModel:(id)arg1;
- (id)initWithSucceedCompletion:(CDUnknownBlockType)arg1;

@end

