//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCCStoryPlayerStorySnapViewState : SCComposerMarshallableObject
{
    _Bool _viewed;
    NSString *_snapId;
}

@property(nonatomic) _Bool viewed; // @synthesize viewed=_viewed;
@property(copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithSnapId:(id)arg1 viewed:(_Bool)arg2;

@end
