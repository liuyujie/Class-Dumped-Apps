//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGTitleAndSubtitleModelType-Protocol.h>

@class IGTitleAndSubtitleLayoutConfig, NSString;

@interface IGTitleAndSubtitleViewModel : NSObject <IGTitleAndSubtitleModelType, IGListDiffable>
{
    NSString *_title;
    NSString *_subtitle;
    IGTitleAndSubtitleLayoutConfig *_layoutConfig;
}

@property(readonly, nonatomic) IGTitleAndSubtitleLayoutConfig *layoutConfig; // @synthesize layoutConfig=_layoutConfig;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 layoutConfig:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

