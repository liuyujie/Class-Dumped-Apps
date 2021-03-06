//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ZDKTicketFormUtilities : NSObject
{
}

+ (_Bool)isQuantifierPattern:(id)arg1 range:(struct _NSRange)arg2;
+ (id)cleanRegex:(id)arg1;
+ (_Bool)checkString:(id)arg1 matchesRegularExpression:(id)arg2;
+ (id)parseArrayFromDictionary:(id)arg1 key:(id)arg2 class:(Class)arg3;
+ (id)ticketFieldWithId:(id)arg1 inList:(id)arg2;
+ (void)fillTicketFields:(id)arg1 inTicketForm:(id)arg2;
+ (void)mergeTicketFields:(id)arg1 inTicketForms:(id)arg2;
+ (id)limitTicketFormIds:(id)arg1 toMaxCountOf:(long long)arg2;

@end

