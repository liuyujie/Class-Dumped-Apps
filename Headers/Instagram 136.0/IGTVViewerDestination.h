//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGTVViewerFocusedComment;

@interface IGTVViewerDestination : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGTVViewerFocusedComment *_commentsSheet_initiallyFocusedComment;
}

+ (id)viewsAndLikesSheet;
+ (id)viewer;
+ (id)upNextSheet;
+ (id)insightsSheet;
+ (id)directShareSheet;
+ (id)commentsSheetWithInitiallyFocusedComment:(id)arg1;
- (void).cxx_destruct;
- (void)matchCommentsSheet:(CDUnknownBlockType)arg1 directShareSheet:(CDUnknownBlockType)arg2 insightsSheet:(CDUnknownBlockType)arg3 upNextSheet:(CDUnknownBlockType)arg4 viewer:(CDUnknownBlockType)arg5 viewsAndLikesSheet:(CDUnknownBlockType)arg6;
- (_Bool)matchBooleanCommentsSheet:(CDUnknownBlockType)arg1 directShareSheet:(CDUnknownBlockType)arg2 insightsSheet:(CDUnknownBlockType)arg3 upNextSheet:(CDUnknownBlockType)arg4 viewer:(CDUnknownBlockType)arg5 viewsAndLikesSheet:(CDUnknownBlockType)arg6;

@end

