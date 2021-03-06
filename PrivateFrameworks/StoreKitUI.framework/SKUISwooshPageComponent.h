/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString, NSURL;

@interface SKUISwooshPageComponent : SKUIPageComponent {
    struct SKUILockupStyle { 
        int artworkSize; 
        int layoutStyle; 
        unsigned int visibleFields; 
    NSArray *_bricks;
    int _fcKind;
    } _lockupStyle;
    NSArray *_lockups;
    NSArray *_mediaComponents;
    int _missingDataCount;
    NSString *_platformKeyProfile;
    int _seeAllStyle;
    NSString *_seeAllTitle;
    NSURL *_seeAllURL;
    BOOL _showsIndexNumbers;
    BOOL _showsItemTitles;
    int _swooshType;
    NSString *_title;
}

@property(readonly) NSArray * bricks;
@property(readonly) struct SKUILockupStyle { int x1; int x2; unsigned int x3; } lockupStyle;
@property(readonly) NSArray * lockups;
@property(readonly) NSArray * mediaComponents;
@property(readonly) NSString * platformKeyProfile;
@property(readonly) int seeAllStyle;
@property(readonly) NSString * seeAllTitle;
@property(readonly) NSURL * seeAllURL;
@property(readonly) BOOL showsBrickTitles;
@property(readonly) BOOL showsIndexNumbers;
@property(readonly) BOOL showsMediaTitles;
@property(readonly) int swooshType;
@property(readonly) NSString * title;

- (void).cxx_destruct;
- (id)_brickItemsWithChildren:(id)arg1 customPageContext:(id)arg2;
- (id)_brickItemsWithChildren:(id)arg1 featuredPageContext:(id)arg2;
- (struct SKUILockupStyle { int x1; int x2; unsigned int x3; })_defaultLockupStyleWithSwooshType:(int)arg1;
- (unsigned int)_defaultVisibleFieldsForItemKind:(int)arg1;
- (BOOL)_isBrickAvailable:(id)arg1 withPageContext:(id)arg2;
- (struct SKUILockupStyle { int x1; int x2; unsigned int x3; })_lockupStyleWithLockups:(id)arg1;
- (id)_lockupWithItemIdentifier:(id)arg1 context:(id)arg2;
- (id)_lockupsWithChildren:(id)arg1 context:(id)arg2;
- (id)_lockupsWithChildren:(id)arg1 featuredPageContext:(id)arg2;
- (id)_mediaComponentsWithChildren:(id)arg1 context:(id)arg2;
- (id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(struct SKUILockupStyle { int x1; int x2; unsigned int x3; })arg2;
- (void)_reloadMissingDataCount;
- (void)_setSeeAllValuesWithLinkInfo:(id)arg1;
- (void)_updateBricksWithItems:(id)arg1;
- (void)_updateLockup:(id)arg1 withItem:(id)arg2;
- (id)_updateLockupItemsWithItems:(id)arg1;
- (void)_updateLockupItemsWithLookupResponse:(id)arg1;
- (id)bricks;
- (int)componentType;
- (void)enumerateMissingItemIdentifiersFromIndex:(int)arg1 usingBlock:(id)arg2;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2;
- (id)initWithItemList:(id)arg1;
- (id)initWithLockups:(id)arg1 swooshType:(int)arg2 title:(id)arg3;
- (id)initWithRelatedContentContext:(id)arg1;
- (id)initWithRoomContext:(id)arg1;
- (BOOL)isMissingItemData;
- (struct SKUILockupStyle { int x1; int x2; unsigned int x3; })lockupStyle;
- (id)lockups;
- (id)mediaComponents;
- (id)metricsElementName;
- (id)platformKeyProfile;
- (int)seeAllStyle;
- (id)seeAllTitle;
- (id)seeAllURL;
- (BOOL)showsBrickTitles;
- (BOOL)showsIndexNumbers;
- (BOOL)showsMediaTitles;
- (int)swooshType;
- (id)title;
- (id)valueForMetricsField:(id)arg1;

@end
