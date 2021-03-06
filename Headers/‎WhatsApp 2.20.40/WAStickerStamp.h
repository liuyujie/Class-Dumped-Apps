//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAPaintBrushContent.h>

@class UIImage, WACDSticker;

@interface WAStickerStamp : WAPaintBrushContent
{
    UIImage *_image;
    WACDSticker *_managedSticker;
}

+ (id)cellIdentifier;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) WACDSticker *managedSticker; // @synthesize managedSticker=_managedSticker;
- (void).cxx_destruct;
- (Class)textureRecipeClass;
- (Class)rendererClass;
@property(readonly, nonatomic) UIImage *image;
- (float)scaleFactor;
- (struct CGSize)aspectRatio;
- (id)uniqueIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithManagedSticker:(id)arg1;

@end

