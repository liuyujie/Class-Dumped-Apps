//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol TFNSectionModuleDelegate;

@interface TFNSectionModuleFooter : NSObject
{
    NSURL *_url;
    NSString *_text;
    id <TFNSectionModuleDelegate> _delegate;
}

@property(nonatomic) __weak id <TFNSectionModuleDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithText:(id)arg1 url:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithText:(id)arg1;
- (id)init;

@end
