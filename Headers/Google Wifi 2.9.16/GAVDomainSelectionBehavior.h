//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAVSelectionBehavior.h"

#import "GAVBehavior-Protocol.h"

@class GAVDomainSelectionModel, NSString;

@interface GAVDomainSelectionBehavior : GAVSelectionBehavior <GAVBehavior>
{
    NSString *_name;
    GAVDomainSelectionModel *_domainSelectionModel;
}

@property(retain, nonatomic) GAVDomainSelectionModel *domainSelectionModel; // @synthesize domainSelectionModel=_domainSelectionModel;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)detachFromChart:(id)arg1;
- (void)reset;
- (void)onResetWithNotification:(id)arg1;
- (void)onSelectDomainWithNotification:(id)arg1;
- (void)onSelectDatumWithNotification:(id)arg1;
- (void)attachToChart:(id)arg1;

@end
