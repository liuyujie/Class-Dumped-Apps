//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKSnackbarSuspensionToken-Protocol.h"

@class NSString;
@protocol MDCSnackbarSuspensionToken;

@interface GDKSnackbarSuspensionToken : NSObject <GDKSnackbarSuspensionToken>
{
    id <MDCSnackbarSuspensionToken> _mdcToken;
}

@property(readonly, nonatomic) id <MDCSnackbarSuspensionToken> mdcToken; // @synthesize mdcToken=_mdcToken;
- (void).cxx_destruct;
- (id)initWithMDCToken:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

