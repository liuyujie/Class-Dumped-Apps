//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol NFUIViewSizeCacheObjectProtocol <NSObject>
@property(copy, nonatomic) NSString *entityId;
@property(copy, nonatomic) NSNumber *screenWidth;
@property(copy, nonatomic) id uniqueId;
@property(nonatomic) struct CGSize size;

@optional
- (id)initWithUniqueId:(id)arg1 withScreenWidth:(NSNumber *)arg2 withEntityId:(NSString *)arg3;
- (id)initWithSize:(struct CGSize)arg1 withUniqueId:(id)arg2 withScreenWidth:(NSNumber *)arg3 withEntityId:(NSString *)arg4;
@end

