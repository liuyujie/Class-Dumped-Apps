//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AppleNativeStorage;

@interface APIStateStore : NSObject
{
    _Bool _useAccounts;
    struct NSObject *_storage;
}

@property(nonatomic) _Bool useAccounts; // @synthesize useAccounts=_useAccounts;
@property(readonly, nonatomic) __weak NSObject<AppleNativeStorage> *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)writeAPIState:(id)arg1 identifier:(id)arg2;
- (id)readAPIStateForId:(id)arg1;
- (id)keyForIdentifier:(id)arg1;
- (void)dealloc;
- (void)cleanAPIState;
- (id)initWithStorage:(struct NSObject *)arg1;

@end

