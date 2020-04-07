//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class HUBComponentRegistry, HUBContainerView;
@protocol HUBComponentEventHandler, HUBComponentLayoutManager, HUBImageLoaderFactory;

@interface HUBViewController : UIViewController
{
    HUBComponentRegistry *_componentRegistry;
    id <HUBComponentLayoutManager> _componentLayoutManager;
    id <HUBImageLoaderFactory> _imageLoaderFactory;
    id <HUBComponentEventHandler> _componentEventHandler;
}

@property(retain, nonatomic) id <HUBComponentEventHandler> componentEventHandler; // @synthesize componentEventHandler=_componentEventHandler;
@property(readonly, nonatomic) id <HUBImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) id <HUBComponentLayoutManager> componentLayoutManager; // @synthesize componentLayoutManager=_componentLayoutManager;
@property(readonly, nonatomic) HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)loadView;
- (id)initWithComponentRegistry:(id)arg1 componentLayoutManager:(id)arg2 imageLoaderFactory:(id)arg3 commandHandler:(id)arg4;

// Remaining properties
@property(retain, nonatomic) HUBContainerView *view; // @dynamic view;

@end
