//
//  xplanetMasterViewController.h
//  xPlanet
//
//  Created by Coblentz, Matthew on 5/10/13.
//  Copyright (c) 2013 Coblentz, Matthew. All rights reserved.
//

#import <UIKit/UIKit.h>

@class xplanetDetailViewController;

@interface xplanetMasterViewController : UITableViewController

@property (strong, nonatomic) xplanetDetailViewController *detailViewController;

@end
