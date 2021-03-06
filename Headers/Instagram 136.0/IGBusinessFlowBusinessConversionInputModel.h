//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IG4BLogger, IGFacebookPageInfo, IGUserSession, NSString;

@interface IGBusinessFlowBusinessConversionInputModel : NSObject
{
    NSString *_entryPoint;
    IGUserSession *_userSession;
    IG4BLogger *_logger;
    long long _flowStartStep;
    NSString *_preSelectedPageID;
    NSString *_categoryID;
    IGFacebookPageInfo *_pageInfo;
}

@property(retain, nonatomic) IGFacebookPageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(readonly, copy, nonatomic) NSString *preSelectedPageID; // @synthesize preSelectedPageID=_preSelectedPageID;
@property(readonly, nonatomic) long long flowStartStep; // @synthesize flowStartStep=_flowStartStep;
@property(readonly, nonatomic) IG4BLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
- (void).cxx_destruct;
- (id)initWithEntryPoint:(id)arg1 userSession:(id)arg2 logger:(id)arg3 flowStartStep:(long long)arg4 preSelectedPageID:(id)arg5;
- (id)initWithEntryPoint:(id)arg1 userSession:(id)arg2 flowStartStep:(long long)arg3 preSelectedPageID:(id)arg4;

@end

