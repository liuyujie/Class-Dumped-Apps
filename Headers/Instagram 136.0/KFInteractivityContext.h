//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KFInteractivity, KFInteractivityToolbox;

@interface KFInteractivityContext : NSObject
{
    KFInteractivity *_interactivity;
    KFInteractivityToolbox *_toolbox;
}

@property(readonly, nonatomic) KFInteractivityToolbox *toolbox; // @synthesize toolbox=_toolbox;
- (void).cxx_destruct;
- (void)start;
- (id)initWithInteractivity:(id)arg1 toolbox:(id)arg2;

@end

