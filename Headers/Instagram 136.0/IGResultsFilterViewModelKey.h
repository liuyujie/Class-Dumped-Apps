//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSString;

@interface IGResultsFilterViewModelKey : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_singleSelection_attributeType;
    NSString *_multiSelection_attributeType;
    NSString *_multiSelection_identifier;
}

+ (id)singleSelectionWithAttributeType:(id)arg1;
+ (id)multiSelectionWithAttributeType:(id)arg1 identifier:(id)arg2;
- (void).cxx_destruct;
- (void)matchSingleSelection:(CDUnknownBlockType)arg1 multiSelection:(CDUnknownBlockType)arg2;

@end

