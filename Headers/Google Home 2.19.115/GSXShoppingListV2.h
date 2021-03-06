//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSXDataObjectV2-Protocol.h"

@class CDRChangeCollaboratorAction, CDRDeleteListAction, CDRLeaveListAction, CDRMakeDefaultListAction, CDRRenameListAction, CDRShoppingListFooter, GSXServiceID, NSArray, NSDate, NSOrderedSet, NSString;

@interface GSXShoppingListV2 : NSObject <GSXDataObjectV2>
{
    _Bool _isDefault;
    _Bool _enableShopYourListButton;
    GSXServiceID *_serviceID;
    NSDate *_lastPopulationDate;
    NSString *_listID;
    NSString *_name;
    NSArray *_itemGroups;
    NSOrderedSet *_collaborators;
    NSArray *_actions;
    CDRShoppingListFooter *_footer;
    CDRChangeCollaboratorAction *_changeCollaboratorAction;
    CDRLeaveListAction *_leaveListAction;
    CDRRenameListAction *_renameListAction;
    CDRMakeDefaultListAction *_makeDefaultListAction;
    CDRDeleteListAction *_deleteListAction;
}

+ (void)removeItemsWithRemovedStateFromItemGroups:(id)arg1;
+ (void)applyCreateRequest:(id)arg1 itemGroups:(id)arg2;
+ (void)updateItemAndMoveIfNeeded:(id)arg1 indexPath:(id)arg2 itemGroups:(id)arg3;
+ (void)applyUpdateRequest:(id)arg1 itemGroups:(id)arg2;
+ (void)applyPendingRequests:(id)arg1 itemGroups:(id)arg2 listID:(id)arg3 isDefault:(_Bool)arg4;
+ (id)itemsAtIndexPaths:(id)arg1 itemGroups:(id)arg2;
+ (id)indexPathForItemID:(id)arg1 itemGroups:(id)arg2;
@property(readonly, copy, nonatomic) CDRDeleteListAction *deleteListAction; // @synthesize deleteListAction=_deleteListAction;
@property(readonly, copy, nonatomic) CDRMakeDefaultListAction *makeDefaultListAction; // @synthesize makeDefaultListAction=_makeDefaultListAction;
@property(readonly, copy, nonatomic) CDRRenameListAction *renameListAction; // @synthesize renameListAction=_renameListAction;
@property(readonly, copy, nonatomic) CDRLeaveListAction *leaveListAction; // @synthesize leaveListAction=_leaveListAction;
@property(readonly, copy, nonatomic) CDRChangeCollaboratorAction *changeCollaboratorAction; // @synthesize changeCollaboratorAction=_changeCollaboratorAction;
@property(readonly, nonatomic) _Bool enableShopYourListButton; // @synthesize enableShopYourListButton=_enableShopYourListButton;
@property(readonly, copy, nonatomic) CDRShoppingListFooter *footer; // @synthesize footer=_footer;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, copy, nonatomic) NSOrderedSet *collaborators; // @synthesize collaborators=_collaborators;
@property(readonly, copy, nonatomic) NSArray *itemGroups; // @synthesize itemGroups=_itemGroups;
@property(readonly, nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *listID; // @synthesize listID=_listID;
@property(readonly, nonatomic) NSDate *lastPopulationDate; // @synthesize lastPopulationDate=_lastPopulationDate;
@property(readonly, copy, nonatomic) GSXServiceID *serviceID; // @synthesize serviceID=_serviceID;
- (void).cxx_destruct;
- (_Bool)hasBeenPopulatedAtLeastOnce;
@property(readonly, nonatomic) _Bool isShoppable;
@property(readonly, copy, nonatomic) NSArray *allItems;
- (id)indexPathsForRowsInRange:(struct _NSRange)arg1 inSection:(unsigned long long)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemsAtIndexPaths:(id)arg1;
- (_Bool)containsItemWithListItemID:(id)arg1;
- (id)indexPathForListItemID:(id)arg1;
- (id)indexPathsForItems:(id)arg1;
- (id)indexPathsForListItemIDs:(id)arg1;
@property(readonly, copy, nonatomic) NSOrderedSet *archivedItems;
@property(readonly, copy, nonatomic) NSOrderedSet *visibleItems;
- (id)initWithServiceID:(id)arg1 listID:(id)arg2 itemGroups:(id)arg3 metadata:(id)arg4 footer:(id)arg5 enableShopYourListButton:(_Bool)arg6 lastPopulationDate:(id)arg7;
- (id)listByUpdatingCollaborators:(id)arg1;
- (id)listByChangingFooter:(id)arg1;
- (id)listByChangingIsDefaultFlag:(_Bool)arg1;
- (id)listByChangingTitle:(id)arg1;
- (id)listByApplyingCollaboratorsModificationSet:(id)arg1;
- (id)listByApplyingItemsModificationSet:(id)arg1;
- (id)listByAddingMissingItemsWithListItemIDs:(id)arg1;
- (id)initWithServiceID:(id)arg1 listID:(id)arg2;
- (id)initWithServiceID:(id)arg1 listID:(id)arg2 itemProtos:(id)arg3 metadata:(id)arg4 footer:(id)arg5 enableShopYourListButton:(_Bool)arg6 lastPopulationDate:(id)arg7 pendingRequests:(id)arg8;
- (id)initWithServiceID:(id)arg1 listID:(id)arg2 name:(id)arg3 itemGroups:(id)arg4 collaborators:(id)arg5 isDefault:(_Bool)arg6 actions:(id)arg7 footer:(id)arg8 enableShopYourListButton:(_Bool)arg9 lastPopulationDate:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

