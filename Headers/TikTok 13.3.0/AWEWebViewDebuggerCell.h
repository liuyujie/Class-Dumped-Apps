//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface AWEWebViewDebuggerCell : UITableViewCell
{
    UILabel *_urlLabel;
    UILabel *_logLabel;
}

+ (id)identifier;
@property(retain, nonatomic) UILabel *logLabel; // @synthesize logLabel=_logLabel;
@property(retain, nonatomic) UILabel *urlLabel; // @synthesize urlLabel=_urlLabel;
- (void).cxx_destruct;
- (void)configWithData:(id)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
