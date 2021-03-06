//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKFileContentManaging-Protocol.h"

@class NSString;
@protocol GDKFileMutating;

@interface GDKDefaultFileContentManager : NSObject <GDKFileContentManaging>
{
    id <GDKFileMutating> _fileMutator;
}

@property(readonly, nonatomic) id <GDKFileMutating> fileMutator; // @synthesize fileMutator=_fileMutator;
- (void).cxx_destruct;
- (void)updateDownloadProgress:(long long)arg1 forFile:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateDescriptor:(id)arg1 forFile:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)descriptorForFile:(id)arg1;
- (int)offlineReason:(id)arg1;
- (id)initWithFileMutator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

