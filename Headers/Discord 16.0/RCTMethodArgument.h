//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RCTMethodArgument : NSObject
{
    _Bool _unused;
    NSString *_type;
    unsigned long long _nullability;
}

@property(readonly, nonatomic) _Bool unused; // @synthesize unused=_unused;
@property(readonly, nonatomic) unsigned long long nullability; // @synthesize nullability=_nullability;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(id)arg1 nullability:(unsigned long long)arg2 unused:(_Bool)arg3;

@end

