//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MtProtoKit/NSCoding-Protocol.h>

@class MTDatacenterAddress;

@interface MTTransportScheme : NSObject <NSCoding>
{
    _Bool _media;
    Class _transportClass;
    MTDatacenterAddress *_address;
}

@property(readonly, nonatomic) _Bool media; // @synthesize media=_media;
@property(readonly, nonatomic) MTDatacenterAddress *address; // @synthesize address=_address;
@property(readonly, nonatomic) Class transportClass; // @synthesize transportClass=_transportClass;
- (void).cxx_destruct;
- (id)description;
- (long long)compareToScheme:(id)arg1;
- (_Bool)isOptimal;
- (_Bool)isEqualToScheme:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransportClass:(Class)arg1 address:(id)arg2 media:(_Bool)arg3;

@end

