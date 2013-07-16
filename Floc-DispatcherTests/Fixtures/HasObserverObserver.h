//
// Created by Simon Schmid
//
// contact@sschmid.com
//

#import <Foundation/Foundation.h>

@class FLDispatcher;
@class SomeObject;

@interface HasObserverObserver : NSObject
@property(nonatomic, strong) FLDispatcher *dispatcher;
@property(nonatomic) BOOL result;

- (void)check:(SomeObject *)object;

@end