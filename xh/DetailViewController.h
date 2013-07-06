//
//  DetailViewController.h
//  xh
//
//  Created by cuixin on 13-7-7.
//  Copyright (c) 2013年 cuixin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
