//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@class ASImageNode, ASTextNode;

@interface MetaBadgeManagementAchievementPlaceholderNode : ASDisplayNode
{
    ASTextNode *_comingSoonNode;
    ASDisplayNode *_comingSoonNodeBackground;
    ASImageNode *_imageNode;
    ASTextNode *_titleNode;
    ASTextNode *_descriptionNode;
}

@property(retain, nonatomic) ASTextNode *descriptionNode; // @synthesize descriptionNode=_descriptionNode;
@property(retain, nonatomic) ASTextNode *titleNode; // @synthesize titleNode=_titleNode;
@property(retain, nonatomic) ASImageNode *imageNode; // @synthesize imageNode=_imageNode;
@property(retain, nonatomic) ASDisplayNode *comingSoonNodeBackground; // @synthesize comingSoonNodeBackground=_comingSoonNodeBackground;
@property(retain, nonatomic) ASTextNode *comingSoonNode; // @synthesize comingSoonNode=_comingSoonNode;
- (void).cxx_destruct;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (id)initWithContentColor:(id)arg1;

@end
