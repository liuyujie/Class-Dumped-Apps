//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNViewControllerEventObserver-Protocol.h>

@interface T1ScrollDistanceLogger : NSObject <TFNViewControllerEventObserver>
{
    // Error parsing type: , name: dataViewController
    // Error parsing type: , name: lastOffset
    // Error parsing type: , name: totalDistance
    // Error parsing type: , name: isUserScrolling
}

- (void).cxx_destruct;
- (id)init;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewControllerApplicationWillResignActive:(id)arg1;
- (void)viewControllerViewWillFullyDisappear:(id)arg1;
- (id)initWithDataViewController:(id)arg1;

@end
