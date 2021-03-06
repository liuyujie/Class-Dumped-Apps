//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFSimplePageViewController.h>

#import <PSPDFKitUI/PSPDFColorPicker-Protocol.h>
#import <PSPDFKitUI/PSPDFColorPickerDelegate-Protocol.h>

@class NSString, UIColor;
@protocol PSPDFColorPickerDelegate;

@interface PSPDFColorPickerPageViewController : PSPDFSimplePageViewController <PSPDFColorPickerDelegate, PSPDFColorPicker>
{
    struct {
        unsigned int ignoreDelegateCall:1;
    } _flags;
    id <PSPDFColorPickerDelegate> _colorPickerDelegate;
    UIColor *_selectedColor;
}

@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic) __weak id <PSPDFColorPickerDelegate> colorPickerDelegate; // @synthesize colorPickerDelegate=_colorPickerDelegate;
- (void).cxx_destruct;
- (void)colorPicker:(id)arg1 didSelectColor:(id)arg2 finishedSelection:(_Bool)arg3;
- (id)initWithColorPickerViewControllers:(id)arg1;
- (id)initWithViewControllers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

