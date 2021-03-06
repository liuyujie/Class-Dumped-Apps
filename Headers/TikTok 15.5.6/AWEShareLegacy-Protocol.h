//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEShareContext, NSNumber, NSString, UIImage, UIView;

@protocol AWEShareLegacy <NSObject>
+ (void)shortenShareLink:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
+ (_Bool)shouldShortenShareURLWithShareType:(long long)arg1;
+ (void)shareByType:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
+ (void)shareWithContext:(AWEShareContext *)arg1 type:(long long)arg2 prepare:(void (^)(long long, AWEShareContext *, void (^)(NSError *)))arg3 completion:(void (^)(_Bool, NSError *))arg4;
+ (UIImage *)shareItemImageForType:(long long)arg1;
+ (NSString *)sharePlatformForType:(long long)arg1;
+ (NSString *)titleForType:(long long)arg1;
+ (long long)typeForLabel:(NSString *)arg1;
+ (NSString *)labelForType:(long long)arg1;
+ (_Bool)shouldDisableTencentSDKShareWithShareType:(long long)arg1 targetType:(unsigned long long)arg2 awemeMediaType:(long long)arg3;
+ (_Bool)is3rdPartyPlatform:(long long)arg1;
+ (_Bool)shareZaloAvailable;
+ (_Bool)shareSinaWeiboAvailable;
+ (_Bool)shareQQAvailable;
+ (_Bool)shareWeChatAvailable;
@property(copy, nonatomic) CDUnknownBlockType prepareBlock;
@property(copy, nonatomic) CDUnknownBlockType generalChannelFilter;
@property(readonly, nonatomic) AWEShareContext *legacyContext;
- (_Bool)isActive;
- (void)dismissPanel;
- (void)dismissPanel:(_Bool)arg1;
- (void)showPanelWithContext:(AWEShareContext *)arg1 onView:(UIView *)arg2 coverURLString:(NSString *)arg3 enableMask:(_Bool)arg4 prepare:(void (^)(long long, AWEShareContext *, void (^)(NSError *)))arg5 hideOptions:(long long)arg6 hideFilter:(_Bool (^)(AWEShareChannel *))arg7 completion:(void (^)(unsigned long long, NSError *))arg8;
- (void)showPanelWithContext:(AWEShareContext *)arg1 coverURLString:(NSString *)arg2 enableMask:(_Bool)arg3 prepare:(void (^)(long long, AWEShareContext *, void (^)(NSError *)))arg4 hideOptions:(long long)arg5 hideFilter:(_Bool (^)(AWEShareChannel *))arg6 completion:(void (^)(unsigned long long, NSError *))arg7;
- (void)shareWithContext:(AWEShareContext *)arg1 type:(long long)arg2;
- (void)shareWithContext:(AWEShareContext *)arg1 coverURLString:(NSString *)arg2 prepare:(void (^)(long long, AWEShareContext *, void (^)(NSError *)))arg3 type:(long long)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (void)shareWithContext:(AWEShareContext *)arg1 coverURLString:(NSString *)arg2 prepare:(void (^)(long long, AWEShareContext *, void (^)(NSError *)))arg3 type:(long long)arg4;
- (NSNumber *)isShareWithReflowPage:(long long)arg1;
@end

