//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGPlainTableViewController.h>

@class IGTableLayoutSpec, IGUserSession, NSArray, NSString;

@interface IGChangeLanguageViewController : IGPlainTableViewController
{
    IGUserSession *_userSession;
    IGTableLayoutSpec *_tableInterface;
    NSArray *_locales;
    NSString *_currentLanguage;
}

+ (void)relaunchApp;
@property(readonly, nonatomic) NSString *currentLanguage; // @synthesize currentLanguage=_currentLanguage;
@property(readonly, nonatomic) NSArray *locales; // @synthesize locales=_locales;
- (id)tableInterface;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)_logLanguageChange:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_prepareView;
- (void)_didTapBackButton;
- (_Bool)_isCurrentLocale:(id)arg1;
- (id)_localeForIndexPath:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

@end

