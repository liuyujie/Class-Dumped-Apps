//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WAPopupActionMenuSupport-Protocol.h"

@class NSArray, NSString, UIImageView, UILabel;

@interface WABizLocationTableViewCell : UITableViewCell <WAPopupActionMenuSupport>
{
    NSString *_placeholder;
    struct UIEdgeInsets _cellInsets;
    unsigned long long _style;
    UIImageView *_mapImageView;
    UILabel *_addressLabel;
    NSArray *_currentConstraints;
    struct CLLocationCoordinate2D _coordinate;
}

+ (_Bool)isCoordinate:(struct CLLocationCoordinate2D)arg1 equalsToCoordinate:(struct CLLocationCoordinate2D)arg2;
@property(copy, nonatomic) NSArray *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UIImageView *mapImageView; // @synthesize mapImageView=_mapImageView;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (void)performAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)shouldShowPopupActionMenu;
- (double)mapPreviewVerticalMarginForCurrentStyle;
- (void)disableEditing;
- (void)configureWithAddress:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)installConstraints;
- (id)initWithAddress:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 style:(unsigned long long)arg3 placeholderText:(id)arg4;

@end

