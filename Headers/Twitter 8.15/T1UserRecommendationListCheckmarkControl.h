//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNCheckmarkControl.h>

#import <T1Twitter/T1UserRecommendationListCheckableActionControl-Protocol.h>

@class NSString, TFNTwitterAccount, TFNTwitterUserDataSource, TFSTwitterScribeContext;
@protocol TFNTwitterUserContext;

@interface T1UserRecommendationListCheckmarkControl : TFNCheckmarkControl <T1UserRecommendationListCheckableActionControl>
{
    TFNTwitterAccount *_account;
    CDUnknownBlockType _didSetUserDataSourceBlock;
    TFSTwitterScribeContext *_scribeContext;
    id <TFNTwitterUserContext> _userContext;
    TFNTwitterUserDataSource *_userDataSource;
}

@property(readonly, nonatomic) TFNTwitterUserDataSource *userDataSource; // @synthesize userDataSource=_userDataSource;
@property(readonly, nonatomic) id <TFNTwitterUserContext> userContext; // @synthesize userContext=_userContext;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(copy, nonatomic) CDUnknownBlockType didSetUserDataSourceBlock; // @synthesize didSetUserDataSourceBlock=_didSetUserDataSourceBlock;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)setUserDataSource:(id)arg1 userContext:(id)arg2 account:(id)arg3;

// Remaining properties
@property(nonatomic) _Bool checked;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
