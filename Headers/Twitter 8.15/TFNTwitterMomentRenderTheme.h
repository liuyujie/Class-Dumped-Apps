//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface TFNTwitterMomentRenderTheme : NSObject
{
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
}

+ (id)momentRenderThemeWithJSONData:(id)arg1;
@property(readonly, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithBackgroundColor:(id)arg1 foregroundColor:(id)arg2;
- (id)init;

@end

