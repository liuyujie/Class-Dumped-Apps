//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UniPopResultUtils : NSObject
{
}

+ (id)getInstance;
- (void)commomResult:(id)arg1 msg:(id)arg2 resultData:(id)arg3 traceId:(id)arg4;
- (void)sendLoginFail:(id)arg1 traceId:(id)arg2;
- (void)sendLoginSuccess:(id)arg1 data:(id)arg2;
- (void)setCallBackListener:(CDUnknownBlockType)arg1;

@end

