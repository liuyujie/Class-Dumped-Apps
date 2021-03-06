//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/UITextInputTraits-Protocol.h>

@class NSString, UITextPosition, UITextRange, UITextView;

@protocol IGAutocompleteControllerTextInput <UITextInputTraits>
- (long long)offsetFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (void)setSelectedTextRange:(UITextRange *)arg1;
- (UITextPosition *)closestPositionToPoint:(struct CGPoint)arg1;
- (UITextRange *)textRangeFromPosition:(UITextPosition *)arg1 toPosition:(UITextPosition *)arg2;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 offset:(long long)arg2;
- (UITextPosition *)beginningOfDocument;
- (UITextView *)inputTextView;
- (struct _NSRange)selectedRange;
- (void)setText:(NSString *)arg1;
- (NSString *)text;
@end

