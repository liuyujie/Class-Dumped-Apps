//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGEPGShowDataContext.h"

@class NSString;

@interface SGEPGShowInlineDetailsDataContext : SGEPGShowDataContext
{
    _Bool _isRepeat;
    NSString *_episodeTitleString;
    NSString *_descriptionString;
    NSString *_genreString;
    NSString *_parentalRatingString;
    NSString *_showtimeString;
    NSString *_parentSeriesId;
    NSString *_contentType;
    NSString *_channelId;
}

+ (id)createFromSGEPGShowDataContext:(id)arg1;
@property(nonatomic) _Bool isRepeat; // @synthesize isRepeat=_isRepeat;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *parentSeriesId; // @synthesize parentSeriesId=_parentSeriesId;
@property(retain, nonatomic) NSString *showtimeString; // @synthesize showtimeString=_showtimeString;
@property(retain, nonatomic) NSString *parentalRatingString; // @synthesize parentalRatingString=_parentalRatingString;
@property(retain, nonatomic) NSString *genreString; // @synthesize genreString=_genreString;
@property(retain, nonatomic) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(retain, nonatomic) NSString *episodeTitleString; // @synthesize episodeTitleString=_episodeTitleString;
- (void).cxx_destruct;
- (_Bool)shouldHideContentAsAdultContent;
- (_Bool)tuneToShow;
- (void)navigateToFullDetails;
- (void)loadAdditionalData;
- (void)updateWithProgramData;

// Remaining properties
@property(nonatomic) _Bool isNotAvailable; // @dynamic isNotAvailable;

@end

