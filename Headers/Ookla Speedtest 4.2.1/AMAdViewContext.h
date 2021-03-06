//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AMAdViewContext : NSObject
{
    _Bool _richMedia;
    _Bool _explicitlyCreated;
    NSString *_url;
    NSString *_userAgent;
    NSNumber *_width;
    NSNumber *_height;
    NSString *_adUnitId;
    NSString *_html;
}

@property(readonly, nonatomic) _Bool explicitlyCreated; // @synthesize explicitlyCreated=_explicitlyCreated;
@property(readonly, nonatomic) _Bool richMedia; // @synthesize richMedia=_richMedia;
@property(readonly, nonatomic) NSString *html; // @synthesize html=_html;
@property(readonly, nonatomic) NSString *adUnitId; // @synthesize adUnitId=_adUnitId;
@property(readonly, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)toHash;
- (id)initWithBidResponse:(id)arg1;
- (id)toDictionary;
- (id)initWithUrl:(id)arg1 andUserAgent:(id)arg2 andWidth:(id)arg3 andHeight:(id)arg4 andAdUnitId:(id)arg5 andHtml:(id)arg6 andRichMedia:(_Bool)arg7;

@end

