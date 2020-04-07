//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterUserContext-Protocol.h>

@class NSDictionary, NSString, TFNTwitterPromotedContent;

@interface T1TwitterUserContext : NSObject <TFNTwitterUserContext>
{
    long long _userID;
    TFNTwitterPromotedContent *_promotedContent;
    NSDictionary *_scribeItem;
}

+ (id)userContextWithReferenceOnly:(id)arg1;
@property(readonly, nonatomic) NSDictionary *scribeItem; // @synthesize scribeItem=_scribeItem;
@property(readonly, nonatomic) TFNTwitterPromotedContent *promotedContent; // @synthesize promotedContent=_promotedContent;
@property(readonly, nonatomic) long long userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPromoted) _Bool promoted;
- (id)initWithUserID:(long long)arg1 promotedContent:(id)arg2 scribeItem:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
