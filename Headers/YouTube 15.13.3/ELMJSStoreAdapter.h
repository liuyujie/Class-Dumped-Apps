//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/ELMJSStore-Protocol.h>

@protocol ELMStore;

@interface ELMJSStoreAdapter : NSObject <ELMJSStore>
{
    id <ELMStore> _store;
}

- (void).cxx_destruct;
- (void)set:(id)arg1 value:(id)arg2;
- (id)get:(id)arg1;
- (id)initWithStore:(id)arg1;

@end

