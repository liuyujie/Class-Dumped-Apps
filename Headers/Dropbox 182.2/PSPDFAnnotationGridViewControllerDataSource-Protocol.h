//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/NSObject-Protocol.h>

@class NSIndexPath, PSPDFAnnotationGridViewController, PSPDFAnnotationSet;

@protocol PSPDFAnnotationGridViewControllerDataSource <NSObject>
- (PSPDFAnnotationSet *)annotationGridViewController:(PSPDFAnnotationGridViewController *)arg1 annotationSetForIndexPath:(NSIndexPath *)arg2;
- (long long)annotationGridViewController:(PSPDFAnnotationGridViewController *)arg1 numberOfAnnotationsInSection:(long long)arg2;
- (long long)numberOfSectionsInAnnotationGridViewController:(PSPDFAnnotationGridViewController *)arg1;
@end

