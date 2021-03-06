//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGDictionaryProtocol-Protocol.h>

@class IBGFeatureRequestModel, NSDate, NSString;

@interface IBGFeatureCommentModel : NSObject <IBGDictionaryProtocol>
{
    _Bool _isAdmin;
    _Bool _isExpanded;
    int _identifier;
    int _status;
    NSString *_avatarURL;
    NSString *_body;
    NSDate *_date;
    NSString *_commenterName;
    IBGFeatureRequestModel *_feature;
    unsigned long long _newStatus;
    unsigned long long _type;
    NSString *_colorString;
}

+ (id)mapFromMOArray:(id)arg1;
+ (id)mapFromArray:(id)arg1;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(copy, nonatomic) NSString *colorString; // @synthesize colorString=_colorString;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long newStatus; // @synthesize newStatus=_newStatus;
@property(nonatomic) _Bool isAdmin; // @synthesize isAdmin=_isAdmin;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) IBGFeatureRequestModel *feature; // @synthesize feature=_feature;
@property(copy, nonatomic) NSString *commenterName; // @synthesize commenterName=_commenterName;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (double)valueInSecondsFromValue:(double)arg1;
- (id)textForStatus;
- (id)toDictionary;
- (id)initFromMO:(id)arg1;
- (id)initFromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

