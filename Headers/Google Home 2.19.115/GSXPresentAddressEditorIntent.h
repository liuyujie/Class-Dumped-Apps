//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSXIntent.h"

@class CDRAddress, CDRAddressFormScreen, EIDClientEventIdMessage;

@interface GSXPresentAddressEditorIntent : GSXIntent
{
    // Error parsing type: , name: address
    // Error parsing type: , name: addressFormScreen
    // Error parsing type: , name: parentEventID
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithAddress:(id)arg1 addressFormScreen:(id)arg2 parentEventID:(id)arg3;
@property(nonatomic, readonly) EIDClientEventIdMessage *parentEventID; // @synthesize parentEventID;
@property(nonatomic, readonly) CDRAddressFormScreen *addressFormScreen; // @synthesize addressFormScreen;
@property(nonatomic, readonly) CDRAddress *address; // @synthesize address;

@end

