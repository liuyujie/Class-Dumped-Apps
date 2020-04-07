//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"

@class GLUEButton, SPTPremiumDestinationUIFlexboxButtonStyle, SPTPremiumDestinationUIGLUETheme;
@protocol HUBComponentEventHandler;

@interface SPTPremiumDestinationUIFlexboxButtonComponentView : HUBComponentView <HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    SPTPremiumDestinationUIGLUETheme *_theme;
    SPTPremiumDestinationUIFlexboxButtonStyle *_style;
    GLUEButton *_button;
}

+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
@property(retain, nonatomic) GLUEButton *button; // @synthesize button=_button;
@property(retain, nonatomic) SPTPremiumDestinationUIFlexboxButtonStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) SPTPremiumDestinationUIGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end
