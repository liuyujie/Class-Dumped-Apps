//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WAUserJID;

@interface WARowViewEvent : NSObject
{
    int _rowIndex;
    int _unreadCount;
    int _viewCount;
    WAUserJID *_userJID;
    unsigned long long _transitionCause;
    NSMutableDictionary *_itemViewEvents;
}

@property(retain, nonatomic) NSMutableDictionary *itemViewEvents; // @synthesize itemViewEvents=_itemViewEvents;
@property(nonatomic) int viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) int unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) unsigned long long transitionCause; // @synthesize transitionCause=_transitionCause;
@property(retain, nonatomic) WAUserJID *userJID; // @synthesize userJID=_userJID;
@property(nonatomic) int rowIndex; // @synthesize rowIndex=_rowIndex;
- (void).cxx_destruct;
- (id)init;

@end

