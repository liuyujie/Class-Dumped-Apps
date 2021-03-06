//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFPageCell.h>

@class NSDate, PSPDFCellSelectionView, UIActivityIndicatorView;

@interface PSPDFDocumentEditorCell : PSPDFPageCell
{
    struct {
        unsigned int isInTouchesEnded:1;
        unsigned int isLoading:1;
    } _flags;
    _Bool _emphasized;
    unsigned long long _pageIndex;
    PSPDFCellSelectionView *_selectionView;
    NSDate *_highlightDate;
    UIActivityIndicatorView *_activityIndicator;
}

@property(nonatomic, getter=isEmphasized) _Bool emphasized; // @synthesize emphasized=_emphasized;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) NSDate *highlightDate; // @synthesize highlightDate=_highlightDate;
@property(retain, nonatomic) PSPDFCellSelectionView *selectionView; // @synthesize selectionView=_selectionView;
- (unsigned long long)pageIndex;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)setHiglightVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setEmphasized:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1;
- (void)layoutSubviews;
- (void)updateAccessibilityLabel;
@property(nonatomic, getter=isLoading) _Bool loading;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

