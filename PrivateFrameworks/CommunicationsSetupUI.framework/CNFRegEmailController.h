/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString, NSTimer, PSSpecifier;

@interface CNFRegEmailController : CNFRegFirstRunController {
    PSSpecifier *_actionGroupSpecifier;
    id _alertHandler;
    NSArray *_checkMailSpecifiers;
    PSSpecifier *_currentActionSpecifier;
    PSSpecifier *_emailSpecifier;
    NSString *_pendingAlias;
    BOOL _validating;
    NSTimer *_validationTimeoutTimer;
}

@property(copy) id alertHandler;
@property(copy) NSString * pendingAlias;

- (void)_buildActionGroupSpecifierCache:(id)arg1;
- (void)_buildCheckMailSpecifierCache:(id)arg1;
- (void)_buildEmailSpecifierCache:(id)arg1;
- (void)_buildSpecifierCache:(id)arg1;
- (id)_createSpecifierForAlias:(id)arg1;
- (void)_failValidationWithError:(id)arg1;
- (void)_finishValidation;
- (void)_handleValidationModeCancelled;
- (BOOL)_phoneNumberInAliases:(id)arg1;
- (void)_refreshEnabledStateOfAliasSpecifiers;
- (void)_returnKeyPressed;
- (id)_rightButtonItem;
- (void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setupEventHandlers;
- (void)_showCheckMailButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_stopValidationModeAnimated:(BOOL)arg1;
- (void)_updateControllerState;
- (void)_updateUI;
- (id)alertHandler;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)aliasSpecifiers;
- (id)bundle;
- (void)checkMailTapped:(id)arg1;
- (void)dealloc;
- (void)emailFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (BOOL)emailFieldIsEmpty;
- (id)emailTextField;
- (id)logName;
- (void)nextTapped;
- (BOOL)onlyLocalPhoneNumberSentinelAliasIsSelected;
- (id)pendingAlias;
- (id)pendingAliasForSpecifier:(id)arg1;
- (id)selectedAliases;
- (void)setAlertHandler:(id)arg1;
- (void)setAliasSelected:(id)arg1;
- (void)setPendingAlias:(id)arg1 forSpecifier:(id)arg2;
- (void)setPendingAlias:(id)arg1;
- (BOOL)shouldShowAllVettedAliases;
- (BOOL)showActionSpecifier:(id)arg1 animated:(BOOL)arg2;
- (id)specifierList;
- (void)startValidationTimeoutTimer;
- (void)stopValidationTimeoutTimer;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)timeoutDuration;
- (id)titleString;
- (void)validationTimeout:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
