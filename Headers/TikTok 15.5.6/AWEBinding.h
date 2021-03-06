//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSThread;

@interface AWEBinding : NSObject
{
    _Bool _boundFlag;
    _Bool _distinctUntilChangedFlag;
    _Bool _deliverOnMainThreadFlag;
    _Bool _isCombineLatest;
    NSMutableArray *_bindingKVOArray;
    NSMutableArray *_bindingBlockArray;
    id _receiver;
    NSString *_receiverKeyPath;
    NSMutableArray *_handlerBlockArray;
    long long _skipCounter;
    id _host;
    NSThread *_hostThread;
}

+ (id)combineLatest:(id)arg1;
+ (id)merge:(id)arg1;
+ (_Bool)isDebug;
+ (void)stopDebug;
+ (void)openDebug;
@property __weak NSThread *hostThread; // @synthesize hostThread=_hostThread;
@property __weak id host; // @synthesize host=_host;
@property long long skipCounter; // @synthesize skipCounter=_skipCounter;
@property _Bool isCombineLatest; // @synthesize isCombineLatest=_isCombineLatest;
@property _Bool deliverOnMainThreadFlag; // @synthesize deliverOnMainThreadFlag=_deliverOnMainThreadFlag;
@property _Bool distinctUntilChangedFlag; // @synthesize distinctUntilChangedFlag=_distinctUntilChangedFlag;
@property _Bool boundFlag; // @synthesize boundFlag=_boundFlag;
@property(retain) NSMutableArray *handlerBlockArray; // @synthesize handlerBlockArray=_handlerBlockArray;
@property(retain) NSString *receiverKeyPath; // @synthesize receiverKeyPath=_receiverKeyPath;
@property __weak id receiver; // @synthesize receiver=_receiver;
@property(retain) NSMutableArray *bindingBlockArray; // @synthesize bindingBlockArray=_bindingBlockArray;
@property(retain) NSMutableArray *bindingKVOArray; // @synthesize bindingKVOArray=_bindingKVOArray;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unbind;
- (void)debugForHandlerBlock:(id)arg1 newValue:(id)arg2 stage:(id)arg3 bindingKVO:(id)arg4;
- (void)debugForSetter:(id)arg1 newValue:(id)arg2 stage:(id)arg3 bindingKVO:(id)arg4;
- (void)excuteSetterOneArgs:(id)arg1;
- (void)excuteSetterWithOldValue:(id)arg1 newValue:(id)arg2 stage:(id)arg3 bindingKVO:(id)arg4 handlerBlockArray:(id)arg5;
- (void)deliverThreadExcuteSetterWithOldValue:(id)arg1 newValue:(id)arg2 stage:(id)arg3 bindingKVO:(id)arg4 handlerBlockArray:(id)arg5;
- (void)setupInitialValue:(id)arg1;
- (void)removeHandler:(CDUnknownBlockType)arg1;
- (void)addHandler:(CDUnknownBlockType)arg1;
- (id)receiver:(id)arg1 receiverKeyPath:(id)arg2;
- (id)observer:(id)arg1 observerKeyPath:(id)arg2;
- (id)init;
- (id)bindReusableView:(id)arg1;
- (id)skip:(long long)arg1;
- (id)distinctUntilChanged;
- (id)deliverOnMainThread;
- (void)removeFromObserver;
- (void)removeKVOByObserver:(id)arg1;
- (void)removeKVO;
- (void)addKVO;

@end

