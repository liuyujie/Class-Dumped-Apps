//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWECloudCommandNetworkUtility : NSObject
{
}

+ (id)_uploadRequestBodyWithData:(id)arg1 params:(id)arg2 commonParams:(id)arg3 fileName:(id)arg4 fileType:(id)arg5 mimeType:(id)arg6;
+ (void)_dealWithResultData:(id)arg1 error:(id)arg2 url:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (id)fileMimeTypeWithPath:(id)arg1;
+ (void)uploadDataWithUrl:(id)arg1 fileName:(id)arg2 fileType:(id)arg3 data:(id)arg4 params:(id)arg5 commonParams:(id)arg6 mimeType:(id)arg7 requestHeaders:(id)arg8 success:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;
+ (void)uploadDataWithUrl:(id)arg1 fileName:(id)arg2 data:(id)arg3 params:(id)arg4 mimeType:(id)arg5 requestHeaders:(id)arg6 success:(CDUnknownBlockType)arg7 failure:(CDUnknownBlockType)arg8;
+ (void)requestWithUrl:(id)arg1 requestMethod:(long long)arg2 params:(id)arg3 requestHeaders:(id)arg4 needDecodeResponseData:(_Bool)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
+ (void)requestWithUrl:(id)arg1 requestMethod:(long long)arg2 params:(id)arg3 requestHeaders:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
+ (void)initialize;

@end
