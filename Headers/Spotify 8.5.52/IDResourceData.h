//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDResourceType, NSData;

@interface IDResourceData : NSObject
{
    IDResourceType *_type;
    NSData *_data;
}

+ (id)objectWithCustom:(id)arg1;
+ (id)fullQualifiedName;
@property(retain) NSData *data; // @synthesize data=_data;
@property(retain) IDResourceType *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)BMW_etchObject;
- (id)initWithType:(id)arg1 data:(id)arg2;

@end
