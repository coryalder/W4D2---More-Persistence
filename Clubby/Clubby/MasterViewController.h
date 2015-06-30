//
//  MasterViewController.h
//  Clubby
//
//  Created by Cory Alder on 2015-06-30.
//  Copyright (c) 2015 Cory Alder. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

