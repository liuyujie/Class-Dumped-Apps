//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKFileSectionProviding-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol GDKFileSectionProviding;

@interface GDKFileSectionProviderWrapper : NSObject <GDKFileSectionProviding>
{
    id <GDKFileSectionProviding> _wrappedProvider;
    CDUnknownBlockType _mutationBlock;
    NSMutableDictionary *_cachedSections;
}

@property(readonly, nonatomic) NSMutableDictionary *cachedSections; // @synthesize cachedSections=_cachedSections;
@property(readonly, nonatomic) CDUnknownBlockType mutationBlock; // @synthesize mutationBlock=_mutationBlock;
@property(readonly, nonatomic) id <GDKFileSectionProviding> wrappedProvider; // @synthesize wrappedProvider=_wrappedProvider;
- (void).cxx_destruct;
- (id)calculateSectionsForSort:(id)arg1;
- (id)sectionsForSort:(id)arg1;
- (id)initWithWrappedProvider:(id)arg1 mutationBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

