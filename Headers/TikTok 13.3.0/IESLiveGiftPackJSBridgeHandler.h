//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveJSBridgeHandlerProtocol-Protocol.h"

@class NSString;
@protocol HTSLiveSpeedGiftActions, HTSLiveToolbarProvider;

@interface IESLiveGiftPackJSBridgeHandler : NSObject <IESLiveJSBridgeHandlerProtocol>
{
    id <HTSLiveSpeedGiftActions> _speedGiftActionCreator;
    id <HTSLiveToolbarProvider> _toolBarProvider;
    NSString *_toolBarItemIdentifier;
}

@property(copy, nonatomic) NSString *toolBarItemIdentifier; // @synthesize toolBarItemIdentifier=_toolBarItemIdentifier;
@property(retain, nonatomic) id <HTSLiveToolbarProvider> toolBarProvider; // @synthesize toolBarProvider=_toolBarProvider;
@property(retain, nonatomic) id <HTSLiveSpeedGiftActions> speedGiftActionCreator; // @synthesize speedGiftActionCreator=_speedGiftActionCreator;
- (void).cxx_destruct;
- (void)p_removeGiftPackItem;
- (void)showSpeedGiftItem;
- (void)registerHandlerWithBridge:(id)arg1;
- (id)initWithToolBarItemIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
