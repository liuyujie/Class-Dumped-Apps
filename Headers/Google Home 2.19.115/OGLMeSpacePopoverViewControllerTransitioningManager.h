//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OGLPopoverViewControllerTransitioningManager.h"

@protocol OGLTheming;

@interface OGLMeSpacePopoverViewControllerTransitioningManager : OGLPopoverViewControllerTransitioningManager
{
    id <OGLTheming> _oglTheme;
    _Bool _chooseAnAccountHeader;
}

- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)initWithTheme:(id)arg1 chooseAnAccountHeader:(_Bool)arg2;

@end

