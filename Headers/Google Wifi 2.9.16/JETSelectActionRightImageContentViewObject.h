//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETRightImageContentViewObject.h"

#import "JETSelectActionListItem-Protocol.h"

@interface JETSelectActionRightImageContentViewObject : JETRightImageContentViewObject <JETSelectActionListItem>
{
    CDUnknownBlockType _block;
    CDUnknownBlockType _tappedWhileDisabledBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tappedWhileDisabledBlock; // @synthesize tappedWhileDisabledBlock=_tappedWhileDisabledBlock;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)itemWasSelected;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 rightImage:(id)arg3 block:(CDUnknownBlockType)arg4;

@end
