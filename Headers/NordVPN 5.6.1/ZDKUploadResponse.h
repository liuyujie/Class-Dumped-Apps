//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SupportProvidersSDK/NSCopying-Protocol.h>

@class NSString, ZDKAttachment;

@interface ZDKUploadResponse : NSObject <NSCopying>
{
    NSString *_uploadToken;
    ZDKAttachment *_attachment;
}

@property(retain, nonatomic) ZDKAttachment *attachment; // @synthesize attachment=_attachment;
@property(copy, nonatomic) NSString *uploadToken; // @synthesize uploadToken=_uploadToken;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDict:(id)arg1;

@end

