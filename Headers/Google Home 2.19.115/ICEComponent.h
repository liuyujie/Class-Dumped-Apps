//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class ICEAccessibility, ICEBehavior, ICEStyle, ICEVisualElementLogInfo, NSArray, NSString;

@interface ICEComponent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_UID;
    ICEVisualElementLogInfo *_logInfo;
    ICEStyle *_style;
    ICEBehavior *_behavior;
    NSArray *_layoutConstraints;
    NSArray *_layoutGuideUIDs;
    ICEAccessibility *_accessibility;
}

+ (_Bool)supportsSecureCoding;
+ (Class)mutableSubclass;
@property(copy, nonatomic) ICEAccessibility *accessibility; // @synthesize accessibility=_accessibility;
@property(copy, nonatomic) NSArray *layoutGuideUIDs; // @synthesize layoutGuideUIDs=_layoutGuideUIDs;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(copy, nonatomic) ICEBehavior *behavior; // @synthesize behavior=_behavior;
@property(copy, nonatomic) ICEStyle *style; // @synthesize style=_style;
@property(copy, nonatomic) ICEVisualElementLogInfo *logInfo; // @synthesize logInfo=_logInfo;
@property(copy, nonatomic) NSString *UID; // @synthesize UID=_UID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)validateCopyWithZone;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

