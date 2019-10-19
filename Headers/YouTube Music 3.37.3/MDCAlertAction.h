//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "UIAccessibilityIdentification-Protocol.h"

@class NSString;

@interface MDCAlertAction : NSObject <NSCopying, UIAccessibilityIdentification>
{
    NSString *_title;
    long long _emphasis;
    NSString *_accessibilityIdentifier;
    CDUnknownBlockType _completionHandler;
}

+ (id)actionWithTitle:(id)arg1 emphasis:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)ogl_accountMenuActionWithTitle:(id)arg1 sessionLifecycleManager:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, nonatomic) long long emphasis; // @synthesize emphasis=_emphasis;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 emphasis:(long long)arg2 handler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
