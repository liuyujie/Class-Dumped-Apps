//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGCanvasElement-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSArray, NSString, UIColor;

@interface IGCanvasHeader : NSObject <IGCanvasElement, NSCoding>
{
    NSString *_loggingToken;
    long long _elementIndex;
    UIColor *_backgroundColor;
    unsigned long long _alignment;
    struct UIEdgeInsets _insets;
    NSArray *_headerElements;
}

@property(readonly, copy, nonatomic) NSArray *headerElements; // @synthesize headerElements=_headerElements;
- (void).cxx_destruct;
- (struct UIEdgeInsets)insets;
- (unsigned long long)alignment;
- (id)backgroundColor;
- (long long)elementIndex;
- (id)loggingToken;
- (unsigned long long)elementType;
- (id)initWithResponse:(id)arg1 index:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

