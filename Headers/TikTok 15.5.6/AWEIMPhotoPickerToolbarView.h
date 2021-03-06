//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton;

@interface AWEIMPhotoPickerToolbarView : UIView
{
    _Bool _automaticDisable;
    _Bool _original;
    CDUnknownBlockType _originalValueChangeBlock;
    unsigned long long _sendCount;
    UIButton *_albumButton;
    UIButton *_originalButton;
    UIButton *_sendButton;
    NSString *_sendButtonTitle;
}

@property(nonatomic) _Bool original; // @synthesize original=_original;
@property(copy, nonatomic) NSString *sendButtonTitle; // @synthesize sendButtonTitle=_sendButtonTitle;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIButton *originalButton; // @synthesize originalButton=_originalButton;
@property(retain, nonatomic) UIButton *albumButton; // @synthesize albumButton=_albumButton;
@property(nonatomic) unsigned long long sendCount; // @synthesize sendCount=_sendCount;
@property(nonatomic) _Bool automaticDisable; // @synthesize automaticDisable=_automaticDisable;
@property(copy, nonatomic) CDUnknownBlockType originalValueChangeBlock; // @synthesize originalValueChangeBlock=_originalValueChangeBlock;
- (void).cxx_destruct;
- (void)originalButtonPressed:(id)arg1;
- (void)setButtonTitle:(id)arg1 hideOriginalImage:(_Bool)arg2;
- (void)setOriginal:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 sendButtonTop:(double)arg2 components:(id)arg3;

@end

