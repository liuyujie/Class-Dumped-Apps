//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class YTIFeedEntryRenderer;
@protocol YTEngagementToolbarViewModel, YTVideoViewModel;

@interface YTVideoViewModelCacheKey : NSObject <NSCopying>
{
    unsigned long long _hash;
    id <YTVideoViewModel> _model;
    YTIFeedEntryRenderer *_optionalInfoViewModel;
    id <YTEngagementToolbarViewModel> _toolBarViewModel;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) __weak id <YTEngagementToolbarViewModel> toolBarViewModel; // @synthesize toolBarViewModel=_toolBarViewModel;
@property(nonatomic) __weak YTIFeedEntryRenderer *optionalInfoViewModel; // @synthesize optionalInfoViewModel=_optionalInfoViewModel;
@property(nonatomic) __weak id <YTVideoViewModel> model; // @synthesize model=_model;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithModel:(id)arg1 optionalInfoView:(id)arg2 toolBarView:(id)arg3 size:(struct CGSize)arg4;

@end

