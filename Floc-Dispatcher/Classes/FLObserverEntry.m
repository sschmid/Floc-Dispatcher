//
// Created by Simon Schmid
//
// contact@sschmid.com
//

#import "FLObserverEntry.h"

@implementation FLObserverEntry

- (id)initWithObserver:(id)observer forObject:(Class)objectClass withSelector:(SEL)selector priority:(int)priority removeAfterExecution:(BOOL)remove {
    self = [super init];
    if (self) {

        if (![observer respondsToSelector:selector])
            @throw [NSException exceptionWithName:[NSString stringWithFormat:@"%@Exception", NSStringFromClass([self class])]
                                           reason:[NSString stringWithFormat:@"Observer '%@' does not respond to selector '%@'",
                                                                             NSStringFromClass([observer class]), NSStringFromSelector(selector)]
                                         userInfo:nil];

        _observer = observer;
        _objectClass = objectClass;
        _selector = selector;
        _priority = priority;
        _remove = remove;
    }

    return self;
}

- (void)executeWithObject:(id)object {
    [self.observer performSelector:self.selector withObject:object];
}

@end
