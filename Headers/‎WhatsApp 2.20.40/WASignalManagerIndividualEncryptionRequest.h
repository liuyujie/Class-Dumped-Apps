//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WASignalManagerEncryptionRequest.h>

@class WADeviceJID;

@interface WASignalManagerIndividualEncryptionRequest : WASignalManagerEncryptionRequest
{
    WADeviceJID *_deviceJID;
}

@property(readonly, nonatomic) WADeviceJID *deviceJID; // @synthesize deviceJID=_deviceJID;
- (void).cxx_destruct;
- (id)initWithMessageData:(id)arg1 deviceJID:(id)arg2;

@end

