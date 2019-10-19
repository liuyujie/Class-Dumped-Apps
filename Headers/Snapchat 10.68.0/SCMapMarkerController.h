//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapTouchResponder-Protocol.h"

@class NSString, SCExperimentManager, SCMTPointOfInterest, SCMapTapToPlayLogger, SCXRenderLayer, UIView;
@protocol SCMapMarkerControllerDelegate, SCMapViewport;

@interface SCMapMarkerController : NSObject <SCMapTouchResponder>
{
    SCExperimentManager *_experimentManager;
    id <SCMapViewport> _mapViewport;
    UIView *_mapView;
    SCXRenderLayer *_renderLayer;
    SCMapTapToPlayLogger *_tapToPlayLogger;
    SCMTPointOfInterest *_selectedMapMarker;
    SCMTPointOfInterest *_depressedMapMarker;
    id <SCMapMarkerControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCMapMarkerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_hasCalloutAtPoint:(struct CGPoint)arg1;
- (id)_mapMarkerAtPoint:(struct CGPoint)arg1;
- (void)didZoomMap;
- (void)didPanMap;
- (void)priorResponderDidHandleTouch:(id)arg1;
- (void)didCancelTouchOnMapWithReason:(id)arg1;
- (struct SCMapTouchResponderResult)didLongPressOnMapAtPoint:(struct CGPoint)arg1;
- (struct SCMapTouchResponderResult)didTouchUpOnMapAtPoint:(struct CGPoint)arg1;
- (struct SCMapTouchResponderResult)didTouchDownOnMapAtPoint:(struct CGPoint)arg1;
- (void)_centerCameraOnMarker:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleTapOnMarker:(id)arg1 touchPoint:(struct CGPoint)arg2;
- (void)deselectSelectedMapMarker;
- (id)initWithExperimentManager:(id)arg1 mapViewport:(id)arg2 mapView:(id)arg3 renderLayer:(id)arg4 tapToPlayLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
