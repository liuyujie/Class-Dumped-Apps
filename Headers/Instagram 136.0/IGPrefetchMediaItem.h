//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGImageURL, IGPhoto, IGVideo;

@interface IGPrefetchMediaItem : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGPhoto *_photo_photo;
    IGVideo *_video_video;
    IGImageURL *_imageURL_imageURL;
}

+ (id)videoWithVideo:(id)arg1;
+ (id)photoWithPhoto:(id)arg1;
+ (id)imageURLWithImageURL:(id)arg1;
- (void).cxx_destruct;
- (void)matchPhoto:(CDUnknownBlockType)arg1 video:(CDUnknownBlockType)arg2 imageURL:(CDUnknownBlockType)arg3;

@end

