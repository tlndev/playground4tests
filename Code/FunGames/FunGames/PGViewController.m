//
//  PGViewController.m
//  FunGames
//
//  Created by Linh Nguyen on 18.07.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "PGViewController.h"

@interface PGViewController ()

@end

@implementation PGViewController
@synthesize controllerNavigation;

- (void)viewDidLoad
{
    [super viewDidLoad];
	self.controllerNavigation.leftBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"Custom Title"
                                                                                    style:UIBarButtonItemStyleBordered
                                                                                   target:nil
                                                                                   action:nil] ;
}

- (void)viewDidUnload
{
    [self setControllerNavigation:nil];
    [super viewDidUnload];
    // Release any retained subviews of the main view.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
}

@end
