//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface WAChatButton : UIButton
{
    CDUnknownBlockType _actionTouchUpInside;
}

+ (void)prepareButtonImagesIfNeeded;
+ (void)initialize;
+ (id)button;
@property(copy, nonatomic) CDUnknownBlockType actionTouchUpInside; // @synthesize actionTouchUpInside=_actionTouchUpInside;
- (void).cxx_destruct;
- (void)eventTouchUpInside:(id)arg1;
- (void)tintColorDidChange;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end
