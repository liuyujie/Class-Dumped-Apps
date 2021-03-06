//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBContentViewObject-Protocol.h"
#import "DBSectionHeaderTitleProviding-Protocol.h"

@class NSString, UIResponder;
@protocol DBContentView;

@interface DBSectionHeaderContentViewObject : NSObject <DBContentViewObject, DBSectionHeaderTitleProviding>
{
    UIResponder<DBContentView> *contentView;
    NSString *_title;
}

@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak UIResponder<DBContentView> *contentView; // @synthesize contentView;
- (void).cxx_destruct;
- (Class)defaultContentViewClass;
- (id)initWithModelObject:(id)arg1 modelContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

