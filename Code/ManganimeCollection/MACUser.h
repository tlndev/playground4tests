//
//  MACUser.h
//  ManganimeCollection
//
//  Created by Linh Nguyen on 24.10.12.
//  Copyright (c) 2012 Linh Nguyen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "MACPerson.h"


@interface MACUser : MACPerson

@property (nonatomic, retain) NSString * nick;
@property (nonatomic, retain) NSDate * installDate;
@property (nonatomic, retain) NSString * facebook;
@property (nonatomic, retain) NSString * twitter;

@end
