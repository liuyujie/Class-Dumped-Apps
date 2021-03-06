//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessage.h"

@class NSArray, NSString;

@interface AWEIMGreetingMessage : AWEIMMessage
{
    NSString *_fromUserNickName;
    NSString *_title;
    NSArray *_jokerStickers;
    NSArray *_greetingStickers;
}

@property(retain, nonatomic) NSArray *greetingStickers; // @synthesize greetingStickers=_greetingStickers;
@property(retain, nonatomic) NSArray *jokerStickers; // @synthesize jokerStickers=_jokerStickers;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *fromUserNickName; // @synthesize fromUserNickName=_fromUserNickName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *stickers;
- (id)initWithIMStorageStickers;
- (id)getContentDict;
- (id)initWithContentDict:(id)arg1;

@end

