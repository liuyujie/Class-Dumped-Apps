//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFXParameter.h>

@class UIColor;

@interface TFXParameterUIColor : TFXParameter
{
    UIColor *_defaultValue;
    UIColor *_value;
}

@property(copy, nonatomic) UIColor *value; // @synthesize value=_value;
@property(copy, nonatomic) UIColor *defaultValue; // @synthesize defaultValue=_defaultValue;
- (void).cxx_destruct;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)setterBlock;
- (id)getterBlock;
- (_Bool)isUIColor;

@end
