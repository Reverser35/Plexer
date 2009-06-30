//
//  KSConfiguration.h
//  Plexer
//
//  Created by David Owens II on 6/27/09.
//  Copyright 2009 Kiad Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface KSConfiguration : NSObject {
    NSString* name;
    NSArray*  applications;
    NSArray*  blackListKeys;
    NSArray*  roundRobinKeys;
}

@property (copy) NSString* name;
@property (retain) NSArray* applications;
@property (retain) NSArray* blackListKeys;
@property (retain) NSArray* roundRobinKeys;

@end
