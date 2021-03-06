//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIColor;

@interface NFIIPPButtonModel : NSObject
{
    _Bool _defaultFocus;
    NSString *_ID;
    NSString *_label;
    double _baselineY;
    UIColor *_labelColor;
    NSString *_trackingView;
    NSDictionary *_trackingInfo;
    struct CGVector _screenPosition;
    CDStruct_a83b476d _action;
    CDStruct_84bf8c3a _labelData;
}

@property(readonly, nonatomic) struct CGVector screenPosition; // @synthesize screenPosition=_screenPosition;
@property(readonly, nonatomic) NSDictionary *trackingInfo; // @synthesize trackingInfo=_trackingInfo;
@property(readonly, copy, nonatomic) NSString *trackingView; // @synthesize trackingView=_trackingView;
@property(readonly, nonatomic) _Bool defaultFocus; // @synthesize defaultFocus=_defaultFocus;
@property(readonly, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(readonly, nonatomic) double baselineY; // @synthesize baselineY=_baselineY;
@property(readonly, nonatomic) CDStruct_84bf8c3a labelData; // @synthesize labelData=_labelData;
@property(readonly, nonatomic) CDStruct_a83b476d action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (CDStruct_84bf8c3a)parseLabelData:(id)arg1;
- (CDStruct_a83b476d)parseActionData:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

