//
//  Person.h
//  Clubby
//
//  Created by Cory Alder on 2015-06-30.
//  Copyright (c) 2015 Cory Alder. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Club;

@interface Person : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *clubs;
@end

@interface Person (CoreDataGeneratedAccessors)

- (void)addClubsObject:(Club *)value;
- (void)removeClubsObject:(Club *)value;
- (void)addClubs:(NSSet *)values;
- (void)removeClubs:(NSSet *)values;

@end
