//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSXTextContentViewObject.h"

@class NSURL;

@interface GSXImageTextContentViewObject : GSXTextContentViewObject
{
    NSURL *_imageURL;
    struct CGSize _networkImageSize;
    struct UIEdgeInsets _imagePadding;
}

@property(nonatomic) struct UIEdgeInsets imagePadding; // @synthesize imagePadding=_imagePadding;
@property(nonatomic) struct CGSize networkImageSize; // @synthesize networkImageSize=_networkImageSize;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 contentID:(id)arg4;

@end

