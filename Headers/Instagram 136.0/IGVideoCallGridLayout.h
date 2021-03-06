//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;
@protocol IGVideoCallGridLayoutDelegate;

@interface IGVideoCallGridLayout : UICollectionViewLayout
{
    NSMutableArray *_participantsAttributes;
    long long _nbRows;
    long long _nbColumns;
    id <IGVideoCallGridLayoutDelegate> _delegate;
}

+ (Class)layoutAttributesClass;
@property(nonatomic) __weak id <IGVideoCallGridLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long nbColumns;
@property(readonly, nonatomic) long long nbRows;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)init;

@end

