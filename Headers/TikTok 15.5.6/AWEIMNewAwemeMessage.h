//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessage.h"

@class AWEURLModel, NSString;

@interface AWEIMNewAwemeMessage : AWEIMMessage
{
    NSString *_awemeID;
    AWEURLModel *_coverURL;
    NSString *_awemeDetail;
    long long _awemeCount;
    long long _awemeType;
}

@property(nonatomic) long long awemeType; // @synthesize awemeType=_awemeType;
@property(nonatomic) long long awemeCount; // @synthesize awemeCount=_awemeCount;
@property(retain, nonatomic) NSString *awemeDetail; // @synthesize awemeDetail=_awemeDetail;
@property(retain, nonatomic) AWEURLModel *coverURL; // @synthesize coverURL=_coverURL;
@property(retain, nonatomic) NSString *awemeID; // @synthesize awemeID=_awemeID;
- (void).cxx_destruct;
- (id)getContentDict;
- (id)initWithContentDict:(id)arg1;

@end

