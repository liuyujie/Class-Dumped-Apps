//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTARCameraCommand.h>

@class NSArray, NSString;

@interface YTARCameraCommandVELog : YTARCameraCommand
{
    int _veType;
    NSString *_effectID;
    NSArray *_activeEffects;
}

@property(retain, nonatomic) NSArray *activeEffects; // @synthesize activeEffects=_activeEffects;
@property(retain, nonatomic) NSString *effectID; // @synthesize effectID=_effectID;
@property(nonatomic) int veType; // @synthesize veType=_veType;
- (void).cxx_destruct;
- (id)initWithParameterString:(id)arg1;

@end

