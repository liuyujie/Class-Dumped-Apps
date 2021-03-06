//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSSet, NSString;

@interface GDKRequestApprovalsParamsBuilder : NSObject
{
    _Bool _showLockWarning;
    _Bool _showDueDatePicker;
    int _maxApproverCount;
    NSSet *_existingReviewers_17;
    NSString *_headerTitle;
    NSString *_approverPickerPlaceholder;
    NSString *_initialComment;
    NSNumber *_existingReviewers_hazzer;
}

+ (id)builderFromExistingObject:(id)arg1;
+ (id)builderWithHeaderTitle:(id)arg1 approverPickerPlaceholder:(id)arg2;
@property(retain, nonatomic) NSNumber *existingReviewers_hazzer; // @synthesize existingReviewers_hazzer=_existingReviewers_hazzer;
@property(copy, nonatomic) NSString *initialComment; // @synthesize initialComment=_initialComment;
@property(nonatomic) _Bool showDueDatePicker; // @synthesize showDueDatePicker=_showDueDatePicker;
@property(nonatomic) _Bool showLockWarning; // @synthesize showLockWarning=_showLockWarning;
@property(nonatomic) int maxApproverCount; // @synthesize maxApproverCount=_maxApproverCount;
@property(copy, nonatomic) NSString *approverPickerPlaceholder; // @synthesize approverPickerPlaceholder=_approverPickerPlaceholder;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (id)build;
@property(retain, nonatomic) NSSet *existingReviewers; // @synthesize existingReviewers=_existingReviewers_17;

@end

