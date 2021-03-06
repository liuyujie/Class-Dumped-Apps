//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTSettingsUIAdapter.h"

#import "ASTMenuTextEntryDelegate-Protocol.h"
#import "ASTSettingsLocationInputViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ASTMenuIconStreamItem, ASTMenuTextEntryStreamItem, ASTSettingsFooterView, ASTThemableAlertView, ASTUIFamilyMemberProfile_Relationship, ASTUIPeopleMember, NSString, UIDatePicker, UITableView;

@interface ASTContactDetailsUIAdapter : ASTSettingsUIAdapter <ASTMenuTextEntryDelegate, ASTSettingsLocationInputViewControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isLongTailRelationship;
    _Bool _showsContactSharingSwitch;
    _Bool _removeBirthday;
    _Bool _removeAddress;
    _Bool _removeRelationship;
    long long _currentButtonIndex;
    ASTUIPeopleMember *_person;
    ASTMenuIconStreamItem *_relationshipItem;
    UITableView *_relationshipTableView;
    ASTThemableAlertView *_relationshipSelectionView;
    UIDatePicker *_datePicker;
    ASTMenuIconStreamItem *_birthdayItem;
    ASTMenuTextEntryStreamItem *_nicknameItem;
    ASTMenuIconStreamItem *_addressItem;
    ASTThemableAlertView *_birthdaySelectionView;
    ASTUIFamilyMemberProfile_Relationship *_relationship;
    ASTSettingsFooterView *_footerView;
    long long _day;
    long long _month;
    long long _year;
    ASTUIFamilyMemberProfile_Relationship *_longTailRelationship;
    NSString *_address;
    NSString *_nickname;
    unsigned long long _sharedContact;
}

@property(nonatomic) _Bool removeRelationship; // @synthesize removeRelationship=_removeRelationship;
@property(nonatomic) _Bool removeAddress; // @synthesize removeAddress=_removeAddress;
@property(nonatomic) _Bool removeBirthday; // @synthesize removeBirthday=_removeBirthday;
@property(nonatomic) _Bool showsContactSharingSwitch; // @synthesize showsContactSharingSwitch=_showsContactSharingSwitch;
@property(nonatomic) unsigned long long sharedContact; // @synthesize sharedContact=_sharedContact;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) ASTUIFamilyMemberProfile_Relationship *longTailRelationship; // @synthesize longTailRelationship=_longTailRelationship;
@property(nonatomic) _Bool isLongTailRelationship; // @synthesize isLongTailRelationship=_isLongTailRelationship;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(nonatomic) long long month; // @synthesize month=_month;
@property(nonatomic) long long day; // @synthesize day=_day;
@property(retain, nonatomic) ASTSettingsFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) ASTUIFamilyMemberProfile_Relationship *relationship; // @synthesize relationship=_relationship;
@property(retain, nonatomic) ASTThemableAlertView *birthdaySelectionView; // @synthesize birthdaySelectionView=_birthdaySelectionView;
@property(retain, nonatomic) ASTMenuIconStreamItem *addressItem; // @synthesize addressItem=_addressItem;
@property(retain, nonatomic) ASTMenuTextEntryStreamItem *nicknameItem; // @synthesize nicknameItem=_nicknameItem;
@property(retain, nonatomic) ASTMenuIconStreamItem *birthdayItem; // @synthesize birthdayItem=_birthdayItem;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) ASTThemableAlertView *relationshipSelectionView; // @synthesize relationshipSelectionView=_relationshipSelectionView;
@property(retain, nonatomic) UITableView *relationshipTableView; // @synthesize relationshipTableView=_relationshipTableView;
@property(retain, nonatomic) ASTMenuIconStreamItem *relationshipItem; // @synthesize relationshipItem=_relationshipItem;
@property(retain, nonatomic) ASTUIPeopleMember *person; // @synthesize person=_person;
@property(nonatomic) long long currentButtonIndex; // @synthesize currentButtonIndex=_currentButtonIndex;
- (void).cxx_destruct;
- (void)textEntryItemWithUUID:(id)arg1 didEndEditingWithText:(id)arg2;
- (void)textEntryItemWithUUID:(id)arg1 editingWithText:(id)arg2;
- (void)locationInputViewControllerDidTapCancelButton;
- (void)locationInputViewController:(id)arg1 didChangeLocation:(id)arg2 placeID:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)saveChangeForContact;
- (void)removePerson;
- (void)showDeletionAlert;
- (id)menuIconItemWithTitle:(id)arg1 UUID:(id)arg2 imageFilePath:(id)arg3;
- (void)didTapClearAddressButton;
- (void)didTapClearBirthdayButton;
- (void)updateBirthDay;
- (void)setupFooterView;
- (void)menuStreamController:(id)arg1 didUpdateItem:(id)arg2;
- (void)menuStreamController:(id)arg1 didSelectItem:(id)arg2;
- (id)menuSectionsForSettings:(id)arg1;
- (id)settingsFilter;
- (id)pageCustomizations;
- (id)initWithSettingsService:(id)arg1 person:(id)arg2 showsContactSharingSwitch:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

