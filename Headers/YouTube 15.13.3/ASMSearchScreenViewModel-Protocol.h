//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASMResourceBasedModel-Protocol.h>

@class ASMObservable, ASMResourceKey, NSString;

@protocol ASMSearchScreenViewModel <ASMResourceBasedModel>
@property(readonly, nonatomic) ASMObservable *searchQuery;
@property(readonly, nonatomic) ASMObservable *placeholder;
@property(readonly, nonatomic) ASMObservable *bannerMessage;
@property(readonly, nonatomic) ASMObservable *noResultsImage;
@property(readonly, nonatomic) ASMObservable *helpCenterSearchItem;
@property(readonly, nonatomic) ASMObservable *filteredSearchItems;
@property(readonly, nonatomic) ASMObservable *currentIdentity;
- (void)reloadData;
- (void)didViewScreenWithKey:(ASMResourceKey *)arg1;
- (void)navigateToScreenWithKey:(ASMResourceKey *)arg1;
- (void)didChangeQuery:(NSString *)arg1;
@end

