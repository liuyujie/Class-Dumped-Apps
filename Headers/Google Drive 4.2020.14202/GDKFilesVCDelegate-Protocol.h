//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDKSort, NSError, NSString, UIViewController;
@protocol GDKFilesVC;

@protocol GDKFilesVCDelegate <NSObject>

@optional
- (void)filesVC:(UIViewController<GDKFilesVC> *)arg1 didRenderWithError:(NSError *)arg2;
- (void)filesVC:(UIViewController<GDKFilesVC> *)arg1 didChangeSort:(GDKSort *)arg2 forDataSourceWithIdentifier:(NSString *)arg3;
- (void)filesVCDidDisappear:(UIViewController<GDKFilesVC> *)arg1;
- (void)filesVCDidAppear:(UIViewController<GDKFilesVC> *)arg1;
- (void)filesVCWillAppear:(UIViewController<GDKFilesVC> *)arg1;
@end

