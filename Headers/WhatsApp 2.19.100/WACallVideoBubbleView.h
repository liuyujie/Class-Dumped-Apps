//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABubbleTextView.h"

@class WACallViewParticipantInfo;

@interface WACallVideoBubbleView : WABubbleTextView
{
    WACallViewParticipantInfo *_selfInfo;
    WACallViewParticipantInfo *_peerInfo;
}

@property(retain, nonatomic) WACallViewParticipantInfo *peerInfo; // @synthesize peerInfo=_peerInfo;
@property(retain, nonatomic) WACallViewParticipantInfo *selfInfo; // @synthesize selfInfo=_selfInfo;
- (void).cxx_destruct;
- (void)updateString;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
