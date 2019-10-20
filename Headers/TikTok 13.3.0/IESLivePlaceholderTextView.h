//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor;

@interface IESLivePlaceholderTextView : UITextView
{
    NSString *_placeholder;
    UIColor *_placeholderTextColor;
}

@property(retain, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)textDidChanged:(id)arg1;
- (void)setPlaceHolderTextColor:(id)arg1;
- (void)setPlaceHolder:(id)arg1;
- (void)setText:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
