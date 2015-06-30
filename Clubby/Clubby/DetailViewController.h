//
//  DetailViewController.h
//  Clubby
//
//  Created by Cory Alder on 2015-06-30.
//  Copyright (c) 2015 Cory Alder. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Club;

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Club *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

