//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PDLQueryProcessorFilter;

@protocol PDLQueryProcessorFactory <NSObject>
@property(nonatomic) __weak PDLQueryProcessorFilter *queryProcessorFilter;
@property(nonatomic) __weak id <PDLQueryProcessorDelegate> queryProcessorDelegate;
- (id <PDLQueryProcessor>)createLiveAutocompleteQueryProcessor;
- (id <PDLQueryProcessor>)createDeviceContactsDatabaseQueryProcessorWithLimit:(unsigned long long)arg1 rangeMatcher:(id <PDLRangeMatcher>)arg2;
- (id <PDLQueryProcessor>)createDeviceContactQueryProcessor;
- (id <PDLQueryProcessor>)createTopNCacheQueryProcessor;
@end
