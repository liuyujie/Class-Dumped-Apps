//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFRenderRequest.h>

@class NSArray, NSDictionary, PSPDFDocument, PSPDFRenderOptions;

@interface PSPDFMutableRenderRequest : PSPDFRenderRequest
{
}

@property(copy, nonatomic) NSDictionary *userInfo; // @dynamic userInfo;
@property(nonatomic) long long cachePolicy; // @dynamic cachePolicy;
@property(copy, nonatomic) PSPDFRenderOptions *options; // @dynamic options;
@property(copy, nonatomic) NSArray *annotations; // @dynamic annotations;
@property(nonatomic) double imageScale; // @dynamic imageScale;
@property(nonatomic) struct CGRect pdfRect; // @dynamic pdfRect;
@property(nonatomic) struct CGSize imageSize; // @dynamic imageSize;
@property(nonatomic) unsigned long long pageIndex; // @dynamic pageIndex;
@property(retain, nonatomic) PSPDFDocument *document; // @dynamic document;

@end

