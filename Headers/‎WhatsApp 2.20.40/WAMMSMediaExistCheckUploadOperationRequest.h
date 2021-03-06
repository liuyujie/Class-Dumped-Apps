//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, WAMMSMediaExistCheckExistingAsset, WAMMSMediaTransferOperationAsset;

@interface WAMMSMediaExistCheckUploadOperationRequest : NSObject <NSCopying>
{
    _Bool _isForward;
    _Bool _userInitiated;
    NSString *_identifier;
    NSMutableDictionary *_userInfo;
    unsigned long long _retryCount;
    NSArray *_scanLengths;
    WAMMSMediaTransferOperationAsset *_transferAsset;
    WAMMSMediaExistCheckExistingAsset *_existingAsset;
}

@property(readonly, nonatomic) WAMMSMediaExistCheckExistingAsset *existingAsset; // @synthesize existingAsset=_existingAsset;
@property(readonly, nonatomic) WAMMSMediaTransferOperationAsset *transferAsset; // @synthesize transferAsset=_transferAsset;
@property(copy, nonatomic) NSArray *scanLengths; // @synthesize scanLengths=_scanLengths;
@property(nonatomic) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(nonatomic) _Bool isForward; // @synthesize isForward=_isForward;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long mediaType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 transferAsset:(id)arg2 existingAsset:(id)arg3;
- (id)initForVideoExistCheckWithIdentifier:(id)arg1 existingAsset:(id)arg2;
- (id)initForRegularExistCheckWithIdentifier:(id)arg1 transferAsset:(id)arg2;

@end

