//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBHttpTask-Protocol.h>

@interface DBHttpTaskCppProxy : NSObject <DBHttpTask>
{
    struct Handle<std::__1::shared_ptr<dropbox::http::HttpTask>, std::__1::shared_ptr<dropbox::http::HttpTask>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (long long)getState;
- (id)initWithCpp:(const shared_ptr_e59245d9 *)arg1;

@end

