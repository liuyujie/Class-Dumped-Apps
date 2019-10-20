//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EffectCanvasHandler, NSDictionary, NSString;

@interface IESEffectVideoAnimatedRenderer : NSObject
{
    void *_engineHandler;
    EffectCanvasHandler *_canvasObject;
    NSDictionary *_canvasHandlerMap;
    NSString *_identifier;
}

@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSDictionary *canvasHandlerMap; // @synthesize canvasHandlerMap=_canvasHandlerMap;
@property(nonatomic) EffectCanvasHandler *canvasObject; // @synthesize canvasObject=_canvasObject;
@property(nonatomic) void *engineHandler; // @synthesize engineHandler=_engineHandler;
- (void).cxx_destruct;
- (void)checkEffectError:(int)arg1 msg:(id)arg2;
- (void)destoryCanvasHandlerForKey:(id)arg1;
- (void)activeCanvasHandlerForKey:(id)arg1 animatedInfo:(id)arg2;
- (void)updateCanvasAnimatedInfo:(id)arg1;
- (void)updateVideoAnimatedParams:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCanvasSize:(struct CGSize)arg1 identifier:(id)arg2;
- (id)initWithCanvasSize:(struct CGSize)arg1;

@end
