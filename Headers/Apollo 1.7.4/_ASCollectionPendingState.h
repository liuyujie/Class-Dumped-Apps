//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UICollectionViewLayout;
@protocol ASCollectionDataSource, ASCollectionDelegate, ASCollectionViewLayoutInspecting;

@interface _ASCollectionPendingState : NSObject
{
    vector_0253d28f _tuningParameters;
    _Bool _allowsSelection;
    _Bool _allowsMultipleSelection;
    _Bool _inverted;
    _Bool _alwaysBounceVertical;
    _Bool _alwaysBounceHorizontal;
    _Bool _animatesContentOffset;
    _Bool _showsVerticalScrollIndicator;
    _Bool _showsHorizontalScrollIndicator;
    id <ASCollectionDelegate> _delegate;
    id <ASCollectionDataSource> _dataSource;
    UICollectionViewLayout *_collectionViewLayout;
    long long _rangeMode;
    unsigned long long _cellLayoutMode;
    double _leadingScreensForBatching;
    id <ASCollectionViewLayoutInspecting> _layoutInspector;
    struct CGPoint _contentOffset;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) _Bool showsHorizontalScrollIndicator; // @synthesize showsHorizontalScrollIndicator=_showsHorizontalScrollIndicator;
@property(nonatomic) _Bool showsVerticalScrollIndicator; // @synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator;
@property(nonatomic) _Bool animatesContentOffset; // @synthesize animatesContentOffset=_animatesContentOffset;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) _Bool alwaysBounceHorizontal; // @synthesize alwaysBounceHorizontal=_alwaysBounceHorizontal;
@property(nonatomic) _Bool alwaysBounceVertical; // @synthesize alwaysBounceVertical=_alwaysBounceVertical;
@property(nonatomic) __weak id <ASCollectionViewLayoutInspecting> layoutInspector; // @synthesize layoutInspector=_layoutInspector;
@property(nonatomic) double leadingScreensForBatching; // @synthesize leadingScreensForBatching=_leadingScreensForBatching;
@property(nonatomic) unsigned long long cellLayoutMode; // @synthesize cellLayoutMode=_cellLayoutMode;
@property(nonatomic) _Bool inverted; // @synthesize inverted=_inverted;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) _Bool allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property(nonatomic) long long rangeMode; // @synthesize rangeMode=_rangeMode;
@property(retain, nonatomic) UICollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(nonatomic) __weak id <ASCollectionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <ASCollectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setTuningParameters:(CDStruct_c3b9c2ee)arg1 forRangeMode:(long long)arg2 rangeType:(long long)arg3;
- (CDStruct_c3b9c2ee)tuningParametersForRangeMode:(long long)arg1 rangeType:(long long)arg2;
- (void)setTuningParameters:(CDStruct_c3b9c2ee)arg1 forRangeType:(long long)arg2;
- (CDStruct_c3b9c2ee)tuningParametersForRangeType:(long long)arg1;
- (id)init;

@end

