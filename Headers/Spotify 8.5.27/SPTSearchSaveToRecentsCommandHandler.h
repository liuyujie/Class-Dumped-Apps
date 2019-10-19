//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@protocol SPTSearchRecentsDataSource;

@interface SPTSearchSaveToRecentsCommandHandler : NSObject <HUBCommandHandler>
{
    id <SPTSearchRecentsDataSource> _recentsDataSource;
}

@property(readonly, nonatomic) id <SPTSearchRecentsDataSource> recentsDataSource; // @synthesize recentsDataSource=_recentsDataSource;
- (void).cxx_destruct;
- (_Bool)shouldTrackURIInRecents:(id)arg1 componentModel:(id)arg2;
- (void)updateRecentsDataSourceIfNeededForCommandModel:(id)arg1 componentModel:(id)arg2;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithRecentsDataSource:(id)arg1;

@end
