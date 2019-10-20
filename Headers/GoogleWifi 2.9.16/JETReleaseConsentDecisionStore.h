//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JETConsentDecisionStore-Protocol.h"

@interface JETReleaseConsentDecisionStore : NSObject <JETConsentDecisionStore>
{
    // Error parsing type: , name: auditRecordFactory.storage
    // Error parsing type: , name: userIdentifier
    // Error parsing type: , name: languageCode
    // Error parsing type: , name: allStoredIdentifiers
}

+ (id)triggerNSStringForwardDeclarationInObjectiveC;
+ (id)triggerNSErrorForwardDeclarationInObjectiveC;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)recordForIdentifier:(id)arg1;
- (id)groupIdentifierFromRecordWithIdentifier:(id)arg1;
- (id)storedIdentifiers;
- (void)clearAllRecords;
- (void)removeRecordWithIdentifier:(id)arg1;
- (id)logStoredRecordWithIdentifier:(id)arg1 usingLoggingService:(id)arg2;
- (id)updateRecordWithIdentifier:(id)arg1 setGroupIdentifier:(id)arg2;
- (id)storeConsentDecision:(id)arg1 contextType:(long long)arg2 consentText:(id)arg3;
- (id)initWithObfusticatedGaiaIdentifier:(id)arg1;

@end

