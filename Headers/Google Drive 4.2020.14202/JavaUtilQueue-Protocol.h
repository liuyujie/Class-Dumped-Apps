//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "JavaUtilCollection-Protocol.h"

@protocol JavaUtilQueue <JavaUtilCollection, JavaObject>
- (id)peek;
- (id)element;
- (id)poll;
- (id)remove;
- (_Bool)offerWithId:(id)arg1;
- (_Bool)addWithId:(id)arg1;
@end

