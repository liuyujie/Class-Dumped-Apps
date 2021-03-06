//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface SPTRequest : NSObject
{
    NSString *_action;
    NSURL *_URL;
    NSData *_body;
    NSDictionary *_headers;
}

@property(readonly, copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)getCppRequest:(struct Request *)arg1;
- (id)description;
- (id)initWithCppRequest:(const struct Request *)arg1;
- (id)initRequesting:(id)arg1 withAction:(id)arg2 body:(id)arg3 headers:(id)arg4;

@end

