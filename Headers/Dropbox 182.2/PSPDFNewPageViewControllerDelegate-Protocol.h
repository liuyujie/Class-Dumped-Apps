//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/NSObject-Protocol.h>
#import <PSPDFKitUI/PSPDFOverridable-Protocol.h>

@class PSPDFNewPageConfiguration, PSPDFNewPageViewController;

@protocol PSPDFNewPageViewControllerDelegate <NSObject, PSPDFOverridable>
- (void)newPageController:(PSPDFNewPageViewController *)arg1 didFinishSelectingConfiguration:(PSPDFNewPageConfiguration *)arg2 pageCount:(unsigned long long)arg3;
@end

