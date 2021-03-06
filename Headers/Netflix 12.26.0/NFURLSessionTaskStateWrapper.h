//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFAddressTranslationHistory, NSURLSessionTask;

@interface NFURLSessionTaskStateWrapper : NSObject
{
    NSURLSessionTask *_originalTask;
    NSURLSessionTask *_currentTask;
    NFAddressTranslationHistory *_addressTranslationHistory;
    unsigned long long _originalTaskIdentifier;
}

@property(nonatomic) unsigned long long originalTaskIdentifier; // @synthesize originalTaskIdentifier=_originalTaskIdentifier;
@property(readonly, nonatomic) NFAddressTranslationHistory *addressTranslationHistory; // @synthesize addressTranslationHistory=_addressTranslationHistory;
@property(readonly, nonatomic) NSURLSessionTask *currentTask; // @synthesize currentTask=_currentTask;
@property(readonly, nonatomic) NSURLSessionTask *originalTask; // @synthesize originalTask=_originalTask;
- (void).cxx_destruct;
- (id)newestTask;
- (void)setRetryTask:(id)arg1;
- (id)initWithSessionTask:(id)arg1 translationHistory:(id)arg2;

@end

