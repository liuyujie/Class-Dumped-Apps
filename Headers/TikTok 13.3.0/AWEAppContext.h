//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface AWEAppContext : NSObject
{
    NSMapTable *_objectRegistry;
    NSMapTable *_classRegistry;
    NSMapTable *_providerRegistry;
}

+ (id)appContext;
@property(retain, nonatomic) NSMapTable *providerRegistry; // @synthesize providerRegistry=_providerRegistry;
@property(retain, nonatomic) NSMapTable *classRegistry; // @synthesize classRegistry=_classRegistry;
@property(retain, nonatomic) NSMapTable *objectRegistry; // @synthesize objectRegistry=_objectRegistry;
- (void).cxx_destruct;
- (id)objectForProtocol:(id)arg1;
- (_Bool)bind:(id)arg1 forProtocol:(id)arg2;
- (_Bool)bindClass:(Class)arg1 forProtocol:(id)arg2;
- (_Bool)bindProvider:(CDUnknownBlockType)arg1 forProtocol:(id)arg2;
- (id)init;

@end
