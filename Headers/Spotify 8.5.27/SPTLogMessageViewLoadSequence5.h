//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSDictionary, NSString;

@interface SPTLogMessageViewLoadSequence5 : SPTLogMessage
{
    NSString *_sequenceIdValue;
    NSString *_pageIdValue;
    NSString *_uriValue;
    NSString *_terminalStateValue;
    NSString *_initialConnectionTypeValue;
    NSString *_terminalConnectionTypeValue;
    NSDictionary *_stepsValue;
    NSDictionary *_metadataValue;
}

+ (id)messageWithSequenceId:(id)arg1 pageId:(id)arg2 uri:(id)arg3 terminalState:(id)arg4 initialConnectionType:(id)arg5 terminalConnectionType:(id)arg6 steps:(id)arg7 metadata:(id)arg8;
@property(copy, nonatomic) NSDictionary *metadataValue; // @synthesize metadataValue=_metadataValue;
@property(copy, nonatomic) NSDictionary *stepsValue; // @synthesize stepsValue=_stepsValue;
@property(copy, nonatomic) NSString *terminalConnectionTypeValue; // @synthesize terminalConnectionTypeValue=_terminalConnectionTypeValue;
@property(copy, nonatomic) NSString *initialConnectionTypeValue; // @synthesize initialConnectionTypeValue=_initialConnectionTypeValue;
@property(copy, nonatomic) NSString *terminalStateValue; // @synthesize terminalStateValue=_terminalStateValue;
@property(copy, nonatomic) NSString *uriValue; // @synthesize uriValue=_uriValue;
@property(copy, nonatomic) NSString *pageIdValue; // @synthesize pageIdValue=_pageIdValue;
@property(copy, nonatomic) NSString *sequenceIdValue; // @synthesize sequenceIdValue=_sequenceIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
