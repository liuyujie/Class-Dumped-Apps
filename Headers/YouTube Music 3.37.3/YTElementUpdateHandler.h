//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTElementsUpdateHandler-Protocol.h"

@class GIMMe, NSData, NSMutableSet, NSString;

@interface YTElementUpdateHandler : NSObject <YTElementsUpdateHandler>
{
    NSMutableSet *_previouslyProcessedTemplateIds;
    NSData *_emlTemplateServingContext;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
@property(readonly) NSData *emlTemplateServingContext; // @synthesize emlTemplateServingContext=_emlTemplateServingContext;
- (void)handleElementUpdate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
