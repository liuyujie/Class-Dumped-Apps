//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBPrettySignatureBackingViewDelegate-Protocol.h"
#import "DBPrettySignatureItemBackingViewDelegate-Protocol.h"
#import "DBPrettySignatureTextBackingViewDelegate-Protocol.h"

@class DBPDFViewController, DBPrettySignatureItemBackingView, NSMutableDictionary, NSMutableSet, NSString, UIColor;
@protocol DBPDFAnnotationManagerUIDelegate;

@interface DBPDFAnnotationManager : NSObject <DBPrettySignatureItemBackingViewDelegate, DBPrettySignatureBackingViewDelegate, DBPrettySignatureTextBackingViewDelegate>
{
    DBPDFViewController *_pdfViewController;
    _Bool _scrollViewLocked;
    DBPrettySignatureItemBackingView *_signatureBackingView;
    NSMutableDictionary *_signatureDictionary;
    UIColor *_lastAnnotationColor;
    double _lastTextAnnotationFontSize;
    NSMutableSet *_annotations;
    id <DBPDFAnnotationManagerUIDelegate> _delegate;
}

+ (double)db_pdfPageScale:(id)arg1;
+ (_Bool)db_isRect:(struct CGRect)arg1 closeToRect:(struct CGRect)arg2 byEpsilon:(double)arg3;
@property(nonatomic) __weak id <DBPDFAnnotationManagerUIDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableSet *annotations; // @synthesize annotations=_annotations;
- (void).cxx_destruct;
- (id)db_firstPageIntersectingScrollViewRect:(struct CGRect)arg1;
- (_Bool)db_existingAnnotationOverlapsWithFrame:(struct CGRect)arg1;
- (void)db_preventPDFGesturesFromTakingOver;
- (struct CGRect)db_frameInCenterNonOverlappingWithSize:(struct CGSize)arg1;
- (void)db_addNewBackingView:(id)arg1;
- (struct CGRect)db_pdfRectFromUIRect:(struct CGRect)arg1;
- (struct CGRect)db_convertRect:(struct CGRect)arg1 fromScrollViewToPageView:(id)arg2;
- (id)db_compoundView;
- (id)db_pageView;
- (id)db_getAnnotationType:(id)arg1;
- (id)parametersForAnalyticsLogging;
- (void)addTextFromTextBackingView:(id)arg1;
- (void)signatureBackingView:(id)arg1 requestsAddingSignature:(id)arg2;
- (void)commitPendingAnnotations;
- (void)signatureItemBackingViewRemoved;
- (void)signatureItemIsEditing:(_Bool)arg1;
- (_Bool)annotationRectContainedInPDF:(struct CGRect)arg1 fromView:(id)arg2;
- (void)db_setScrollViewLocked:(_Bool)arg1;
- (void)pdfViewControllerDidEndPageZoomingAtScale:(double)arg1;
- (void)tappedOnAnnotationInPageView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)db_addFreeTextAnnotation:(id)arg1 toEditingOverlayWithRect:(struct CGRect)arg2;
- (void)addText:(id)arg1 toEditingOverlayWithRect:(struct CGRect)arg2 withDate:(_Bool)arg3;
- (void)db_addSignatureToEditingOverlay:(id)arg1 atRect:(struct CGRect)arg2 initialLandInOverlay:(_Bool)arg3;
- (void)addSignatureToEditingOverlay:(id)arg1;
- (void)dealloc;
- (id)initWithPDFViewController:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

