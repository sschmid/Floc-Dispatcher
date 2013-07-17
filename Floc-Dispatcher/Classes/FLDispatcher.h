//
// Created by Simon Schmid
//
// contact@sschmid.com
//

#import <Foundation/Foundation.h>

#define fl_dispatcher [FLDispatcher sharedDispatcher]
#define fl_dispatcher_dispatch(object) [fl_dispatcher dispatchObject:object]
#define fl_dispatcher_add(observer, object, sel) [fl_dispatcher addObserver:observer forObject:object withSelector:sel];
#define fl_dispatcher_addWithPrio(observer, object, sel, prio) [fl_dispatcher addObserver:observer forObject:object withSelector:sel priority:prio];
#define fl_dispatcher_addOnce(observer, object, sel) [fl_dispatcher addObserverOnce:observer forObject:object withSelector:sel];
#define fl_dispatcher_addOnceWithPrio(observer, object, sel, prio) [fl_dispatcher addObserverOnce:observer forObject:object withSelector:sel priority:prio];
#define fl_dispatcher_remove(observer) [fl_dispatcher removeObserver:observer];

@interface FLDispatcher : NSObject

+ (instancetype)sharedDispatcher;

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