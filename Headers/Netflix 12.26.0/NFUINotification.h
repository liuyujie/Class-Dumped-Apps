//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFLXMessagingServiceMessage.h"

@class NSString;

@interface NFUINotification : NFLXMessagingServiceMessage
{
    NSString *_imageAltText;
    NSString *_imageUrl;
    NSString *_textTargetUrl;
    NSString *_imageTargetUrl;
    NSString *_header;
    NSString *_body;
}

@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *header; // @synthesize header=_header;
@property(retain, nonatomic) NSString *imageTargetUrl; // @synthesize imageTargetUrl=_imageTargetUrl;
@property(retain, nonatomic) NSString *textTargetUrl; // @synthesize textTargetUrl=_textTargetUrl;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *imageAltText; // @synthesize imageAltText=_imageAltText;
- (void).cxx_destruct;
- (id)trackingDict;
- (_Bool)isMultiTitle;
- (_Bool)canPlayback;
- (_Bool)canAddToMyList;
- (id)videoType;
- (id)videoId;
- (id)initWithPayload:(id)arg1;

@end

