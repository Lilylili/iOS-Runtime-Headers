/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDUserEntity : HDHealthEntity {
}

+ (id)_characteristicForDBValue:(id)arg1 dataType:(id)arg2;
+ (id)_columnForDataType:(id)arg1;
+ (id)_dbUserCreatingIfNecessary:(id)arg1;
+ (id)_dbUserWithDatabase:(id)arg1;
+ (id)_dbValueForCharacteristic:(id)arg1 dataType:(id)arg2;
+ (id)characteristicForDataType:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)createTableSQL;
+ (id)databaseTable;
+ (void)load;
+ (int)protectionClass;
+ (BOOL)setCharacteristic:(id)arg1 forDataType:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4;

@end
