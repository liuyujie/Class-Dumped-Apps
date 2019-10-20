//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AWEModernFeedCellManager : NSObject
{
    NSMutableDictionary *_registeredPatterns;
}

+ (id)accessoryTypeForCellType:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *registeredPatterns; // @synthesize registeredPatterns=_registeredPatterns;
- (void).cxx_destruct;
- (id)allTypes;
- (Class)controllerClassForType:(id)arg1;
- (id)lazyLoadedRegisteredPatterns;
- (id)dynamicCellTypes;
- (id)cellTypeForItem:(id)arg1;
- (void)registerControllerClass:(Class)arg1 forStaticType:(id)arg2;
- (void)registerControllerClass:(Class)arg1 itemPredicateBlock:(CDUnknownBlockType)arg2 isStatic:(_Bool)arg3;
- (void)registerControllerClass:(Class)arg1 itemPredicateBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end
