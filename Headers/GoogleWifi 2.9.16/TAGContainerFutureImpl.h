//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TAGContainerFuture-Protocol.h"

@class TAGContainer;

@interface TAGContainerFutureImpl : NSObject <TAGContainerFuture>
{
    TAGContainer *_container;
}

@property(retain) TAGContainer *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (_Bool)isDone;
- (id)get;

@end
