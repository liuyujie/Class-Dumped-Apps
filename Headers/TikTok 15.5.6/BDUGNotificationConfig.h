//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface BDUGNotificationConfig : NSObject
{
    NSSet *_categories;
    unsigned long long _options;
}

+ (id)configureNotificationWithCategories:(id)arg1 options:(unsigned long long)arg2;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSSet *categories; // @synthesize categories=_categories;
- (void).cxx_destruct;

@end

