//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseViewController.h"

@class NSLayoutConstraint, UITableView, UIView, _TtC6fiverr10BaseButton;

@interface _TtC6fiverr21BillingViewController : FVRBaseViewController
{
    // Error parsing type: , name: tableView
    // Error parsing type: , name: addButton
    // Error parsing type: , name: addButtonContainer
    // Error parsing type: , name: bottomConstraint
    // Error parsing type: , name: rows
    // Error parsing type: , name: country
    // Error parsing type: , name: zipCode
    // Error parsing type: , name: countriesConfiguration
    // Error parsing type: , name: billingInfo
    // Error parsing type: , name: paymentSessionId
    // Error parsing type: , name: paymentTokenId
    // Error parsing type: , name: delegate
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)addBillingInfoWasClicked:(id)arg1;
- (void)clickCloseWithSender:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint;
@property(nonatomic) __weak UIView *addButtonContainer; // @synthesize addButtonContainer;
@property(nonatomic) __weak _TtC6fiverr10BaseButton *addButton; // @synthesize addButton;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;

@end

