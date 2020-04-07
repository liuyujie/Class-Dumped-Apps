//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithExternalResponseProcessor.h>

@class NSArray, NSString;

@interface TFSTwitterAPIPeopleDiscoveryModulesCommand : TFSTwitterAPICommandWithExternalResponseProcessor
{
    _Bool _firstTime;
    _Bool _hasAddressBookPermission;
    long long _displayLocation;
    NSString *_displayLocationDetails;
    NSString *_pivotParameters;
    NSArray *_interestIds;
    NSArray *_customInterests;
    unsigned long long _layoutSupportMode;
}

@property(readonly, nonatomic) unsigned long long layoutSupportMode; // @synthesize layoutSupportMode=_layoutSupportMode;
@property(readonly, copy, nonatomic) NSArray *customInterests; // @synthesize customInterests=_customInterests;
@property(readonly, copy, nonatomic) NSArray *interestIds; // @synthesize interestIds=_interestIds;
@property(readonly, copy, nonatomic) NSString *pivotParameters; // @synthesize pivotParameters=_pivotParameters;
@property(readonly, nonatomic) _Bool hasAddressBookPermission; // @synthesize hasAddressBookPermission=_hasAddressBookPermission;
@property(readonly, nonatomic) _Bool firstTime; // @synthesize firstTime=_firstTime;
@property(readonly, copy, nonatomic) NSString *displayLocationDetails; // @synthesize displayLocationDetails=_displayLocationDetails;
@property(readonly, nonatomic) long long displayLocation; // @synthesize displayLocation=_displayLocation;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 source:(unsigned long long)arg3 responseModelBuilder:(id)arg4 responseProcessorBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithService:(id)arg1 accountID:(id)arg2 pivotParameters:(id)arg3 source:(unsigned long long)arg4 responseModelBuilder:(id)arg5 responseProcessorBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)initWithService:(id)arg1 accountID:(id)arg2 displayLocation:(long long)arg3 displayLocationDetails:(id)arg4 interestIds:(id)arg5 customInterests:(id)arg6 firstTime:(_Bool)arg7 hasAddressBookPermission:(_Bool)arg8 source:(unsigned long long)arg9 layoutSupportMode:(unsigned long long)arg10 responseModelBuilder:(id)arg11 responseProcessorBlock:(CDUnknownBlockType)arg12 completionBlock:(CDUnknownBlockType)arg13;

@end
