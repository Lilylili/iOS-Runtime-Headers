/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BKSProcessAssertion, NSError, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, _UIAsyncInvocation, _UIRemoteViewService;

@interface _UIViewServiceInterfaceConnectionRequest : NSObject {
    BOOL __automatic_invalidation_invalidated;
    int __automatic_invalidation_retainCount;
    NSError *_cancellationError;
    _UIAsyncInvocation *_cancellationInvocation;
    id _connectionHandler;
    BOOL _isCancelled;
    NSObject<OS_dispatch_queue> *_queue;
    _UIRemoteViewService *_service;
    NSString *_serviceBundleIdentifier;
    BKSProcessAssertion *_serviceProcessAssertion;
    NSXPCConnection *_serviceSessionConnection;
    int _sessionRequestNotifyToken;
}

+ (id)_connectToViewServiceWithBundleIdentifier:(id)arg1 service:(id)arg2 connectionHandler:(id)arg3;
+ (id)connectToViewService:(id)arg1 connectionHandler:(id)arg2;
+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(id)arg2;

- (int)__automatic_invalidation_logic;
- (void)_cancelUnconditionallyThen:(id)arg1;
- (void)_cancelWithError:(id)arg1;
- (void)_createAndEstablishConnection;
- (void)_createPlugInProcessAssertion;
- (void)_createProcessAssertion;
- (void)_createProcessAssertionForPID:(int)arg1 aquiredHandler:(id)arg2;
- (void)_didConnectToService;
- (void)_establishConnection;
- (BOOL)_isDeallocating;
- (void)_launchService;
- (BOOL)_tryRetain;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;

@end
