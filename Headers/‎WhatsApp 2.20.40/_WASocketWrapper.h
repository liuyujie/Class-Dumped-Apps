//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _WASocketWrapper : NSObject
{
    struct __CFSocket *_socket;
}

@property(readonly, nonatomic) struct __CFSocket *socket; // @synthesize socket=_socket;
- (void)close;
- (void)dealloc;
- (id)initWithSocket:(struct __CFSocket *)arg1;
- (id)init;

@end

