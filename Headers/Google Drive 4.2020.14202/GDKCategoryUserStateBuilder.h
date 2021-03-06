//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface GDKCategoryUserStateBuilder : NSObject
{
    NSString *_displayName;
    NSString *_userID;
    NSString *_emailAddress;
    NSString *_imageURL;
    UIImage *_monogramImage;
    UIImage *_avatarImage;
}

+ (id)builderFromExistingObject:(id)arg1;
+ (id)builder;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(retain, nonatomic) UIImage *monogramImage; // @synthesize monogramImage=_monogramImage;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)build;

@end

