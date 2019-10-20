//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEPhotoMovieManager : NSObject
{
}

+ (long long)audioRepeatCountForVideo:(id)arg1 audioAsset:(id)arg2;
+ (struct CGSize)defaultPhotoMovieSize;
+ (void)saveChosenImages:(id)arg1 forModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)updateModel:(id)arg1 withMusicList:(id)arg2 fileURL:(id)arg3;
+ (void)fetchMusicListForModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)buildModelForPhotoMovieWithOriginalModel:(id)arg1;
+ (id)URLsForImagesOfPhotoMovieTaskID:(id)arg1;
+ (id)photoMovieResourceFolderForTaskID:(id)arg1 error:(id *)arg2;
+ (id)imagesForTransitionWithImages:(id)arg1;
+ (id)transitionForType:(long long)arg1;
+ (id)horizontalTransition;
+ (id)verticalTransition;
+ (id)defaultTransitionType;
+ (void)fetchTransitionTypesWithCompletion:(CDUnknownBlockType)arg1;

@end
