//
// Created by Simon Schmid
//
// contact@sschmid.com
//

#import "Service.h"
#import "User.h"
#import "FLDispatcher.h"

@implementation Service

- (void)login {
    [self performSelector:@selector(remoteServerResponded) withObject:nil afterDelay:0.5];
}

- (void)remoteServerResponded {
    User *user = [[User alloc] init];
    user.name = @"Joe";
    user.age = 28;
    fl_dispatcher_dispatch(user);
}

@end