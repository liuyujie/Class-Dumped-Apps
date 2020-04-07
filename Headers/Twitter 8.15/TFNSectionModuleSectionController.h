//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewSectionController.h>

#import <TFNUI/TFNItemsTransformer-Protocol.h>

@class NSString;
@protocol TFNSectionModuleContainer;

@interface TFNSectionModuleSectionController : TFNItemsDataViewSectionController <TFNItemsTransformer>
{
    id <TFNSectionModuleContainer> _sectionModule;
    NSString *_headerReuseIdentifier;
    NSString *_footerReuseIdentifier;
}

@property(retain, nonatomic) NSString *footerReuseIdentifier; // @synthesize footerReuseIdentifier=_footerReuseIdentifier;
@property(retain, nonatomic) NSString *headerReuseIdentifier; // @synthesize headerReuseIdentifier=_headerReuseIdentifier;
@property(retain, nonatomic) id <TFNSectionModuleContainer> sectionModule; // @synthesize sectionModule=_sectionModule;
- (void).cxx_destruct;
- (id)transformItem:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)didMoveToDataViewController:(id)arg1;
- (id)initWithSectionModule:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
