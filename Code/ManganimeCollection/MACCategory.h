//
//  MACCategory.h
//  ManganimeCollection
//
//  Created by Linh Nguyen on 24.10.12.
//  Copyright (c) 2012 Linh Nguyen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class MACSerie;

@interface MACCategory : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * teaser;
@property (nonatomic, retain) NSNumber * type;
@property (nonatomic, retain) NSSet *series;
@end

@interface MACCategory (CoreDataGeneratedAccessors)

- (void)addSeriesObject:(MACSerie *)value;
- (void)removeSeriesObject:(MACSerie *)value;
- (void)addSeries:(NSSet *)values;
- (void)removeSeries:(NSSet *)values;

@end
