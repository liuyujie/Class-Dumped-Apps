//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABKUtilityFunctions : NSObject
{
}

+ (id)localizedBrazeUIString:(id)arg1;
+ (id)getFormattedLocalizedStringForKey:(id)arg1 args:(id)arg2 bundle:(id)arg3 table:(id)arg4;
+ (id)getFormattedLocalizedStringForKey:(id)arg1 args:(id)arg2;
+ (id)getAppVersion;
+ (Class)getIAMUIControllerClass;
+ (void)clearSDWebImageCache;
+ (Class)getSDWebImageProxyClass;
+ (id)tryGetIsAdTrackingEnabled;
+ (id)tryGetIDFAString;
+ (id)sanitizedDatePropertiesToString:(id)arg1;
+ (void)printRequestDetails:(id)arg1;
+ (void)synchronizeUserDefaultWithKey:(id)arg1 value:(id)arg2;
+ (_Bool)optionalProperty:(id)arg1 isEqualToOptionalProperty:(id)arg2;
+ (id)queryParameterDictionaryFromURL:(id)arg1;
+ (void)saveNonZeroPositiveInteger:(long long)arg1 withKey:(id)arg2 inDictionary:(id)arg3;
+ (void)initializeDateFormatter;
+ (id)dateFromString:(id)arg1;
+ (id)stringFromDate:(id)arg1;
+ (id)sanitizedEventPropertiesWithEventProperties:(id)arg1;
+ (id)ensureAppboyFieldLength:(id)arg1 withFieldName:(id)arg2;
+ (_Bool)dictionary:(id)arg1 hasValidNonEmptyObjectsForKeys:(id)arg2;
+ (_Bool)objectIsValidAndNotEmpty:(id)arg1;
+ (void)setObjectIfNotNullOrEmpty:(id)arg1 forKey:(id)arg2 inMutableDictionary:(id)arg3;
+ (long long)hexIntegerFromColor:(id)arg1;
+ (id)colorFromHexInteger:(long long)arg1;
+ (id)getURIFromString:(id)arg1;
+ (id)diffDictionary:(id)arg1 againstDictionary:(id)arg2;

@end

