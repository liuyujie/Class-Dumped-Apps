//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HTSLiveAnimation : NSObject
{
    _Bool _ready;
    Class _designatedImp;
    NSNumber *_duration;
    CDUnknownBlockType _onTapAction;
}

@property(copy, nonatomic) CDUnknownBlockType onTapAction; // @synthesize onTapAction=_onTapAction;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(nonatomic) Class designatedImp; // @synthesize designatedImp=_designatedImp;
@property(nonatomic) _Bool ready; // @synthesize ready=_ready;
- (void).cxx_destruct;
- (void)onTap:(id)arg1;
- (void)preRenderFinished:(CDUnknownBlockType)arg1;
- (id)init;

@end
