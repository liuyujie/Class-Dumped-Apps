//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGUploadStatusChecker, NSString;

@protocol IGUploadStatusCheckerDelegate <NSObject>
- (void)uploadStatusChecker:(IGUploadStatusChecker *)arg1 requestMetadataForUploadId:(NSString *)arg2 metadataBlock:(void (^)(NSNumber *, NSNumber *))arg3;
@end

