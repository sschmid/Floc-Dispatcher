//
// Created by Simon Schmid
//
// contact@sschmid.com
//

#import <Foundation/Foundation.h>

@interface FLDispatcher : NSObject

+ (FLDispatcher *)sharedDispatcher;

- (void)dispatchObject:(id)object;

- (void)addObserver:(id)observer forObject:(Class)objectClass withSelector:(SEL)selector;
- (void)addObserver:(id)observer forObject:(Class)objectClass withSelector:(SEL)selector priority:(int)priority;

- (void)addObserverOnce:(id)observer forObject:(Class)objectClass withSelector:(SEL)selector;
- (void)addObserverOnce:(id)observer forObject:(Class)objectClass withSelector:(SEL)selector priority:(int)priority;

- (void)removeObserver:(id)observer fromObject:(Class)objectClass withSelector:(SEL)selector;
- (void)removeObserver:(id)observer fromObject:(Class)objectClass;
- (void)removeObserver:(id)observer;
- (void)removeAllObservers;

- (BOOL)hasObserver:(id)observer forObject:(Class)objectClass withSelector:(SEL)selector;
- (BOOL)hasObserver:(id)observer forObject:(Class)objectClass;
- (BOOL)hasObserver:(id)observer;

@end