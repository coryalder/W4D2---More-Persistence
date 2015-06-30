//
//  Player.h
//  CoderExample
//
//  Created by Cory Alder on 2015-06-30.
//  Copyright (c) 2015 Cory Alder. All rights reserved.
//


// 1. announce conformance to NSCoding
// 2. implment initWithCoder and encodeWithCoder
// 3. no step 3.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Player : NSObject //<NSCoding>

@property (nonatomic, strong) NSString *name;
@property (readwrite) CGFloat score;

@end
