//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSHashTable;

@interface YTToastController : NSObject
{
    NSHashTable *_observers;
    GIMMe *_gimme;
}

+ (void)setHorizontalAlignment:(long long)arg1;
+ (void)setBottomOffset:(double)arg1;
+ (double)bottomOffsetAnimationDuration;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)notifyObserversWillShowToast;
- (id)createGOOHUDMessageWithText:(id)arg1;
- (void)removeToastControllerObserver:(id)arg1;
- (void)addToastControllerObserver:(id)arg1;
- (void)dismissToastWithCategory:(id)arg1;
- (void)showMessage:(id)arg1 action:(id)arg2 infoType:(int)arg3 category:(id)arg4 duration:(double)arg5 completionBlock:(CDUnknownBlockType)arg6 icon:(id)arg7;
- (void)showMessage:(id)arg1 action:(id)arg2 infoType:(int)arg3 category:(id)arg4 duration:(double)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)showMessage:(id)arg1 action:(id)arg2 infoType:(int)arg3 category:(id)arg4 duration:(double)arg5;
- (void)showMessage:(id)arg1 action:(id)arg2 infoType:(int)arg3 duration:(double)arg4;
- (void)showMessage:(id)arg1 infoType:(int)arg2 duration:(double)arg3;
- (void)showMessage:(id)arg1 infoType:(int)arg2;
- (void)showError:(id)arg1 message:(id)arg2;
- (void)showError:(id)arg1 action:(id)arg2 message:(id)arg3;
- (void)showMessage:(id)arg1;
- (id)init;

@end
