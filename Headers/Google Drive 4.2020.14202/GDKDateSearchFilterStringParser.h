//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSTimeZone;

@interface GDKDateSearchFilterStringParser : NSObject
{
    NSDateFormatter *_dateFormatter;
}

@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void).cxx_destruct;
- (id)dateFromString:(id)arg1;
@property(readonly, nonatomic) NSTimeZone *timeZone;
- (id)initWithTimeZone:(id)arg1;

@end

