//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpeedTestEngine/GSDK_GTMABMultiValue.h>

__attribute__((visibility("hidden")))
@interface GSDK_GTMABMutableMultiValue : GSDK_GTMABMultiValue
{
    unsigned long long mutations_;
}

+ (id)valueWithPropertyType:(unsigned int)arg1;
- (unsigned long long *)mutations;
- (_Bool)replaceLabelAtIndex:(unsigned long long)arg1 withLabel:(struct __CFString *)arg2;
- (_Bool)replaceValueAtIndex:(unsigned long long)arg1 withValue:(id)arg2;
- (_Bool)removeValueAndLabelAtIndex:(unsigned long long)arg1;
- (int)insertValue:(id)arg1 withLabel:(struct __CFString *)arg2 atIndex:(unsigned long long)arg3;
- (int)addValue:(id)arg1 withLabel:(struct __CFString *)arg2;
- (_Bool)checkValueType:(id)arg1;
- (id)initWithMutableMultiValue:(void *)arg1;
- (id)initWithMultiValue:(void *)arg1;
- (id)initWithPropertyType:(unsigned int)arg1;

@end

