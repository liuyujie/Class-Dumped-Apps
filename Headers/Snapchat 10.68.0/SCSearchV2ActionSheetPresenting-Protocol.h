//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerMarshallable-Protocol.h"

@class NSString, SCCUser;

@protocol SCSearchV2ActionSheetPresenting <NSObject, SCComposerMarshallable>
- (void)presentActionSheetForGroupWithGroupId:(NSString *)arg1;
- (void)presentActionSheetForUserWithUser:(SCCUser *)arg1;
@end
