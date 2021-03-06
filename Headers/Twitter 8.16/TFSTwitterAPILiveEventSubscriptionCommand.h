//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSString;

@interface TFSTwitterAPILiveEventSubscriptionCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    _Bool _remindMe;
    NSString *_eventID;
    NSString *_notificationID;
}

@property(copy, nonatomic) NSString *notificationID; // @synthesize notificationID=_notificationID;
@property(nonatomic) _Bool remindMe; // @synthesize remindMe=_remindMe;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 eventID:(id)arg3 remindMe:(_Bool)arg4 notificationID:(id)arg5 source:(unsigned long long)arg6 responseModelBuilder:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;

@end

