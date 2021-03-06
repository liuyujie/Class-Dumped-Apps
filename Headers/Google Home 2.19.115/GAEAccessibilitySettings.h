//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface GAEAccessibilitySettings : NSObject
{
    NSDictionary *_accessibilitySettings;
}

+ (_Bool)hasValidValues:(id)arg1;
+ (_Bool)hasValidKeys:(id)arg1;
+ (_Bool)isValidKey:(id)arg1;
+ (id)validKeys;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool endOfRequestAudioFeedbackEnabled;
@property(readonly, nonatomic) _Bool startOfRequestAudioFeedbackEnabled;
- (id)JSONObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccessibilitySettingsDictionary:(id)arg1;
- (id)initWithJSONObject:(id)arg1;

@end

