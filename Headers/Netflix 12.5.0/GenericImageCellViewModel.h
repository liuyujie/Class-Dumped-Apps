//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface GenericImageCellViewModel : NSObject
{
    _Bool _shrinkOnSelection;
    _Bool _isSelected;
    int _highlightStateType;
    NSNumber *_modelId;
    NSString *_imageUrl;
    NSString *_selectedText;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool shrinkOnSelection; // @synthesize shrinkOnSelection=_shrinkOnSelection;
@property(retain, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) int highlightStateType; // @synthesize highlightStateType=_highlightStateType;
@property(retain, nonatomic) NSNumber *modelId; // @synthesize modelId=_modelId;
- (void).cxx_destruct;

@end
