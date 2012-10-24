//
//  MACSerie.h
//  ManganimeCollection
//
//  Created by Linh Nguyen on 24.10.12.
//  Copyright (c) 2012 Linh Nguyen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class MACCategory;

@interface MACSerie : NSManagedObject

@property (nonatomic, retain) NSDate * timeStamp;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSNumber * episodes;
@property (nonatomic, retain) NSNumber * type;
@property (nonatomic, retain) NSNumber * year;
@property (nonatomic, retain) NSString * author;
@property (nonatomic, retain) NSNumber * averageRating;
@property (nonatomic, retain) NSString * summary;
@property (nonatomic, retain) NSData * image;
@property (nonatomic, retain) NSNumber * doesDramaExist;
@property (nonatomic, retain) NSSet *category;
@end

@interface MACSerie (CoreDataGeneratedAccessors)

- (void)addCategoryObject:(MACCategory *)value;
- (void)removeCategoryObject:(MACCategory *)value;
- (void)addCategory:(NSSet *)values;
- (void)removeCategory:(NSSet *)values;

@end
