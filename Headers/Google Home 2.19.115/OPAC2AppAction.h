//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OPAC2Performable-Protocol.h"

@class JCVAppAction, NSString, OPAC2Context;

@interface OPAC2AppAction : NSObject <OPAC2Performable>
{
    JCVAppAction *_action;
    OPAC2Context *_context;
}

+ (_Bool)isBlacklistedLinkString:(id)arg1;
+ (_Bool)isBlacklistedAppActionProto:(id)arg1;
@property(retain, nonatomic) OPAC2Context *context; // @synthesize context=_context;
@property(retain, nonatomic) JCVAppAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)perform:(id)arg1;
- (id)initWithAction:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

