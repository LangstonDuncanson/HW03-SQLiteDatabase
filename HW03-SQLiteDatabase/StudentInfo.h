//
//  StudentInfo.h
//  HW03-SQLiteDatabase
//
//  Created by Lanjoudun on 11/20/17.
//  Copyright © 2017 Lanjoudun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StudentInfo : NSObject
@property (nonatomic, strong) NSString * name;
@property (nonatomic, strong) NSString * address;
@property (nonatomic, strong) NSString * phone;
-(id) initWithData:(NSString*) n andAddress:(NSString *) a andPhone:(NSString *) p ;
@end
