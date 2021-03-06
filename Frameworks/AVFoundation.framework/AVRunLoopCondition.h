/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {
    NSMutableArray *_runLoopStateList;
}

- (void)_signalRunLoopWithState:(id)arg1;
- (BOOL)_waitInMode:(id)arg1 untilDate:(id)arg2;
- (void)broadcast;
- (void)dealloc;
- (id)init;
- (void)signal;
- (void)wait;
- (void)waitInMode:(id)arg1;
- (BOOL)waitUntilDate:(id)arg1 inMode:(id)arg2;
- (BOOL)waitUntilDate:(id)arg1;

@end
