/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDiskSpaceManagement : NSObject {
}

+ (BOOL)_removeCloudSharedAsset:(id)arg1;
+ (unsigned long long)_scanAndDeleteCacheFilesInDirectory:(id)arg1 shouldFreeSpace:(BOOL)arg2 bytesToPurge:(unsigned long long)arg3;
+ (unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(BOOL)arg2 fromPhotoLibrary:(id)arg3;

@end
