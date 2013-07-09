//
// Created by Simon Schmid
//
// contact@sschmid.com
//

#import "SomeObject.h"

@implementation SomeObject

- (id)init {
    self = [super init];
    if (self) {
        self.string = [[NSString alloc] init];
    }

    return self;
}

@end