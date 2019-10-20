//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import "GOOControlledTextField-Protocol.h"
#import "GOOTextFieldTraits-Protocol.h"
#import "GOOValidatedTextField-Protocol.h"

@class GOOTextFieldController, NSDictionary, NSString, QTMColorGroup, UIColor, UIFont, UITextPosition, UITextRange, UIView;
@protocol GOOTextFieldCharacterCounter, GOOTextFieldValidator, UITextInputDelegate, UITextInputTokenizer;

@interface GOOMultilineTextField : UITextView <GOOControlledTextField, GOOTextFieldTraits, GOOValidatedTextField>
{
    _Bool _allowCustomTextContainerInset;
    _Bool _editing;
    GOOTextFieldController *_controller;
}

@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) GOOTextFieldController *controller; // @synthesize controller=_controller;
@property(nonatomic) _Bool allowCustomTextContainerInset; // @synthesize allowCustomTextContainerInset=_allowCustomTextContainerInset;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)setEditable:(_Bool)arg1;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSString *text;
- (id)accessibilityValue;
- (struct CGRect)textRectThatFitsForBounds:(struct CGRect)arg1;
- (void)setTextContainerInset:(struct UIEdgeInsets)arg1;
@property(nonatomic) __weak id <GOOTextFieldValidator> validator;
@property(nonatomic) long long underlineViewMode;
@property(nonatomic) __weak id <GOOTextFieldCharacterCounter> characterCounter;
@property(nonatomic) unsigned long long characterLimit;
@property(retain, nonatomic) UIColor *borderColor;
@property(retain, nonatomic) UIColor *errorColor;
@property(retain, nonatomic) UIColor *placeholderColor;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) QTMColorGroup *colorGroup;
@property(nonatomic) long long presentationStyle;
@property(retain, nonatomic) UIColor *helperTextColor;
@property(copy, nonatomic) NSString *helperText;
@property(copy, nonatomic) NSString *placeholder;
- (void)validate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) _Bool hasText;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(copy) UITextRange *selectedTextRange;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;

@end

