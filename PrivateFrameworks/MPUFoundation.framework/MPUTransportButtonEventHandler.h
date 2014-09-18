/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@class NSObject<OS_dispatch_source>, UIButton;

@interface MPUTransportButtonEventHandler : NSObject {
    UIButton *_button;
    NSObject<OS_dispatch_source> *_longPressTimer;
    double _minimumLongPressDuration;
    bool_longPress;
    bool_shouldFakeEnabled;
    bool_supportsTapWhenDisabled;
}

@property UIButton * button;
@property double minimumLongPressDuration;
@property bool supportsTapWhenDisabled;

- (void).cxx_destruct;
- (void)_clearLongPressTimer;
- (void)_longPressTimerAction;
- (void)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)button;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)dealloc;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (double)minimumLongPressDuration;
- (id)performHitTestingBlock:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setMinimumLongPressDuration:(double)arg1;
- (void)setSupportsTapWhenDisabled:(bool)arg1;
- (bool)shouldFakeEnabled;
- (bool)shouldForceTrackingEnabled;
- (bool)supportsTapWhenDisabled;

@end