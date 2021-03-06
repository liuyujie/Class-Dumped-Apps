//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGMediaAttachment.h>

#import <TelegramUI/TGMediaAttachmentParser-Protocol.h>

@class NSString;

@interface TGAudioMediaAttachment : TGMediaAttachment <TGMediaAttachmentParser>
{
    int _datacenterId;
    int _duration;
    int _fileSize;
    long long _audioId;
    long long _accessHash;
    long long _localAudioId;
    NSString *_audioUri;
}

@property(retain, nonatomic) NSString *audioUri; // @synthesize audioUri=_audioUri;
@property(nonatomic) int fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) long long localAudioId; // @synthesize localAudioId=_localAudioId;
@property(nonatomic) int datacenterId; // @synthesize datacenterId=_datacenterId;
@property(nonatomic) long long accessHash; // @synthesize accessHash=_accessHash;
@property(nonatomic) long long audioId; // @synthesize audioId=_audioId;
- (void).cxx_destruct;
- (id)parseMediaAttachment:(id)arg1;
- (void)serialize:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

