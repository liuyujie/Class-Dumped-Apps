//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol DBPhotoKitNullByteStrippingLogger
- (void)nullByteStripUnsupportedFileTypePaddedWithNullBytesForExtension:(NSString *)arg1 numNullBytesFound:(unsigned long long)arg2;
- (void)nullByteStripCompleted:(_Bool)arg1 duration:(double)arg2 fileExtension:(NSString *)arg3 fileSizeBeforeStrip:(unsigned long long)arg4 fileSizeAfterStrip:(unsigned long long)arg5;
- (void)nullByteStripUnsupportedFileExtension:(NSString *)arg1;
- (void)nullByteStripFailedOnSegment:(NSString *)arg1 fileExtension:(NSString *)arg2;
@end

