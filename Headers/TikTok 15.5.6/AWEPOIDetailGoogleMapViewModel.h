//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPOIDetailMapViewModel.h"

#import "GMSMapViewDelegate-Protocol.h"

@class GMSMapView, GMSMarker, NSString;

@interface AWEPOIDetailGoogleMapViewModel : AWEPOIDetailMapViewModel <GMSMapViewDelegate>
{
    _Bool _readyForSnapshot;
    GMSMapView *_gmsMapView;
    double _zoomLevel;
    GMSMarker *_poiMarker;
    GMSMarker *_currentLocationMarker;
    CDUnknownBlockType _snapshotBlock;
    long long _mapUUID;
}

@property(nonatomic) long long mapUUID; // @synthesize mapUUID=_mapUUID;
@property(copy, nonatomic) CDUnknownBlockType snapshotBlock; // @synthesize snapshotBlock=_snapshotBlock;
@property(nonatomic) _Bool readyForSnapshot; // @synthesize readyForSnapshot=_readyForSnapshot;
@property(retain, nonatomic) GMSMarker *currentLocationMarker; // @synthesize currentLocationMarker=_currentLocationMarker;
@property(retain, nonatomic) GMSMarker *poiMarker; // @synthesize poiMarker=_poiMarker;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(retain, nonatomic) GMSMapView *gmsMapView; // @synthesize gmsMapView=_gmsMapView;
- (void).cxx_destruct;
- (void)mapViewSnapshotReady:(id)arg1;
- (void)mapView:(id)arg1 didTapAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (_Bool)mapView:(id)arg1 didTapMarker:(id)arg2;
- (void)mapView:(id)arg1 didTapInfoWindowOfMarker:(id)arg2;
- (id)mapView:(id)arg1 markerInfoWindow:(id)arg2;
- (void)fetchMapView;
- (void)returnMapView;
- (void)showWalkingOverlays;
- (void)showDrivingOverlays;
- (void)_updateWithPOIInfoImp:(id)arg1;
- (void)updateWithMapPOIInfo:(id)arg1;
- (void)requestDirectsFromLocation:(struct CLLocationCoordinate2D)arg1 toLocation:(struct CLLocationCoordinate2D)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enableMapOperations;
- (void)disableMapOperations;
- (void)showPOIDetailInfo;
- (void)showPOIBasicInfo;
- (void)addTapGesture:(id)arg1;
- (void)getMapImageWithCompletion:(CDUnknownBlockType)arg1;
- (id)_getMapImageImp;
- (void)updateWaterMarkPaddingsWithYOffset:(double)arg1;
- (void)updateZoomLevel;
- (void)updatePOIAnnotationView;
- (id)mapView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

