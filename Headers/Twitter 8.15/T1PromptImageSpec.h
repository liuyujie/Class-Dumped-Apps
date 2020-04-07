//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, TFNTwitterAccount, UIImage;

@interface T1PromptImageSpec : NSObject
{
    TFNTwitterAccount *_account;
    NSURL *_url;
    UIImage *_image;
    long long _layout;
    struct CGSize _size;
}

+ (long long)private_imageLayoutForImageType:(long long)arg1;
+ (id)imageSpecForHeaderImage:(id)arg1 account:(id)arg2;
@property(readonly, nonatomic) long long layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (struct CGSize)sizeForContainerSize:(struct CGSize)arg1 layoutMetrics:(id)arg2 scalingFactor:(double)arg3;
- (id)imageViewWithSize:(struct CGSize)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithURL:(id)arg1 image:(id)arg2 account:(id)arg3 size:(struct CGSize)arg4 layout:(long long)arg5;

@end
