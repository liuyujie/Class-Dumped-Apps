//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SubredditCategoriesProvider : NSObject
{
    NSArray *_categories;
    double _fetchedTime;
}

+ (id)sharedInstance;
@property(nonatomic) double fetchedTime; // @synthesize fetchedTime=_fetchedTime;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (void).cxx_destruct;
- (void)fetchWithCompletion:(CDUnknownBlockType)arg1;

@end
