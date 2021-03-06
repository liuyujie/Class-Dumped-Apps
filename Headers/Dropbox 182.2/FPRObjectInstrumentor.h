//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/FPRInstrument.h>

@class GULObjectSwizzler;

@interface FPRObjectInstrumentor : FPRInstrument
{
    GULObjectSwizzler *_objectSwizzler;
    _Bool _hasModifications;
    id _instrumentedObject;
}

@property(nonatomic) _Bool hasModifications; // @synthesize hasModifications=_hasModifications;
@property(nonatomic) __weak id instrumentedObject; // @synthesize instrumentedObject=_instrumentedObject;
- (void).cxx_destruct;
- (void)swizzle;
- (void)copySelector:(SEL)arg1 fromClass:(Class)arg2 isClassSelector:(_Bool)arg3;
- (id)initWithObject:(id)arg1;
- (id)init;

@end

