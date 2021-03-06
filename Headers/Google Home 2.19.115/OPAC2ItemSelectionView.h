//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPAC2LinearLayout.h"

#import "OPAC2ComponentTransformerClass-Protocol.h"
#import "OPAC2EventHandler-Protocol.h"

@interface OPAC2ItemSelectionView : OPAC2LinearLayout <OPAC2ComponentTransformerClass, OPAC2EventHandler>
{
    _Bool _hideUnselectedItem;
    _Bool _itemSelected;
}

+ (Class)targetMessageClass;
+ (id)targetExtension;
+ (id)targetTypeString;
@property(nonatomic) _Bool itemSelected; // @synthesize itemSelected=_itemSelected;
@property(nonatomic) _Bool hideUnselectedItem; // @synthesize hideUnselectedItem=_hideUnselectedItem;
- (_Bool)handleEvent:(id)arg1 fromSource:(id)arg2;
- (_Bool)isSelected:(id)arg1;
- (void)hideUnselectedItemsIfNeeded;
- (id)initWithMessage:(id)arg1 andContext:(id)arg2 fromFactory:(id)arg3;

@end

