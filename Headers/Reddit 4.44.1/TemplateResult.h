//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSString;

@interface TemplateResult : NSObject
{
    NSString *_value;
    NSArray *_replacements;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSArray *replacements; // @synthesize replacements=_replacements;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;

@end
