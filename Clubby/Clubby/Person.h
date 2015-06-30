//
//  Person.h
//  
//
//  Created by Cory Alder on 2015-06-30.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Club;

@interface Person : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) Club *club;

@end
