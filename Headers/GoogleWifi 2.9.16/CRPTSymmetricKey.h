//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate;

@interface CRPTSymmetricKey : NSObject
{
    NSData *_keyData;
    NSDate *_creationDate;
}

@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
- (void).cxx_destruct;
- (id)initWithCreationDate:(id)arg1;

@end

