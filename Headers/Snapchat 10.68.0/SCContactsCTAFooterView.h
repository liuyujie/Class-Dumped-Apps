//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCFindFriendsCTA-Protocol.h"

@class NSString, SCButton, UIColor, UILabel;
@protocol SCFindFriendsCTADelegate, SCIdentityUserAdaptor;

@interface SCContactsCTAFooterView : UIView <SCFindFriendsCTA>
{
    long long _source;
    UILabel *_textLabel;
    SCButton *_addContactsButton;
    _Bool _hasSyncedContacts;
    _Bool _hasPhoneVerified;
    id <SCIdentityUserAdaptor> _userAdaptor;
    UIColor *_textLabelBackgroundColor;
    id <SCFindFriendsCTADelegate> _delegate;
}

@property(retain, nonatomic) UIColor *textLabelBackgroundColor; // @synthesize textLabelBackgroundColor=_textLabelBackgroundColor;
@property(nonatomic) __weak id <SCFindFriendsCTADelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateView;
- (id)addContactsLabel;
- (id)addContactsLabelTextFont;
- (void)addContactsButtonClicked;
- (void)logView;
- (id)getAddContactsButton:(long long)arg1;
- (_Bool)shouldShowTextLabel;
- (double)height;
- (id)initWithSource:(long long)arg1 delegate:(id)arg2 userAdaptor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
