//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$s10RealmSwift6ObjectCN.h"

@class NSString, _TtC11NordAppCore10ServerItem;

@interface _TtC11NordAppCore18FavoriteServerItem : _$s10RealmSwift6ObjectCN
{
    // Error parsing type: , name: serverId
    // Error parsing type: , name: name
    // Error parsing type: , name: flagImageName
    // Error parsing type: , name: server
}

+ (id)primaryKey;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, retain) _TtC11NordAppCore10ServerItem *server; // @synthesize server;
@property(nonatomic, copy) NSString *flagImageName;
@property(nonatomic, copy) NSString *name;
@property(nonatomic) long long serverId; // @synthesize serverId;

@end

