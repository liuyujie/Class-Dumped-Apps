//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCRecordRootComponent.h"

#import "AWEStudioRecordRootComponentProtocol-Protocol.h"

@class ACCRecordViewControllerInputData, NSString, UIView;
@protocol ACCComponentBusProtocol, ACCComponentProtocol, ACCComponentViewModelProvider, ACCRecordProgressBarComponentProtocol;

@interface AWEStudioRecordRootComponent : ACCRecordRootComponent <AWEStudioRecordRootComponentProtocol>
{
    id <ACCRecordProgressBarComponentProtocol> _progressBar;
}

+ (id)subComponentProtocols;
@property(readonly, nonatomic) __weak id <ACCRecordProgressBarComponentProtocol> progressBar; // @synthesize progressBar=_progressBar;
- (void).cxx_destruct;
- (id)autoInjectComponentDictionaryOfprogressBar;

// Remaining properties
@property(nonatomic) _Bool applicationActive;
@property(retain, nonatomic) UIView *bottomGradientView;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) ACCRecordViewControllerInputData *inputData;
@property(retain, nonatomic) UIView *interactionView;
@property(nonatomic) _Bool isShowingPanel;
@property(retain, nonatomic) UIView *preview;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView *topGradientView;
@property(nonatomic) __weak id <ACCComponentViewModelProvider> viewModelProvider;

@end

