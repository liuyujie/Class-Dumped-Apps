//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTGraftingViewController.h"
#import "YTResponder.h"

@class GIMMe, NSString, YTICommand;

@interface YTQuickActionsController : NSObject <YTResponder, YTGraftingViewController>
{
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTICommand *_navEndpoint;
}

@property(retain, nonatomic) YTICommand *navEndpoint; // @synthesize navEndpoint=_navEndpoint;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)endpointWithShortcutType:(id)arg1 parentVECounter:(int)arg2;
- (id)visualElementProxyButtonWithType:(id)arg1;
- (id)shortcutItemWithType:(id)arg1 localizedTitle:(id)arg2 templateImageName:(id)arg3;
- (id)shortcutItems;
- (void)performActionForShortcutItem:(id)arg1;
- (void)setupDynamicQuickActionsWithApplication:(id)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
