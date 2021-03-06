/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIEventFetcher : NSObject {
    id /* block */  _addToFilteredEventsBlock;
    struct __CFRunLoop { } * _cfRunLoop;
    double  _commitTimeForTouchEvents;
    int  _countOfDigitizerEventsReceivedSinceLastDisplayLinkCallback;
    BOOL  _didDispatchOneMoveEventSinceLastDisplayLinkCallback;
    CADisplayLink * _displayLink;
    <UIEventFetcherSink> * _eventFetcherSink;
    NSMutableArray * _eventFilters;
    id /* block */  _gameControllerEventFilterGenerator;
    NSMutableArray * _incomingHIDEvents;
    NSMutableArray * _incomingHIDEventsFiltered;
    double  _lastImportantEventTimestamp;
    id /* block */  _receiveBlock;
    BOOL  _shouldSignalOnDisplayLink;
    struct __CFRunLoopSource { } * _triggerHandOffEventsRunLoopSource;
    id /* block */  _watchSystemAppFilter;
}

@property (nonatomic) double commitTimeForTouchEvents;
@property (nonatomic, retain) <UIEventFetcherSink> *eventFetcherSink;
@property (nonatomic) BOOL shouldSignalOnDisplayLink;

- (void).cxx_destruct;
- (void)_addHIDEventFilter:(id /* block */)arg1;
- (void)_receiveHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_receiveHIDEventInternal:(struct __IOHIDEvent { }*)arg1;
- (void)_removeHIDEventFilter:(id /* block */)arg1;
- (void)_removeHIDGameControllerEventObserver;
- (void)_setHIDGameControllerEventObserver:(id /* block */)arg1 onQueue:(id)arg2;
- (void)_setupFilterChain;
- (double)commitTimeForTouchEvents;
- (void)displayLinkDidFire:(id)arg1;
- (void)drainEventsIntoEnvironment:(id)arg1;
- (id)eventFetcherSink;
- (void)filterEvents;
- (id)init;
- (void)setCommitTimeForTouchEvents:(double)arg1;
- (void)setEventFetcherSink:(id)arg1;
- (void)setShouldSignalOnDisplayLink:(BOOL)arg1;
- (void)setupForRunLoop:(id)arg1;
- (void)setupThreadAndRun;
- (BOOL)shouldSignalOnDisplayLink;
- (void)signalEventsAvailableWithReason:(unsigned long long)arg1 filteredEventCount:(int)arg2;
- (void)threadMain;

@end
