//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BulletParamsBundle.h"

@class BulletParam;

@interface BulletLoaderParamsBundle : BulletParamsBundle
{
    BulletParam *_packageNames;
    BulletParam *_url;
}

@property(retain, nonatomic) BulletParam *url; // @synthesize url=_url;
@property(retain, nonatomic) BulletParam *packageNames; // @synthesize packageNames=_packageNames;
- (void).cxx_destruct;
- (id)params;
- (id)init;

@end

