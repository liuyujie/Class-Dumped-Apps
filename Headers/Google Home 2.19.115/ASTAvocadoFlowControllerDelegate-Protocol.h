//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASTAvocadoFlowController, ASTAvocadoFlowResult, UINavigationController;

@protocol ASTAvocadoFlowControllerDelegate <NSObject>
- (void)avocadoFlowController:(ASTAvocadoFlowController *)arg1 didFinishWithPresentedNavigationController:(UINavigationController *)arg2 result:(ASTAvocadoFlowResult *)arg3;
- (void)avocadoFlowController:(ASTAvocadoFlowController *)arg1 didStartWithNavigationControllerToPresent:(UINavigationController *)arg2;
@end

