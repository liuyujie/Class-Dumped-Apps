//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IBGAnnotationStack, NSMutableArray, UIImage;

@interface IBGAnnotationOriginator : NSObject
{
    UIImage *_bluredImage;
    NSMutableArray *_annotationsView;
    NSMutableArray *_annotationsState;
    NSMutableArray *_annotationsPreviousState;
    IBGAnnotationStack *_annotationStack;
    UIImage *_screenshotImage;
}

@property(retain, nonatomic) UIImage *screenshotImage; // @synthesize screenshotImage=_screenshotImage;
@property(retain, nonatomic) IBGAnnotationStack *annotationStack; // @synthesize annotationStack=_annotationStack;
@property(retain, nonatomic) NSMutableArray *annotationsPreviousState; // @synthesize annotationsPreviousState=_annotationsPreviousState;
@property(retain, nonatomic) NSMutableArray *annotationsState; // @synthesize annotationsState=_annotationsState;
@property(retain, nonatomic) NSMutableArray *annotationsView; // @synthesize annotationsView=_annotationsView;
@property(retain, nonatomic) UIImage *bluredImage; // @synthesize bluredImage=_bluredImage;
- (void).cxx_destruct;
- (long long)magnifyAnnotationViewsCount;
- (long long)getAnnotationViewsCount;
- (id)annotationViewsSortedByZPositioon;
- (void)removeAnnotationView:(id)arg1;
- (void)annotiationViewHightLighted:(id)arg1;
- (void)undoAnnotaitonView;
- (void)saveAnnotationView:(id)arg1 withState:(id)arg2;
- (id)screenshotWithSize:(struct CGSize)arg1 ofUnderlayingViewsForAnnotationView:(id)arg2;
- (void)updateAnnotationViewsWithAnnotationView:(id)arg1;
- (void)updateAnnotationView:(id)arg1 withState:(id)arg2;
- (void)pushAnnotationView:(id)arg1 withState:(id)arg2;
- (id)initWithAnnotationStack:(id)arg1 andScreenshot:(id)arg2;

@end

