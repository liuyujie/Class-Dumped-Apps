//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface XBXEDSResponse : NSObject
{
    id _context;
    NSError *_error;
    NSString *_impressionGuid;
}

@property(copy, nonatomic) NSString *impressionGuid; // @synthesize impressionGuid=_impressionGuid;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void)dealloc;

@end

