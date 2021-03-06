//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface DBWebSaverPDFConfig : NSObject
{
    NSString *_filePath;
    NSURL *_destinationURL;
    NSString *_title;
    NSURL *_URL;
    struct CGSize _pageSize;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) struct CGSize pageSize; // @synthesize pageSize=_pageSize;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)arg1 size:(struct CGSize)arg2 title:(id)arg3 URL:(id)arg4;

@end

