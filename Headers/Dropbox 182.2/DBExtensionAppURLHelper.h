//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBFirstPartyAppManagerURLHelper-Protocol.h>

@class NSExtensionContext;

@interface DBExtensionAppURLHelper : NSObject <DBFirstPartyAppManagerURLHelper>
{
    NSExtensionContext *_extensionContext;
}

- (void).cxx_destruct;
- (void)openURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canOpenURL:(id)arg1;
@property(readonly) unsigned long long capabilities;
- (id)initWithExtensionContext:(id)arg1;

@end

