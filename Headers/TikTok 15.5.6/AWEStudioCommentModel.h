//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AWEStudioCommentModel : NSObject
{
    NSString *_replyAwemeID;
    NSString *_commentID;
    NSString *_subCommentID;
    NSString *_userID;
    NSString *_userName;
    NSString *_content;
    NSArray *_avatarURLList;
    long long _channelID;
}

@property(nonatomic) long long channelID; // @synthesize channelID=_channelID;
@property(copy, nonatomic) NSArray *avatarURLList; // @synthesize avatarURLList=_avatarURLList;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *subCommentID; // @synthesize subCommentID=_subCommentID;
@property(copy, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
@property(copy, nonatomic) NSString *replyAwemeID; // @synthesize replyAwemeID=_replyAwemeID;
- (void).cxx_destruct;

@end

