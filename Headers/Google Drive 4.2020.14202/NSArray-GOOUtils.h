//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <drive_extension_framework/GTMLogWriter-Protocol.h>

@class NSString;

@interface NSArray (GOOUtils) <GTMLogWriter>
- (id)goo_filteredArrayUsingPredicate:(CDUnknownBlockType)arg1;
- (id)goo_arrayByMappingObjects:(CDUnknownBlockType)arg1;
- (id)mas_commonSuperviewOfViews;
- (void)mas_distributeViewsAlongAxis:(unsigned long long)arg1 withFixedItemLength:(double)arg2 leadSpacing:(double)arg3 tailSpacing:(double)arg4;
- (void)mas_distributeViewsAlongAxis:(unsigned long long)arg1 withFixedSpacing:(double)arg2 leadSpacing:(double)arg3 tailSpacing:(double)arg4;
- (id)mas_remakeConstraints:(CDUnknownBlockType)arg1;
- (id)mas_updateConstraints:(CDUnknownBlockType)arg1;
- (id)mas_makeConstraints:(CDUnknownBlockType)arg1;
- (id)mdf_sortArray:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (_Bool)mdf_allObjectsPassTest:(CDUnknownBlockType)arg1;
- (_Bool)mdf_anyObjectPassesTest:(CDUnknownBlockType)arg1;
- (id)mdf_arrayByMappingObjects:(CDUnknownBlockType)arg1;
- (void)logMessage:(id)arg1 level:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

