/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIDocumentPickerContainerItem;

@interface _UIDocumentPickerDocumentCell : _UIDocumentPickerCell {
    _UIDocumentPickerContainerItem *_item;
    bool_enabled;
}

@property bool enabled;
@property(retain) _UIDocumentPickerContainerItem * item;

- (void)_showPickableDiagnostic;
- (void)dealloc;
- (bool)enabled;
- (id)item;
- (void)prepareForReuse;
- (void)reloadItem:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContents;
- (void)updateThumbnail;
- (id)viewControllerForDisplay;

@end