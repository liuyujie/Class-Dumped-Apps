//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSOrderedSet, NSString;

@interface IGUploadStatusMultiAccountPostViewModel : NSObject
{
    long long _pendingCount;
    long long _successCount;
    long long _failureCount;
    long long _totalCount;
    IGUserSession *_userSession;
    _Bool _expanded;
    NSString *_uploadID;
    NSOrderedSet *_shares;
}

@property(readonly, nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, copy, nonatomic) NSOrderedSet *shares; // @synthesize shares=_shares;
@property(readonly, copy, nonatomic) NSString *uploadID; // @synthesize uploadID=_uploadID;
- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_calculateCounts;
- (_Bool)_hasFailedShare;
- (_Bool)shouldShowRemoveButton;
- (_Bool)shouldShowRetryButton;
- (id)progressBarColor;
- (float)progressBarProgress;
- (id)overlayViewImage;
- (id)image;
- (id)statusLabelText;
- (id)initWithUploadID:(id)arg1 shares:(id)arg2 expanded:(_Bool)arg3 userSession:(id)arg4;

@end

