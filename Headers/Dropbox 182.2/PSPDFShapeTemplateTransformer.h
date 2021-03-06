//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PSPDFOverridable;

@interface PSPDFShapeTemplateTransformer : NSObject
{
    NSString *_shapeTemplateIdentifier;
    id <PSPDFOverridable> _delegate;
}

@property(nonatomic) __weak id <PSPDFOverridable> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *shapeTemplateIdentifier; // @synthesize shapeTemplateIdentifier=_shapeTemplateIdentifier;
- (void).cxx_destruct;
- (id)annotationByTransformingPoints:(struct NSArray *)arg1 pointSequences:(id)arg2 inBounds:(struct CGRect)arg3 pageInfo:(id)arg4 error:(id *)arg5;
- (id)initWithTemplateIdentifier:(id)arg1;
- (id)init;

@end

