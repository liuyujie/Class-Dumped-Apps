//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSString;

@interface AWENewUserJourneyResponseModel : AWEBaseApiModel
{
    NSArray *_interestList;
    NSArray *_contentLanguages;
    NSString *_contentLangDialogTitle;
    NSString *_contentLangDialogText;
}

+ (id)contentLanguagesJSONTransformer;
+ (id)interestListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *contentLangDialogText; // @synthesize contentLangDialogText=_contentLangDialogText;
@property(copy, nonatomic) NSString *contentLangDialogTitle; // @synthesize contentLangDialogTitle=_contentLangDialogTitle;
@property(copy, nonatomic) NSArray *contentLanguages; // @synthesize contentLanguages=_contentLanguages;
@property(copy, nonatomic) NSArray *interestList; // @synthesize interestList=_interestList;
- (void).cxx_destruct;

@end

