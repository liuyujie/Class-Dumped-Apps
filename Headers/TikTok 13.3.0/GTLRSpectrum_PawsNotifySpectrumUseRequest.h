//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSpectrum_DeviceDescriptor, GTLRSpectrum_GeoLocation, NSArray, NSString;

@interface GTLRSpectrum_PawsNotifySpectrumUseRequest : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) GTLRSpectrum_DeviceDescriptor *deviceDesc; // @dynamic deviceDesc;
@property(retain, nonatomic) GTLRSpectrum_GeoLocation *location; // @dynamic location;
@property(retain, nonatomic) NSArray *spectra; // @dynamic spectra;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end
