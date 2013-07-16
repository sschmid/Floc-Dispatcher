//
// Created by Simon Schmid
//
// contact@sschmid.com
//

#import <Foundation/Foundation.h>

@class SomeObject;

@interface SomeObserver : NSObject
@property(nonatomic, strong) NSString *result;

- (void)test:(SomeObject *)object;
- (void)add1:(SomeObject *)object;
- (void)add2:(SomeObject *)object;
- (void)add3:(SomeObject *)object;
- (void)add4:(SomeObject *)object;
- (void)add5:(SomeObject *)object;

@end