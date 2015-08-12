//
//  DetailViewController.h
//  MergeStoryboardTest
//
//  Created by James on 2015/8/12.
//  Copyright (c) 2015年 tomin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

