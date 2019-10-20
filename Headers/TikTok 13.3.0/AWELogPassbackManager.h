//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface AWELogPassbackManager : NSObject
{
    NSDictionary *_hotLogPassback;
    NSDictionary *_followLogPassback;
    NSDictionary *_freshLogPassback;
    NSMutableDictionary *_normalLogPassback;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *normalLogPassback; // @synthesize normalLogPassback=_normalLogPassback;
@property(retain, nonatomic) NSDictionary *freshLogPassback; // @synthesize freshLogPassback=_freshLogPassback;
@property(retain, nonatomic) NSDictionary *followLogPassback; // @synthesize followLogPassback=_followLogPassback;
@property(retain, nonatomic) NSDictionary *hotLogPassback; // @synthesize hotLogPassback=_hotLogPassback;
- (void).cxx_destruct;
- (id)feedLogPassbackWithReferString:(id)arg1;
- (void)setLogPassback:(id)arg1 referString:(id)arg2;
- (id)init;

@end
