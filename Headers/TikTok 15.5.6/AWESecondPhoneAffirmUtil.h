//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AWESecondPhoneAffirmUtil : NSObject
{
    NSString *_remindContent;
    NSString *_phoneStr;
    NSString *_highlightContent;
    NSString *_scheme;
}

+ (void)markShowEvent;
+ (_Bool)shouldShowAffirm;
+ (void)checkSecondPhoneIfNeeded:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(copy, nonatomic) NSString *highlightContent; // @synthesize highlightContent=_highlightContent;
@property(copy, nonatomic) NSString *phoneStr; // @synthesize phoneStr=_phoneStr;
@property(copy, nonatomic) NSString *remindContent; // @synthesize remindContent=_remindContent;
- (void).cxx_destruct;

@end

