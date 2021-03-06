//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTAPIConversationParams, ASTAPIJwnLibrariesDelta, ASTAPIWhatsNext, NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface ASTAPIConversationDelta : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *conversationKey; // @dynamic conversationKey;
@property(nonatomic) _Bool conversationTerminated; // @dynamic conversationTerminated;
@property(nonatomic) _Bool hasConversationKey; // @dynamic hasConversationKey;
@property(nonatomic) _Bool hasConversationTerminated; // @dynamic hasConversationTerminated;
@property(nonatomic) _Bool hasOpaqueToken; // @dynamic hasOpaqueToken;
@property(nonatomic) _Bool hasParamsDelta; // @dynamic hasParamsDelta;
@property(nonatomic) _Bool hasServerOnlyRecursiveTaskResponseEventId; // @dynamic hasServerOnlyRecursiveTaskResponseEventId;
@property(nonatomic) _Bool hasWhatsNext; // @dynamic hasWhatsNext;
@property(nonatomic) _Bool hasWhatsNextKey; // @dynamic hasWhatsNextKey;
@property(nonatomic) _Bool hasWhatsnextLibrariesDelta; // @dynamic hasWhatsnextLibrariesDelta;
@property(retain, nonatomic) NSMutableArray *interactionDeltaArray; // @dynamic interactionDeltaArray;
@property(readonly, nonatomic) unsigned long long interactionDeltaArray_Count; // @dynamic interactionDeltaArray_Count;
@property(copy, nonatomic) NSData *opaqueToken; // @dynamic opaqueToken;
@property(retain, nonatomic) ASTAPIConversationParams *paramsDelta; // @dynamic paramsDelta;
@property(copy, nonatomic) NSString *serverOnlyRecursiveTaskResponseEventId; // @dynamic serverOnlyRecursiveTaskResponseEventId;
@property(retain, nonatomic) ASTAPIWhatsNext *whatsNext; // @dynamic whatsNext;
@property(copy, nonatomic) NSString *whatsNextKey; // @dynamic whatsNextKey;
@property(retain, nonatomic) NSMutableDictionary *whatsNextMap; // @dynamic whatsNextMap;
@property(readonly, nonatomic) unsigned long long whatsNextMap_Count; // @dynamic whatsNextMap_Count;
@property(retain, nonatomic) ASTAPIJwnLibrariesDelta *whatsnextLibrariesDelta; // @dynamic whatsnextLibrariesDelta;

@end

