//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LightboxImageView.h"

@protocol TheatreImageViewDelegate;

@interface TheatreImageView : LightboxImageView
{
    id <TheatreImageViewDelegate> _delegate;
}

@property(nonatomic) __weak id <TheatreImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapLoader:(id)arg1;
- (void)setScrollViewZoom:(double)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;

@end

