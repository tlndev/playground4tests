//
//  MACMasterViewController.h
//  ManganimeCollection
//
//  Created by Linh Nguyen on 24.10.12.
//  Copyright (c) 2012 Linh Nguyen. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MACDetailViewController;

#import <CoreData/CoreData.h>

@interface MACMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) MACDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
