//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PDFCAnnotation, PSPDFPropertyMap;

@interface PSPDFCoreAnnotation : NSObject
{
    PSPDFPropertyMap *_propertyMap;
    shared_ptr_5a692f1e _baseAnnotation;
}

+ (void)removeAndDetachFromCore:(id)arg1;
+ (id)createCoreAnnotationWithInstantJSON:(id)arg1 documentProvider:(id)arg2 error:(id *)arg3;
+ (id)createCoreAnnotationWithPSPDFAnnotation:(id)arg1 accessQueue:(id)arg2 shouldSave:(_Bool)arg3;
+ (void)initialize;
@property(readonly, nonatomic) shared_ptr_5a692f1e baseAnnotation; // @synthesize baseAnnotation=_baseAnnotation;
@property(readonly, nonatomic) PSPDFPropertyMap *propertyMap; // @synthesize propertyMap=_propertyMap;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)attachBinaryInstantJSONAttachmentFromDataProvider:(id)arg1 mimeType:(id)arg2 error:(id *)arg3;
- (id)writeBinaryInstantJSONAttachmentToDataSink:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasBinaryInstantJSONAttachment;
- (int)intForKey:(id)arg1 fallbackValue:(int)arg2;
- (void)setInt:(int)arg1 forKey:(id)arg2 includeInInstantJSON:(_Bool)arg3;
- (id)stringForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2 includeInInstantJSON:(_Bool)arg3;
- (_Bool)boolForKey:(id)arg1 fallbackValue:(_Bool)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2 includeInInstantJSON:(_Bool)arg3;
- (void)clearValueForKey:(id)arg1;
- (id)generateInstantJSONWithDocumentProvider:(id)arg1 error:(id *)arg2;
- (_Bool)attachToDocumentProvider:(id)arg1 onPage:(unsigned long long)arg2 error:(id *)arg3;
@property(readonly, nonatomic) PDFCAnnotation *djinniAnnotation;
@property(readonly, nonatomic) long long annotationID;
@property(readonly, nonatomic) NSString *apStreamImageResource;
@property(readonly, nonatomic) NSString *assetResource;
@property(readonly, nonatomic) _Bool hasAppearanceStream;
@property(readonly, nonatomic) NSString *annotationTypeString;
- (_Bool)attachAndSyncAnnotationToCore:(id)arg1 withOption:(unsigned long long)arg2 atIndex:(id)arg3 error:(id *)arg4;
- (id)initWithPDFCAnnotation:(id)arg1 accessQueue:(id)arg2;
- (id)initWithBaseAnnotation:(const nn_d8c5fc0d *)arg1 accessQueue:(id)arg2;
- (id)init;

@end

