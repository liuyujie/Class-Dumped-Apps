//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue, SCGallerySnap, SCGallerySnapDetail;

@protocol SCGalleryStreamingSnapPackageFetching <NSObject>
- (void)fetchStreamingPackageForSnap:(id <SCGallerySnap>)arg1 snapDetail:(id <SCGallerySnapDetail>)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4 completion:(void (^)(NSError *, SCGalleryStreamingSnapPackage *))arg5;
@end
