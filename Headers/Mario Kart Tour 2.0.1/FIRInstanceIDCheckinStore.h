//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRInstanceIDAuthKeychain, FIRInstanceIDBackupExcludedPlist, NSString;

@interface FIRInstanceIDCheckinStore : NSObject
{
    FIRInstanceIDBackupExcludedPlist *_plist;
    FIRInstanceIDAuthKeychain *_keychain;
}

@property(retain, nonatomic) FIRInstanceIDAuthKeychain *keychain; // @synthesize keychain=_keychain;
@property(retain, nonatomic) FIRInstanceIDBackupExcludedPlist *plist; // @synthesize plist=_plist;
- (void).cxx_destruct;
- (_Bool)migrateCheckinItemIfNeeded;
- (id)cachedCheckinPreferences;
- (_Bool)removeCheckinPreferencesWithError:(id *)arg1;
- (_Bool)saveCheckinPreferences:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *bundleIdentifierForKeychainAccount;
- (_Bool)hasCheckinPlist;
- (id)initWithCheckinPlist:(id)arg1 keychain:(id)arg2;
- (id)initWithCheckinPlistFileName:(id)arg1 applicationSupportSubDirectory:(id)arg2;

@end

