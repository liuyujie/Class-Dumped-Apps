//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ALBBSession : NSObject
{
    _Bool _isCanceledByUser;
    NSString *_bindCode;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *bindCode; // @synthesize bindCode=_bindCode;
@property(nonatomic) _Bool isCanceledByUser; // @synthesize isCanceledByUser=_isCanceledByUser;
- (void).cxx_destruct;
- (id)getUser;
- (_Bool)isLogin;

@end
