//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DropboxExtensions/DBMessageModel.h>

@class NSString;

@interface DBMessageButton : DBMessageModel
{
    // Error parsing type: , name: style
    // Error parsing type: , name: title
    // Error parsing type: , name: isEnabled
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithStyle:(long long)arg1 title:(id)arg2;
- (id)initWithStyle:(long long)arg1 title:(id)arg2 isEnabled:(_Bool)arg3;
@property(nonatomic, readonly) _Bool isEnabled; // @synthesize isEnabled;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) long long style; // @synthesize style;

@end

