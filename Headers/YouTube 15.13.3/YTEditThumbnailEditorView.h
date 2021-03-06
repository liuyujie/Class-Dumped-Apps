//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UICollectionView, UICollectionViewFlowLayout;

@interface YTEditThumbnailEditorView : UIView
{
    UICollectionView *_thumbnailPickerTray;
    UICollectionViewFlowLayout *_thumbnailTrayFlowLayout;
    UIView *_permissionsView;
}

@property(retain, nonatomic) UIView *permissionsView; // @synthesize permissionsView=_permissionsView;
@property(retain, nonatomic) UICollectionViewFlowLayout *thumbnailTrayFlowLayout; // @synthesize thumbnailTrayFlowLayout=_thumbnailTrayFlowLayout;
@property(retain, nonatomic) UICollectionView *thumbnailPickerTray; // @synthesize thumbnailPickerTray=_thumbnailPickerTray;
- (void).cxx_destruct;
- (int)cellsPerRow;
- (struct CGSize)thumbnailPickerTrayContentSize;
- (struct CGSize)thumbnailCellSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

