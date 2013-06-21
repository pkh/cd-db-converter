//
//  DictionaryEntry.h
//  cd-coredata-test
//
//  Created by Patrick Hanlon on 6/21/13.
//  Copyright (c) 2013 pkh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface DictionaryEntry : NSManagedObject

@property (nonatomic, retain) NSString * definition;
@property (nonatomic, retain) NSString * pinyin;
@property (nonatomic, retain) NSString * simplified;
@property (nonatomic, retain) NSString * traditional;
@property (nonatomic, retain) NSNumber * entryid;

@end
