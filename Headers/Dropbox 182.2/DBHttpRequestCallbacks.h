//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBHttpRequestCallbacks : NSObject
{
    struct Handle<std::__1::shared_ptr<dropbox::http::HttpRequestCallbacks>, std::__1::shared_ptr<dropbox::http::HttpRequestCallbacks>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onRequestComplete;
- (void)onUploadProgress:(long long)arg1 total:(long long)arg2;
- (void)onData:(id)arg1;
- (void)onResponse:(int)arg1 headers:(id)arg2;
- (void)onTransportError:(id)arg1;
- (id)initWithCpp:(const shared_ptr_ff95413f *)arg1;

@end

