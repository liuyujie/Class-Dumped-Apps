//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DBStormcrowLocalVariant : NSObject
{
    NSString *_name;
    double _probability;
}

+ (id)stormcrowLocalVariantWithName:(id)arg1 probability:(double)arg2;
@property(readonly, nonatomic) double probability; // @synthesize probability=_probability;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 probability:(double)arg2;

@end

