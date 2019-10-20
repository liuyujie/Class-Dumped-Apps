//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (IPv4)
- (id)jet_IPV4AddressMigratedToNewNetworkWithLANIP:(id)arg1 newNetmask:(id)arg2;
- (_Bool)jet_isGreaterThanOrEqualToIPV4Address:(id)arg1;
- (_Bool)jet_isLessThanOrEqualToIPV4Address:(id)arg1;
- (unsigned long long)jet_IPV4AddressClass;
- (_Bool)jet_isGreaterThanIPV4Address:(id)arg1;
- (_Bool)jet_isLessThanIPV4Address:(id)arg1;
- (long long)jet_compareToIPV4Address:(id)arg1;
- (_Bool)jet_isIPV4AddressInAddressPoolWithPoolBeginAddress:(id)arg1 poolEndAddress:(id)arg2;
- (_Bool)jet_isPrivateAddress;
- (_Bool)jet_parseIPv4Address:(struct in_addr *)arg1;
- (id)jet_IPAddressPrefixSuffixWithMask:(id)arg1;
- (id)jet_networkAddressWithMask:(id)arg1;
- (id)jet_broadcastAddressWithMask:(id)arg1;
- (_Bool)jet_isIPV4AddressOnSubnetWithAddress:(id)arg1 mask:(id)arg2;
- (_Bool)jet_isValidIPv4Netmask;
- (_Bool)jet_isValidIPv4Address;
@end

