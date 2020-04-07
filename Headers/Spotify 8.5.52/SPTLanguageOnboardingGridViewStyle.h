//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUECollectionViewStyle, NSString, SPTLanguageOnboardingGridCollectionViewLayoutStyle, SPTLanguageOnboardingGridFooterViewStyle;
@protocol GLUEStyle;

@interface SPTLanguageOnboardingGridViewStyle : NSObject <GLUEStyle>
{
    SPTLanguageOnboardingGridCollectionViewLayoutStyle<GLUEStyle> *_collectionViewLayoutStyle;
    GLUECollectionViewStyle *_collectionViewStyle;
    SPTLanguageOnboardingGridFooterViewStyle *_footerViewStyle;
    double _footerViewHeight;
}

@property(nonatomic) double footerViewHeight; // @synthesize footerViewHeight=_footerViewHeight;
@property(copy, nonatomic) SPTLanguageOnboardingGridFooterViewStyle *footerViewStyle; // @synthesize footerViewStyle=_footerViewStyle;
@property(copy, nonatomic) GLUECollectionViewStyle *collectionViewStyle; // @synthesize collectionViewStyle=_collectionViewStyle;
@property(copy, nonatomic) SPTLanguageOnboardingGridCollectionViewLayoutStyle<GLUEStyle> *collectionViewLayoutStyle; // @synthesize collectionViewLayoutStyle=_collectionViewLayoutStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
