//
//  PostsTableViewController.h
//  VisaForum
//
//  Created by Hriday Kemburu on 7/22/14.
//  Copyright (c) 2014 hridaykemburu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AddPostViewController.h"
#import "CustomTableViewCell.h"
#import <QuartzCore/QuartzCore.h>

@interface PostsTableViewController : UITableViewController
- (IBAction)addPost:(id)sender;
@property (nonatomic, strong) NSString *username;
//- (IBAction)logout:(id)sender;

- (IBAction)unwindToList:(UIStoryboardSegue *)segue;

@end
