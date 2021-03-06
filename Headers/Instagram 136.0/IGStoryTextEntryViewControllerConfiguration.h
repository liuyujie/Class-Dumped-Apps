//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, UIColor;

@interface IGStoryTextEntryViewControllerConfiguration : NSObject
{
    _Bool _dimmedBackgroundPreferred;
    _Bool _eyedropperColorPickerEnabled;
    _Bool _colorPickerEnabled;
    _Bool _richTextFormatPickerEnabled;
    _Bool _alwaysShowDoneButton;
    _Bool _scaleTextViewsToFitOnEndEditing;
    _Bool _neverDiscardTextViewOnDismiss;
    NSArray *_textFormats;
    NSSet *_alreadyMentionedUsers;
    UIColor *_initialTextColor;
}

+ (id)postcaptureTextConfiguration:(id)arg1 mentionedUsers:(id)arg2 initialTextColor:(id)arg3 userSession:(id)arg4;
@property(readonly, copy, nonatomic) UIColor *initialTextColor; // @synthesize initialTextColor=_initialTextColor;
@property(readonly, copy, nonatomic) NSSet *alreadyMentionedUsers; // @synthesize alreadyMentionedUsers=_alreadyMentionedUsers;
@property(readonly, copy, nonatomic) NSArray *textFormats; // @synthesize textFormats=_textFormats;
@property(readonly, nonatomic) _Bool neverDiscardTextViewOnDismiss; // @synthesize neverDiscardTextViewOnDismiss=_neverDiscardTextViewOnDismiss;
@property(readonly, nonatomic) _Bool scaleTextViewsToFitOnEndEditing; // @synthesize scaleTextViewsToFitOnEndEditing=_scaleTextViewsToFitOnEndEditing;
@property(readonly, nonatomic) _Bool alwaysShowDoneButton; // @synthesize alwaysShowDoneButton=_alwaysShowDoneButton;
@property(readonly, nonatomic) _Bool richTextFormatPickerEnabled; // @synthesize richTextFormatPickerEnabled=_richTextFormatPickerEnabled;
@property(readonly, nonatomic) _Bool colorPickerEnabled; // @synthesize colorPickerEnabled=_colorPickerEnabled;
@property(readonly, nonatomic) _Bool eyedropperColorPickerEnabled; // @synthesize eyedropperColorPickerEnabled=_eyedropperColorPickerEnabled;
@property(readonly, nonatomic) _Bool dimmedBackgroundPreferred; // @synthesize dimmedBackgroundPreferred=_dimmedBackgroundPreferred;
- (void).cxx_destruct;
- (id)initWithDimmedBackgroundPreferred:(_Bool)arg1 eyedropperColorPickerEnabled:(_Bool)arg2 colorPickerEnabled:(_Bool)arg3 richTextFormatPickerEnabled:(_Bool)arg4 alwaysShowDoneButton:(_Bool)arg5 scaleTextViewsToFitOnEndEditing:(_Bool)arg6 neverDiscardTextViewOnDismiss:(_Bool)arg7 textFormats:(id)arg8 alreadyMentionedUsers:(id)arg9 initialTextColor:(id)arg10;

@end

