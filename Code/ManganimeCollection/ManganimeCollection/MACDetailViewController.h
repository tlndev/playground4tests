//
//  MACDetailViewController.h
//  ManganimeCollection
//
//  Created by Linh Nguyen on 24.10.12.
//  Copyright (c) 2012 Linh Nguyen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MACDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
