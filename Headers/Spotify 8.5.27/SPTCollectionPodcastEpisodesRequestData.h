//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastRequestData-Protocol.h"

@class NSArray, NSData, NSPredicate, NSSortDescriptor, NSString, NSURL;

@interface SPTCollectionPodcastEpisodesRequestData : NSObject <SPTPodcastRequestData>
{
    _Bool _grouped;
    NSString *_requestStringTemplate;
    NSPredicate *_filterPredicate;
    NSSortDescriptor *_sortDescriptor;
    NSURL *_viewURL;
    NSArray *_sortDescriptors;
    NSData *_requestBody;
    NSString *_requestAction;
}

@property(copy, nonatomic) NSString *requestAction; // @synthesize requestAction=_requestAction;
@property(retain, nonatomic) NSData *requestBody; // @synthesize requestBody=_requestBody;
@property(nonatomic, getter=isGrouped) _Bool grouped; // @synthesize grouped=_grouped;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSURL *viewURL; // @synthesize viewURL=_viewURL;
@property(readonly, nonatomic) NSSortDescriptor *sortDescriptor; // @synthesize sortDescriptor=_sortDescriptor;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(retain, nonatomic) NSString *requestStringTemplate; // @synthesize requestStringTemplate=_requestStringTemplate;
- (void).cxx_destruct;
- (id)additionalFilterString:(id)arg1;
- (id)initWithURL:(id)arg1 mediaType:(long long)arg2 subscribe:(_Bool)arg3 podcastUITestManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
