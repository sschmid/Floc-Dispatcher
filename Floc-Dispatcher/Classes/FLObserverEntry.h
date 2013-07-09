//
// Created by Simon Schmid
//
// contact@sschmid.com
//

#import <Foundation/Foundation.h>

@interface FLObserverEntry : NSObject
@property(nonatomic, strong, readonly) id observer;
@property(nonatomic, strong, readonly) Class objectClass;
@property(nonatomic, readonly) SEL selector;
@property(nonatomic, readonly) int priority;
@property(nonatomic, readonly) BOOL remove;

- (id)initWithObserver:(id)observer forObject:(Class)objectClass withSelector:(SEL)selector priority:(int)priority removeAfterExecution:(BOOL)remove;
- (void)executeWithObject:(id)object;

@end