//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXDataContext.h"

@class NSString, UIColor, XBXMediaItem, XBXProvider;

@interface SGHomeItemDataContext : XBXDataContext
{
    _Bool _isGamePass;
    _Bool _isMoreButton;
    _Bool _showTitle;
    NSString *_resizeImageUrl;
    NSString *_imageUrl;
    UIColor *_backgroundColor;
    NSString *_titleString;
    XBXMediaItem *_mediaItem;
    XBXProvider *_provider;
    NSString *_launchUri;
    long long _mediaItemType;
}

+ (id)createWithTitle:(id)arg1 andResizeUrl:(id)arg2 andMediaItemType:(long long)arg3 andIsGamePass:(_Bool)arg4;
+ (id)createWithTitle:(id)arg1 andImageUrl:(id)arg2;
+ (id)createWithTitle:(id)arg1 andResizeUrl:(id)arg2;
@property(nonatomic) long long mediaItemType; // @synthesize mediaItemType=_mediaItemType;
@property(nonatomic) _Bool showTitle; // @synthesize showTitle=_showTitle;
@property(nonatomic) _Bool isMoreButton; // @synthesize isMoreButton=_isMoreButton;
@property(nonatomic) _Bool isGamePass; // @synthesize isGamePass=_isGamePass;
@property(retain, nonatomic) NSString *launchUri; // @synthesize launchUri=_launchUri;
@property(retain, nonatomic) XBXProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) XBXMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *resizeImageUrl; // @synthesize resizeImageUrl=_resizeImageUrl;
- (void).cxx_destruct;
- (_Bool)isEqualToDataContext:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end

