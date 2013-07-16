//
// Created by Simon Schmid
//
// contact@sschmid.com
//

#import "Example.h"
#import "FLDispatcher.h"
#import "User.h"
#import "Service.h"

@interface Example ()
@property(nonatomic, strong) Service *service;
@end

@implementation Example

- (id)init {
    self = [super init];
    if (self) {
        fl_dispatcher_add(self, [User class], @selector(updateWithUser:));

        self.service = [[Service alloc] init];
        [self.service login];
    }

    return self;
}

- (void)updateWithUser:(User *)user {
    NSLog(@"user.name = %@", user.name);
    NSLog(@"user.age = %u", user.age);
}

- (void)dealloc {
    fl_dispatcher_remove(self);
}

@end