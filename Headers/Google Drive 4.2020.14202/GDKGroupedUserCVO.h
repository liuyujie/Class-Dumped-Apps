//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOTextContentViewObject.h>

@class NSString, UIColor;
@protocol GDKGroupedUserCVOUpdateDelegate;

@interface GDKGroupedUserCVO : GOOTextContentViewObject
{
    _Bool _expanded;
    id <GDKGroupedUserCVOUpdateDelegate> _updateDelegate;
    NSString *_groupIdentifier;
    UIColor *_iconBackgroundColor;
}

+ (id)objectWithTitle:(id)arg1 subtitle:(id)arg2 groupIdentifier:(id)arg3 iconBackgroundColor:(id)arg4;
@property(retain, nonatomic) UIColor *iconBackgroundColor; // @synthesize iconBackgroundColor=_iconBackgroundColor;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(nonatomic) __weak id <GDKGroupedUserCVOUpdateDelegate> updateDelegate; // @synthesize updateDelegate=_updateDelegate;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (void)setTitle:(id)arg1;
- (id)arrowImage;

@end

