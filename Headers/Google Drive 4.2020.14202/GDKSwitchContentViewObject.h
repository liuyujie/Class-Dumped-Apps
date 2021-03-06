//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOTextContentViewObject.h>

@class GDKSwitchContentView, MDCPalette;
@protocol GDKSwitchContentViewDelegate;

@interface GDKSwitchContentViewObject : GOOTextContentViewObject
{
    _Bool _on;
    _Bool _switchEnabled;
    long long _elementID;
    id <GDKSwitchContentViewDelegate> _delegate;
    CDUnknownBlockType _switchBlock;
    GDKSwitchContentView *_switchContentView;
    MDCPalette *_palette;
}

+ (id)switchObjectWithText:(id)arg1 on:(_Bool)arg2 elementID:(long long)arg3 switchBlock:(CDUnknownBlockType)arg4;
+ (id)switchObjectWithText:(id)arg1 on:(_Bool)arg2 elementID:(long long)arg3 delegate:(id)arg4;
@property(retain, nonatomic) MDCPalette *palette; // @synthesize palette=_palette;
@property(nonatomic) __weak GDKSwitchContentView *switchContentView; // @synthesize switchContentView=_switchContentView;
@property(nonatomic, getter=isSwitchEnabled) _Bool switchEnabled; // @synthesize switchEnabled=_switchEnabled;
@property(copy, nonatomic) CDUnknownBlockType switchBlock; // @synthesize switchBlock=_switchBlock;
@property(nonatomic) __weak id <GDKSwitchContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long elementID; // @synthesize elementID=_elementID;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1;
- (Class)contentViewClass;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;

@end

