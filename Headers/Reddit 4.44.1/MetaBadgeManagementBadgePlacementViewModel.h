//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MetaBadgeManagementBadgeViewModel, NSArray, NSString;

@interface MetaBadgeManagementBadgePlacementViewModel : NSObject
{
    NSArray *_collectionsViewModels;
    MetaBadgeManagementBadgeViewModel *_selectedBadgeViewModel;
    NSString *_placement;
}

@property(readonly, nonatomic) NSString *placement; // @synthesize placement=_placement;
@property(readonly, nonatomic) MetaBadgeManagementBadgeViewModel *selectedBadgeViewModel; // @synthesize selectedBadgeViewModel=_selectedBadgeViewModel;
@property(readonly, nonatomic) NSArray *collectionsViewModels; // @synthesize collectionsViewModels=_collectionsViewModels;
- (void).cxx_destruct;
- (id)initWithCollectionsViewModels:(id)arg1 selectedBadgeViewModel:(id)arg2 placement:(id)arg3;

@end
