//
//  xplanetDetailViewController.h
//  xPlanet
//
//  Created by Coblentz, Matthew on 5/10/13.
//  Copyright (c) 2013 Coblentz, Matthew. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface xplanetDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
