//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/MKMapViewDelegate-Protocol.h>

@class IGUserSession, NSArray, NSString;

@interface IGDiscoveryMediaLocationMapSectionController : IGListSectionController <MKMapViewDelegate>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    NSArray *_pins;
    NSArray *_annotations;
    id _object;
}

@property(retain, nonatomic) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (id)_filterAnnotations:(id)arg1 withThreshold:(double)arg2;
- (void)_configureMapCell:(id)arg1;
- (id)_pinForAnnotation:(id)arg1;
- (void)_setPin:(id)arg1 forAnnotation:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2 mediaLocationPins:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

