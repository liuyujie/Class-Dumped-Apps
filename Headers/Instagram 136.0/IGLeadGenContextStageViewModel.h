//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGLeadGenStageViewModel-Protocol.h>

@class IGLeadGenFooterViewModel, IGLeadGenFormInfoViewModel, NSArray, NSString;

@interface IGLeadGenContextStageViewModel : NSObject <IGLeadGenStageViewModel>
{
    unsigned long long _formStage;
    IGLeadGenFooterViewModel *_footerViewModel;
    IGLeadGenFormInfoViewModel *_formInfoViewModel;
    NSArray *_contextContent;
}

@property(readonly, nonatomic) NSArray *contextContent; // @synthesize contextContent=_contextContent;
- (void).cxx_destruct;
- (void)updateViewModelWithFormSubmissionStatus:(unsigned long long)arg1;
- (id)formInfoViewModel;
- (id)footerViewModel;
- (unsigned long long)formStage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormStage:(unsigned long long)arg1 contextContent:(id)arg2 footerViewModel:(id)arg3 formInfoViewModel:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

