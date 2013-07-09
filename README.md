# Floc Dispatcher
![Floc Dispatcher Logo](http://sschmid.com/Dev/iOS/Libs/Floc-Dispatcher/Floc-Dispatcher-128.png)
[![Build Status](https://travis-ci.org/sschmid/Floc-Dispatcher.png?branch=master)](https://travis-ci.org/sschmid/Floc-Dispatcher)

## Description
Observe and dispatch any objects.

## Features
* Dispatch any object (no NSNotification like in NSNotificationCenter)
* Add observers with priority
* Add observers that get removed after execution (add once)

## How to use Floc Dispatcher

#### Get a dispatcher

```objective-c
// Create your own dispatcher
GDDispatcher *dispatcher = [[GDDispatcher alloc] init];

// or use the shared dispatcher
GDDispatcher *dispatcher = [GDDispatcher sharedDispatcher];
```

#### Add observers

```objective-c
[dispatcher addObserver:self forObject:[Greeting class]
           withSelector:@selector(doSthLast:) priority:-5];

[dispatcher addObserver:self forObject:[Greeting class]
           withSelector:@selector(doSthFirst:) priority:10];
```

You can add observers that get removed after execution

```objective-c
[dispatcher addObserverOnce:self forObject:[Greeting class]
           withSelector:@selector(doSthLast:) priority:-5];

[dispatcher addObserverOnce:self forObject:[Greeting class]
           withSelector:@selector(doSthFirst:) priority:10];
```

#### Dispatch objects

```objective-c
[dispatcher dispatchObject:[[Greeting alloc] initWithString:@"Hello"]];

// Logs
// Got greeting first: Hello
// Got greeting last: Hello
```

```objective-c
- (void)doSthFirst:(Greeting *)greeting {
    NSLog(@"Got greeting first: %@", greeting.string);
}

- (void)doSthLast:(Greeting *)greeting {
    NSLog(@"Got greeting last: %@", greeting.string);
}
```

## Install Floc Dispatcher
You find the source files you need in Floc-Dispatcher/Classes.

## CocoaPods
Install [CocoaPods] (http://cocoapods.org) and add the Floc Dispatcher reference to your Podfile

```
platform :ios, '5.0'
  pod 'Floc-Dispatcher'
end
```

#### Install Floc Dispatcher

```
$ cd path/to/project
$ pod install
```
Open the created Xcode Workspace file.

