//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <Instabug/IBGMessageContentHandler-Protocol.h>

@interface IBGTextMessageView : UITextView <IBGMessageContentHandler>
{
}

- (void)applyLayoutAttributes:(id)arg1;
- (void)applyOutboundTheme;
- (void)applyInboundThemeIsSent:(_Bool)arg1;
- (void)setContent:(id)arg1;
- (void)configureTextView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

