//
// Created by Simon Schmid
//
// contact@sschmid.com
//

#import "HasObserverObserver.h"
#import "SomeObject.h"
#import "FLDispatcher.h"

@implementation HasObserverObserver

-(void)check:(SomeObject *)object {
    self.result = [self.dispatcher hasObserver:self forObject:[SomeObject class] withSelector:@selector(check:)];
}

@end