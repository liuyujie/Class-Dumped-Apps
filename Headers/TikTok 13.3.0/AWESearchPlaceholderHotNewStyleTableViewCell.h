//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEHotWordRegularStyleViewController, UIViewController;

@interface AWESearchPlaceholderHotNewStyleTableViewCell : UITableViewCell
{
    UIViewController *_parentViewController;
    AWEHotWordRegularStyleViewController *_newContentViewController;
    CDUnknownBlockType _tapBlock;
    CDUnknownBlockType _refreshWordBlock;
    long long _source;
}

+ (id)reuseIdentifier;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(copy, nonatomic) CDUnknownBlockType refreshWordBlock; // @synthesize refreshWordBlock=_refreshWordBlock;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) AWEHotWordRegularStyleViewController *newContentViewController; // @synthesize newContentViewController=_newContentViewController;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void).cxx_destruct;
- (void)configureUI;
- (void)refreshContent;
- (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
