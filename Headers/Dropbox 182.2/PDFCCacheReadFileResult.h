//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface PDFCCacheReadFileResult : NSObject
{
    _Bool _isError;
    NSData *_data;
    NSString *_errorDescription;
}

+ (id)CacheReadFileResultWithData:(id)arg1 isError:(_Bool)arg2 errorDescription:(id)arg3;
@property(readonly, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(readonly, nonatomic) _Bool isError; // @synthesize isError=_isError;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)description;
- (id)initWithData:(id)arg1 isError:(_Bool)arg2 errorDescription:(id)arg3;

@end

