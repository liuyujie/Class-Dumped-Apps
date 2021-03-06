//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSXRemovableTextContentViewObject.h"

#import "GSXObjectWithVisualElement-Protocol.h"

@class GSXVisualElement, NSString;

@interface GSXRemovableTextWithVisualElementContentViewObject : GSXRemovableTextContentViewObject <GSXObjectWithVisualElement>
{
    GSXVisualElement *_visualElement;
}

@property(readonly, nonatomic) GSXVisualElement *visualElement; // @synthesize visualElement=_visualElement;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 visualElementID:(int)arg4 visualElementMetadata:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

