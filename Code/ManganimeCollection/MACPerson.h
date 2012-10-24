//
//  MACPerson.h
//  ManganimeCollection
//
//  Created by Linh Nguyen on 24.10.12.
//  Copyright (c) 2012 Linh Nguyen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface MACPerson : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * firstname;
@property (nonatomic, retain) NSDate * birthdate;
@property (nonatomic, retain) NSNumber * sex;

@end
