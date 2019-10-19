//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUEGradientStyle, GLUELabelStyle, NSString, SPTLoginTextFieldStyle;

@interface SPTLoginRecoverAccountViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_messageLabelStyle;
    GLUELabelStyle *_inputFieldTitleLabelStyle;
    GLUELabelStyle *_errorLabelStyle;
    SPTLoginTextFieldStyle *_inputFieldStyle;
    GLUEButtonStyle *_sendButtonStyle;
    double _titleTopMargin;
    double _messageLabelTopMargin;
    double _inputFieldLabelTopMargin;
    double _inputFieldTopMargin;
    double _errorLabelTopMargin;
    double _errorLabelMinHeight;
    double _sendButtonTopMargin;
    double _horizontalEdgeMargin;
    double _inputFieldHeight;
    GLUEGradientStyle *_backgroundGradientStyle;
    double _stillNeedHelpLabelTopMargin;
    GLUELabelStyle *_stillNeedHelpLabelStyle;
}

@property(copy, nonatomic) GLUELabelStyle *stillNeedHelpLabelStyle; // @synthesize stillNeedHelpLabelStyle=_stillNeedHelpLabelStyle;
@property(nonatomic) double stillNeedHelpLabelTopMargin; // @synthesize stillNeedHelpLabelTopMargin=_stillNeedHelpLabelTopMargin;
@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
@property(nonatomic) double inputFieldHeight; // @synthesize inputFieldHeight=_inputFieldHeight;
@property(nonatomic) double horizontalEdgeMargin; // @synthesize horizontalEdgeMargin=_horizontalEdgeMargin;
@property(nonatomic) double sendButtonTopMargin; // @synthesize sendButtonTopMargin=_sendButtonTopMargin;
@property(nonatomic) double errorLabelMinHeight; // @synthesize errorLabelMinHeight=_errorLabelMinHeight;
@property(nonatomic) double errorLabelTopMargin; // @synthesize errorLabelTopMargin=_errorLabelTopMargin;
@property(nonatomic) double inputFieldTopMargin; // @synthesize inputFieldTopMargin=_inputFieldTopMargin;
@property(nonatomic) double inputFieldLabelTopMargin; // @synthesize inputFieldLabelTopMargin=_inputFieldLabelTopMargin;
@property(nonatomic) double messageLabelTopMargin; // @synthesize messageLabelTopMargin=_messageLabelTopMargin;
@property(nonatomic) double titleTopMargin; // @synthesize titleTopMargin=_titleTopMargin;
@property(copy, nonatomic) GLUEButtonStyle *sendButtonStyle; // @synthesize sendButtonStyle=_sendButtonStyle;
@property(copy, nonatomic) SPTLoginTextFieldStyle *inputFieldStyle; // @synthesize inputFieldStyle=_inputFieldStyle;
@property(copy, nonatomic) GLUELabelStyle *errorLabelStyle; // @synthesize errorLabelStyle=_errorLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *inputFieldTitleLabelStyle; // @synthesize inputFieldTitleLabelStyle=_inputFieldTitleLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *messageLabelStyle; // @synthesize messageLabelStyle=_messageLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
