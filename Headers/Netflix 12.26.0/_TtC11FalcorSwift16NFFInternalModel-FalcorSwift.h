//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/_TtC11FalcorSwift16NFFInternalModel.h>

@interface _TtC11FalcorSwift16NFFInternalModel (FalcorSwift)
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valuesForKeyPaths:(id)arg1 optimizedKeyPaths:(id)arg2 fillEmptyWithNull:(_Bool)arg3;
- (id)valuesForKeyPaths:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)mergeJSONDictionaryIntoModel:(id)arg1;
- (_Bool)deserializeCache:(id)arg1 error:(id *)arg2;
- (id)serializeCacheWithKeyPaths:(id)arg1 error:(id *)arg2;
- (id)callFunction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)callFunction:(id)arg1 fetchKeyPaths:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getKeyPath:(id)arg1 option:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getKeyPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getKeyPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getKeyPaths:(id)arg1 option:(long long)arg2 completion:(CDUnknownBlockType)arg3;
@end

