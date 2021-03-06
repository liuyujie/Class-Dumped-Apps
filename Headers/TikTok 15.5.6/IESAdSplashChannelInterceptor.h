//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESFalconCustomInterceptor-Protocol.h"

@class IESGurdDelegateDispatcher, NSString;
@protocol IESFalconGurdInterceptionDelegate;

@interface IESAdSplashChannelInterceptor : NSObject <IESFalconCustomInterceptor>
{
    NSString *_gurdAccessKey;
    CDUnknownBlockType _getChannelBlock;
    IESGurdDelegateDispatcher<IESFalconGurdInterceptionDelegate> *_delegateDispatcher;
}

@property(retain, nonatomic) IESGurdDelegateDispatcher<IESFalconGurdInterceptionDelegate> *delegateDispatcher; // @synthesize delegateDispatcher=_delegateDispatcher;
@property(copy, nonatomic) CDUnknownBlockType getChannelBlock; // @synthesize getChannelBlock=_getChannelBlock;
@property(copy, nonatomic) NSString *gurdAccessKey; // @synthesize gurdAccessKey=_gurdAccessKey;
- (void).cxx_destruct;
- (id)falconMetaDataForURLRequest:(id)arg1;
- (void)unregisterInterceptionDelegate:(id)arg1;
- (void)registerInterceptionDelegate:(id)arg1;
- (id)initWithGurdAccessKey:(id)arg1 getChannelBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

