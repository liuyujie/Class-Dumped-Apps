//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GTLRObject.h>

@class GTLRDateTime, GTLRIDrive_CategoryAttributeValue_UserScoped, GTLRIDrive_Money, GTLRIDrive_User, NSArray, NSNumber, NSString;

@interface GTLRIDrive_CategoryAttributeValue : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) NSNumber *boolean; // @dynamic boolean;
@property(copy, nonatomic) NSString *choiceSet; // @dynamic choiceSet;
@property(retain, nonatomic) NSArray *choiceSetList; // @dynamic choiceSetList;
@property(retain, nonatomic) GTLRDateTime *dateString; // @dynamic dateString;
@property(copy, nonatomic) NSString *driveFile; // @dynamic driveFile;
@property(retain, nonatomic) NSArray *driveFileList; // @dynamic driveFileList;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSNumber *integer; // @dynamic integer;
@property(retain, nonatomic) NSArray *integerList; // @dynamic integerList;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(copy, nonatomic) NSString *longText; // @dynamic longText;
@property(retain, nonatomic) GTLRIDrive_Money *money; // @dynamic money;
@property(retain, nonatomic) NSArray *moneyList; // @dynamic moneyList;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *selection; // @dynamic selection;
@property(retain, nonatomic) NSArray *selectionList; // @dynamic selectionList;
@property(copy, nonatomic) NSString *shortText; // @dynamic shortText;
@property(retain, nonatomic) NSArray *shortTextList; // @dynamic shortTextList;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) NSArray *textList; // @dynamic textList;
@property(retain, nonatomic) GTLRIDrive_User *user; // @dynamic user;
@property(retain, nonatomic) NSArray *userList; // @dynamic userList;
@property(retain, nonatomic) GTLRIDrive_CategoryAttributeValue_UserScoped *userScoped; // @dynamic userScoped;
@property(copy, nonatomic) NSString *valueType; // @dynamic valueType;

@end

