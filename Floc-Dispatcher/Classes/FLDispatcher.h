//
// Created by Simon Schmid
//
// contact@sschmid.com
//

#import <Foundation/Foundation.h>

#define fl_dispatcher_dispatch(__object__) [[FLDispatcher sharedDispatcher] dispatchObject:__object__]
#define fl_dispatcher_add(__observer__, __object__, __sel__) [[FLDispatcher sharedDispatcher] addObserver:__observer__ forObject:__object__ withSelector:__sel__];
#define fl_dispatcher_addWithPrio(__observer__, __object__, __sel__, __prio__) [[FLDispatcher sharedDispatcher] addObserver:__observer__ forObject:__object__ withSelector:__sel__  priority:__prio__];
#define fl_dispatcher_addOnce(__observer__, __object__, __sel__) [[FLDispatcher sharedDispatcher] addObserverOnce:__observer__ forObject:__object__ withSelector:__sel__];
#define fl_dispatcher_addOnceWithPrio(__observer__, __object__, __sel__, __prio__) [[FLDispatcher sharedDispatcher] addObserverOnce:__observer__ forObject:__object__ withSelector:__sel__  priority:__prio__];
#define fl_dispatcher_remove(__observer__) [[FLDispatcher sharedDispatcher] removeObserver:__observer__];

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