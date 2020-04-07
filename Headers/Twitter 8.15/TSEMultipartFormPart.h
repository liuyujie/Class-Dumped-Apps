//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface TSEMultipartFormPart : NSObject
{
    NSString *_name;
    NSData *_data;
    NSString *_contentType;
    NSString *_filename;
    NSString *_file;
    NSString *_computeMD5Name;
    struct _NSRange _fileRange;
}

@property(copy, nonatomic) NSString *computeMD5Name; // @synthesize computeMD5Name=_computeMD5Name;
@property(nonatomic) struct _NSRange fileRange; // @synthesize fileRange=_fileRange;
@property(copy, nonatomic) NSString *file; // @synthesize file=_file;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)init;

@end
