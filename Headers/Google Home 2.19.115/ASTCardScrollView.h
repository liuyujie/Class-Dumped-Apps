//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "ICEEventHandler-Protocol.h"

@class ICECardViewController, NSLayoutConstraint, NSString, UIView;
@protocol ASTCardScrollViewDelegate;

@interface ASTCardScrollView : UIScrollView <ICEEventHandler>
{
    id <ASTCardScrollViewDelegate> _cardScrollViewDelegate;
    ICECardViewController *_cardViewController;
    NSLayoutConstraint *_heightConstraint;
    UIView *_cardView;
    double _maxHeight;
}

@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) ICECardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
@property(nonatomic) __weak id <ASTCardScrollViewDelegate> cardScrollViewDelegate; // @synthesize cardScrollViewDelegate=_cardScrollViewDelegate;
- (void).cxx_destruct;
- (_Bool)handleCardKitEvent:(id)arg1 withSourceView:(id)arg2;
- (id)initWithCardModel:(id)arg1 maxHeight:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

