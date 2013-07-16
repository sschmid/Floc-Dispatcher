//
// Created by Simon Schmid
//
// contact@sschmid.com
//

#import "SomeObserver.h"
#import "SomeObject.h"

@implementation SomeObserver

- (id)init {
    self = [super init];
    if (self) {
        self.result = @"";
    }

    return self;
}

- (void)test:(SomeObject *)object {
}
- (void)add1:(SomeObject *)object {
    self.result = [self.result stringByAppendingString:@"1"];
}
- (void)add2:(SomeObject *)object {
    self.result = [self.result stringByAppendingString:@"2"];
}
- (void)add3:(SomeObject *)object {
    self.result = [self.result stringByAppendingString:@"3"];
}
- (void)add4:(SomeObject *)object {
    self.result = [self.result stringByAppendingString:@"4"];
}
- (void)add5:(SomeObject *)object {
    self.result = [self.result stringByAppendingString:@"5"];
}

@end