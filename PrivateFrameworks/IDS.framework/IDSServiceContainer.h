/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class IDSServiceMonitor, NSMutableSet;

@interface IDSServiceContainer : NSObject {
    NSMutableSet *_listeners;
    IDSServiceMonitor *_monitor;
}

@property(retain,readonly) NSMutableSet * listeners;
@property(retain) IDSServiceMonitor * monitor;

- (BOOL)addListenerID:(id)arg1;
- (void)dealloc;
- (BOOL)hasListenerID:(id)arg1;
- (id)initWithService:(id)arg1;
- (id)listeners;
- (id)monitor;
- (BOOL)removeListenerID:(id)arg1;
- (void)setMonitor:(id)arg1;

@end
