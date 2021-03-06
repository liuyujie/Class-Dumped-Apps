//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@class IGDirectTextMessageBubbleViewModel, NSString, NSURL;

@interface IGDirectLinkPreviewViewModel : NSObject <NSCopying>
{
    NSURL *_url;
    NSURL *_imageURL;
    IGDirectTextMessageBubbleViewModel *_contentTextBubbleViewModel;
    NSString *_module;
    struct CGSize _imageSize;
    struct CGSize _contentSize;
}

@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) IGDirectTextMessageBubbleViewModel *contentTextBubbleViewModel; // @synthesize contentTextBubbleViewModel=_contentTextBubbleViewModel;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContent:(id)arg1 url:(id)arg2 imageURL:(id)arg3 theme:(id)arg4 layoutSpec:(id)arg5 module:(id)arg6;

@end

