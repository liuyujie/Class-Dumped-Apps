//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAPaymentCoordinatorErrorAlertViewActionItem : NSObject
{
    _Bool _isCancelAction;
    NSString *_buttonTitle;
    CDUnknownBlockType _buttonAction;
}

+ (id)cancelItemWithAction:(CDUnknownBlockType)arg1;
+ (id)okItemWithAction:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isCancelAction; // @synthesize isCancelAction=_isCancelAction;
@property(readonly, copy, nonatomic) CDUnknownBlockType buttonAction; // @synthesize buttonAction=_buttonAction;
@property(readonly, copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (void).cxx_destruct;
- (id)initWithButtonTitle:(id)arg1 buttonAction:(CDUnknownBlockType)arg2 isCancelAction:(_Bool)arg3;

@end
