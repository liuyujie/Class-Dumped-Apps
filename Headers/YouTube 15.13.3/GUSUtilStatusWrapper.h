//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GUSUtilStatusWrapper : NSObject
{
    struct Status {
        unsigned long long rep_;
    } _status;
}

+ (id)wrapStatus:(const Status_154abcfe *)arg1;
@property(nonatomic) Status_154abcfe status; // @synthesize status=_status;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStatus:(const Status_154abcfe *)arg1;

@end

