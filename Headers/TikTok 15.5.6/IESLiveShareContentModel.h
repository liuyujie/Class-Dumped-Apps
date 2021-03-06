//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEShareLiveContentModelProtocol-Protocol.h"

@class NSString;

@interface IESLiveShareContentModel : NSObject <AWEShareLiveContentModelProtocol>
{
    _Bool _landscape;
    long long _shareType;
    NSString *_title;
    NSString *_content;
    NSString *_imageURL;
    NSString *_shareURL;
    long long _shareScene;
}

+ (id)constructShareContentModelWithShareType:(long long)arg1 roomModel:(id)arg2 imageURL:(id)arg3;
@property(nonatomic) long long shareScene; // @synthesize shareScene=_shareScene;
@property(nonatomic) _Bool landscape; // @synthesize landscape=_landscape;
@property(copy, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

