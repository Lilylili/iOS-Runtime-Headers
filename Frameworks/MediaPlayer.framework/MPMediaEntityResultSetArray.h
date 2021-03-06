/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPMediaLibraryResultSet>, MPMediaQueryCriteria, MPMediaQuerySectionInfo, MPWeakRef, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface MPMediaEntityResultSetArray : MPMediaArray <NSCopying> {
    NSMutableArray *_entities;
    NSObject<OS_dispatch_queue> *_entitiesQueue;
    Class _entityClass;
    MPWeakRef *_libraryWeakRef;
    MPMediaQueryCriteria *_queryCriteria;
    <MPMediaLibraryResultSet> *_resultSet;
    MPMediaQuerySectionInfo *_sectionInfo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)initWithResultSet:(id)arg1 queryCriteria:(id)arg2 entityType:(unsigned int)arg3 library:(id)arg4;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)sectionInfo;

@end
