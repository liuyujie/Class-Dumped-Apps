//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray;

@interface UserManagementPageValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *dependencyGraphActionToken; // @dynamic dependencyGraphActionToken;
@property(nonatomic) _Bool hasDependencyGraphActionToken; // @dynamic hasDependencyGraphActionToken;
@property(retain, nonatomic) NSMutableArray *selectableUiFieldGroupFormValueArray; // @dynamic selectableUiFieldGroupFormValueArray;
@property(readonly, nonatomic) unsigned long long selectableUiFieldGroupFormValueArray_Count; // @dynamic selectableUiFieldGroupFormValueArray_Count;
@property(retain, nonatomic) NSMutableArray *simpleFormValueArray; // @dynamic simpleFormValueArray;
@property(readonly, nonatomic) unsigned long long simpleFormValueArray_Count; // @dynamic simpleFormValueArray_Count;

@end
