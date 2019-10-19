//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;

@interface SCActionMenuButtonViewModel : NSObject
{
    NSString *_title;
    NSString *_accessibilityIdentifier;
    UIImage *_image;
    NSArray *_subtitleNames;
    NSString *_subtitleFormat;
    CDUnknownBlockType _tapHandler;
    CDUnknownBlockType _dismissHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(readonly, nonatomic) NSString *subtitleFormat; // @synthesize subtitleFormat=_subtitleFormat;
@property(readonly, nonatomic) NSArray *subtitleNames; // @synthesize subtitleNames=_subtitleNames;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTitle:(id)arg1 accessibilityIdentifier:(id)arg2 image:(id)arg3 subtitleNames:(id)arg4 subtitleFormat:(id)arg5 tapHandler:(CDUnknownBlockType)arg6 dismissHandler:(CDUnknownBlockType)arg7;
- (id)initWithTitle:(id)arg1 image:(id)arg2 subtitleNames:(id)arg3 subtitleFormat:(id)arg4 tapHandler:(CDUnknownBlockType)arg5 dismissHandler:(CDUnknownBlockType)arg6;
- (id)initWithTitle:(id)arg1 image:(id)arg2 tapHandler:(CDUnknownBlockType)arg3 dismissHandler:(CDUnknownBlockType)arg4;

@end
