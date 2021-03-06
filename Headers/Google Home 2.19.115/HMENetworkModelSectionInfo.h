//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEModelSectionInfo-Protocol.h"

@class NSArray, NSString;

@interface HMENetworkModelSectionInfo : NSObject <HMEModelSectionInfo>
{
    NSArray *_objects;
    NSString *_name;
    NSString *_indexTitle;
}

+ (id)sectionWithObjects:(id)arg1 name:(id)arg2 indexTitle:(id)arg3;
@property(readonly, nonatomic) NSString *indexTitle; // @synthesize indexTitle=_indexTitle;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long numberOfObjects;
- (id)initWithObjects:(id)arg1 name:(id)arg2 indexTitle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

