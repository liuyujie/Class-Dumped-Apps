//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GIMMe, MLVideo, YTIPlayerResponse;

@protocol MLCaptionDisplayControllerFactory <NSObject>
+ (id)new;
+ (id)alloc;
@property(nonatomic) __weak GIMMe *gimme;
- (id <MLCaptionDisplayController>)captionDisplayControllerForVideo:(MLVideo *)arg1;
- (id <MLCaptionDisplayController>)captionDisplayControllerForPlayerData:(YTIPlayerResponse *)arg1;
@end
