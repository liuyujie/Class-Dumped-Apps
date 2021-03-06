//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGActionableConfirmationToastPersistentConfig-Protocol.h>

@class IGActionableConfirmationToastViewModel, NSString;

@interface IGActionableConfirmationToastConfig : NSObject <IGActionableConfirmationToastPersistentConfig>
{
    IGActionableConfirmationToastViewModel *_viewModel;
    NSString *_identifier;
    _Bool _isAnimated;
    double _animationDuration;
    CDUnknownBlockType _tapActionBlock;
    CDUnknownBlockType _presentedHandler;
    CDUnknownBlockType _dismissedHandler;
    unsigned long long _configType;
}

@property(readonly, nonatomic) unsigned long long configType; // @synthesize configType=_configType;
@property(copy, nonatomic) CDUnknownBlockType dismissedHandler; // @synthesize dismissedHandler=_dismissedHandler;
@property(copy, nonatomic) CDUnknownBlockType presentedHandler; // @synthesize presentedHandler=_presentedHandler;
@property(copy, nonatomic) CDUnknownBlockType tapActionBlock; // @synthesize tapActionBlock=_tapActionBlock;
@property(readonly, nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) IGActionableConfirmationToastViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithViewModel:(id)arg1 identifier:(id)arg2 isAnimated:(_Bool)arg3 animationDuration:(double)arg4 tapActionBlock:(CDUnknownBlockType)arg5 presentedHandler:(CDUnknownBlockType)arg6 dismissedHandler:(CDUnknownBlockType)arg7 configType:(unsigned long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

