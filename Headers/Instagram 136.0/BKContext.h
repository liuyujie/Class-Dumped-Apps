//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/BKLispyContext-Protocol.h>

@class BKObjectSet, NSString;

@interface BKContext : NSObject <BKLispyContext>
{
    struct unordered_map<id (*)(BKContext *), id, std::__1::hash<id (*)(BKContext *)>, std::__1::equal_to<id (*)(BKContext *)>, std::__1::allocator<std::__1::pair<id (*const)(BKContext *), id>>> _storage;
    struct recursive_mutex _storageMutex;
    BKObjectSet *_objectSet;
}

@property(readonly, nonatomic) BKObjectSet *objectSet; // @synthesize objectSet=_objectSet;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)fork;
- (id)valueWithInitializer:(CDUnknownFunctionPointerType)arg1;
- (id)initWithObjectSet:(id)arg1;
- (void)evaluateLispyExpression:(struct Expression *)arg1 withArguments:(const vector_ab1f13d4 *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

