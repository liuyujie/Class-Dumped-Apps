//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/NSObject-Protocol.h>

@class NSData, NSString, UIImage;

@protocol IBGReproStepAssetProtocol <NSObject>
@property(retain, nonatomic) UIImage *screenshotImage;
@property(retain, nonatomic) NSData *screenshot;
@property(copy, nonatomic) NSString *screenshotIdentifier;
- (void)loadImage;
@end

