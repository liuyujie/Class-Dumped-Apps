//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNCircularCountProgressView;

@protocol TFNCircularCountProgressDataSource <NSObject>
- (long long)remainingCountForWarningDisplayInProgressView:(TFNCircularCountProgressView *)arg1;
- (long long)remainingCountForProgressView:(TFNCircularCountProgressView *)arg1;
- (long long)currentCountForProgressView:(TFNCircularCountProgressView *)arg1;
@end
