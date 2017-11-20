//
//  StudentInfo.m
//  HW03-SQLiteDatabase
//
//  Created by Lanjoudun on 11/20/17.
//  Copyright © 2017 Lanjoudun. All rights reserved.
//

#import "StudentInfo.h"

@implementation StudentInfo
-(id) initWithData:(NSString*) n andAddress:(NSString *) a andPhone:(NSString *) p {
    if(self == [super init]){
        [self setName:n];
        [self setAddress:a];
        [self setPhone:p];
    }
    return self;
}
@end
