//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpeedTestEngine/EncodableObject.h>

@class NSString;

@interface ReportDisplayProvider : EncodableObject
{
    NSString *_displayProvider;
    long long _providerSource;
}

@property(nonatomic) long long providerSource; // @synthesize providerSource=_providerSource;
@property(copy, nonatomic) NSString *displayProvider; // @synthesize displayProvider=_displayProvider;
- (void).cxx_destruct;
- (id)initWithDisplayProvider:(id)arg1 providerSource:(long long)arg2;

@end

