//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASMConsumable : NSObject
{
    id _value;
}

@property(retain, nonatomic) id value; // @synthesize value=_value;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isConsumed) _Bool consumed;
- (id)consume;
- (id)initWithValue:(id)arg1;
- (id)init;

@end

