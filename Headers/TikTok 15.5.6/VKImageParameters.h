//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VKObject.h"

@interface VKImageParameters : VKObject
{
    int _imageType;
    double _jpegQuality;
}

+ (id)jpegImageWithQuality:(float)arg1;
+ (id)pngImage;
@property(nonatomic) double jpegQuality; // @synthesize jpegQuality=_jpegQuality;
@property(nonatomic) int imageType; // @synthesize imageType=_imageType;
- (id)mimeType;
- (id)fileExtension;

@end

