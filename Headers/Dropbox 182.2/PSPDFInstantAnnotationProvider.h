//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/PSPDFAnnotationProvider-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, PSPDFDispatchQueue, PSPDFDocumentProvider, PSPDFRecursiveReadWriteLock;
@protocol PSPDFAnnotationProviderChangeNotifier, PSPDFAnnotationProviderDelegate, PSPDFCustomConcurrentQueue, PSPDFInstantAnnotationAttachmentResolver;

@interface PSPDFInstantAnnotationProvider : NSObject <PSPDFAnnotationProvider>
{
    struct map<unsigned long, NSArray<__kindof PSPDFAnnotation *>*, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, NSArray<__kindof PSPDFAnnotation *>*>>> _annotationCache;
    NSMutableDictionary *_annotationsByID;
    PSPDFRecursiveReadWriteLock *_lock;
    PSPDFDispatchQueue<PSPDFCustomConcurrentQueue> *_annotationPropertyAccessQueue;
    id <PSPDFAnnotationProviderChangeNotifier> _providerDelegate;
    PSPDFDocumentProvider *_documentProvider;
    id <PSPDFInstantAnnotationAttachmentResolver> _attachmentResolver;
}

+ (id)identifierForAnnotation:(id)arg1;
@property(readonly, nonatomic) __weak id <PSPDFInstantAnnotationAttachmentResolver> attachmentResolver; // @synthesize attachmentResolver=_attachmentResolver;
@property(readonly, nonatomic) __weak PSPDFDocumentProvider *documentProvider; // @synthesize documentProvider=_documentProvider;
@property __weak id <PSPDFAnnotationProviderChangeNotifier> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resolveAction:(id)arg1 withAnnotations:(id)arg2;
- (void)resolveReferencedAnnotationsForActions:(id)arg1 annotations:(id)arg2;
- (void)postProcessAction:(id)arg1 withAnnotationManager:(id)arg2 collectingDeferredActionsIn:(id)arg3;
- (Class)annotationClassForCoreObject:(const nn_d8c5fc0d *)arg1 inDocument:(id)arg2 allowedTypes:(unsigned long long)arg3;
- (id)newAnnotationOnPage:(unsigned long long)arg1 forCoreObject:(const nn_d8c5fc0d *)arg2 withTypeInSet:(unsigned long long)arg3 annotationManager:(id)arg4 attachmentResolver:(id)arg5 document:(id)arg6 provider:(id)arg7 recordingActionsToResolveIn:(id)arg8;
- (id)removeAnnotations:(id)arg1 options:(id)arg2;
- (id)onAccessQueue_addAnnotations:(id)arg1 attachmentResolver:(id)arg2 options:(id)arg3;
- (id)addAnnotations:(id)arg1 options:(id)arg2;
- (_Bool)hasLoadedAnnotationsForPageAtIndex:(unsigned long long)arg1;
- (id)annotationsForPageAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool shouldSaveAnnotations;
- (id)annotationWithIdentifier:(id)arg1;
- (void)needsLocking_refreshCachedAnnotationsForPagesAtIndices:(id)arg1;
- (_Bool)needsLocking_flushPendingChangesToCore;
- (void)unlockFromWriting;
- (void)lockForWriting;
- (void)finishSetupWithAttachmentResolver:(id)arg1 propertyAccessQueue:(id)arg2;
- (id)initWithDocumentProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _Bool allowAnnotationZIndexMoves;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PSPDFAnnotationProviderDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *dirtyAnnotations;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

