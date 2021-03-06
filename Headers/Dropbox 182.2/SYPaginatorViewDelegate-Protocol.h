//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SYPaginatorView, UIView;

@protocol SYPaginatorViewDelegate <NSObject>

@optional
- (void)paginatorViewDidEndPaging:(SYPaginatorView *)arg1;
- (void)paginatorView:(SYPaginatorView *)arg1 didScrollToView:(UIView *)arg2 atIndex:(long long)arg3 fromIndex:(long long)arg4;
- (void)paginatorView:(SYPaginatorView *)arg1 userWillScrollToView:(UIView *)arg2 atIndex:(long long)arg3;
- (void)paginatorView:(SYPaginatorView *)arg1 willScrollToView:(UIView *)arg2 atIndex:(long long)arg3;
@end

