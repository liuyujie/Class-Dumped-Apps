//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@interface TFSTwitterAPICommandWithExternalResponseProcessor : TFSTwitterAPICommandWithResponseModelBuilder
{
    CDUnknownBlockType _responseProcessorBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType responseProcessorBlock; // @synthesize responseProcessorBlock=_responseProcessorBlock;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 responseModelBuilder:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 responseModelBuilder:(id)arg6 responseProcessorBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;

@end
