//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentViewObject.h>

@class NSString;
@protocol GDKCollapsibleSectionHeaderCVDelegate, GDKCollapsibleSectionHeaderCVOUpdateDelegate;

@interface GDKCollapsibleSectionHeaderCVO : GOOBaseContentViewObject
{
    _Bool _expanded;
    id <GDKCollapsibleSectionHeaderCVDelegate> _contentViewDelegate;
    NSString *_title;
    NSString *_expandA11yLabel;
    NSString *_collapseA11yLabel;
    id <GDKCollapsibleSectionHeaderCVOUpdateDelegate> _updateDelegate;
}

@property(nonatomic) __weak id <GDKCollapsibleSectionHeaderCVOUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(copy, nonatomic) NSString *collapseA11yLabel; // @synthesize collapseA11yLabel=_collapseA11yLabel;
@property(copy, nonatomic) NSString *expandA11yLabel; // @synthesize expandA11yLabel=_expandA11yLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <GDKCollapsibleSectionHeaderCVDelegate> contentViewDelegate; // @synthesize contentViewDelegate=_contentViewDelegate;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)initWithTitle:(id)arg1 expandA11yLabel:(id)arg2 collapseA11yLabel:(id)arg3 expanded:(_Bool)arg4;

@end

