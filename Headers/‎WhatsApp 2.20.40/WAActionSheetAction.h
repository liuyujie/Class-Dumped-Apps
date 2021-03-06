//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

@interface WAActionSheetAction : NSObject
{
    _Bool _smallFont;
    _Bool _centered;
    UIImage *_image;
    UIImage *_detailImage;
    UIColor *_color;
    NSString *_title;
    unsigned long long _style;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _tapHandler;
}

+ (id)actionWithTitle:(id)arg1 style:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 tapHandler:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) _Bool centered; // @synthesize centered=_centered;
@property(nonatomic) _Bool smallFont; // @synthesize smallFont=_smallFont;
@property(retain, nonatomic) UIImage *detailImage; // @synthesize detailImage=_detailImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end

