//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TCLVideoDecoder-Protocol.h"

@interface TCLVideoDecoderCppProxy : NSObject <TCLVideoDecoder>
{
    struct Handle<std::__1::shared_ptr<tacl::VideoDecoder>, std::__1::shared_ptr<tacl::VideoDecoder>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stop;
- (id)start;
- (id)getParameters;
- (id)decode:(id)arg1;
- (id)initWithCpp:(const shared_ptr_37ed66e6 *)arg1;

@end

