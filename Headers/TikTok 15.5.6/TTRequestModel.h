//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TTRequestModel : NSObject
{
    _Bool __isNoNeedCommonParams;
    NSString *__host;
    NSString *__uri;
    NSString *__method;
    NSString *__response;
    CDUnknownBlockType __bodyBlock;
    NSDictionary *__additionGetParams;
}

@property(retain, nonatomic) NSDictionary *_additionGetParams; // @synthesize _additionGetParams=__additionGetParams;
@property(nonatomic) _Bool _isNoNeedCommonParams; // @synthesize _isNoNeedCommonParams=__isNoNeedCommonParams;
@property(copy, nonatomic) CDUnknownBlockType _bodyBlock; // @synthesize _bodyBlock=__bodyBlock;
@property(retain, nonatomic) NSString *_response; // @synthesize _response=__response;
@property(retain, nonatomic) NSString *_method; // @synthesize _method=__method;
@property(retain, nonatomic) NSString *_uri; // @synthesize _uri=__uri;
@property(retain, nonatomic) NSString *_host; // @synthesize _host=__host;
- (void).cxx_destruct;
- (id)_requestMethod;
- (id)_requestParams;
- (id)_requestURL;
- (id)_requestURIStr;
- (id)init;

@end

