//
//  DB_CHANNEL_USER_X.h
//  Applozic
//
//  Created by devashish on 28/12/2015.
//  Copyright © 2015 applozic Inc. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface DB_CHANNEL_USER_X : NSManagedObject

@property (nonatomic, retain) NSString *latestMessageId;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSNumber *channelKey;
@property (nonatomic, retain) NSString *userId;

@property (nonatomic) short status;
@property (nonatomic) int unreadCount;

@end
