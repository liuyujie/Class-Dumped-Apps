//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SNAnimationDocumentStateModel : NSObject
{
    NSString *_name;
    NSDictionary *_eventActions;
}

@property(readonly, nonatomic) NSDictionary *eventActions; // @synthesize eventActions=_eventActions;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 eventActions:(id)arg2;

@end

