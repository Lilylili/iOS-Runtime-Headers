/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class UIImageView, UIView, <AFUISnippetViewDelegate>, AFUISnippetContentContainerView;

@interface AFUISnippetView : UIView  {
    <AFUISnippetViewDelegate> *_delegate;
    AFUISnippetContentContainerView *_contentContainer;
    UIView *_shadowView;
    UIImageView *_bottomGradientImage;
    BOOL _hasDisclosure;
    BOOL _isDisclosed;
    int _backgroundStyle;
}

@property(retain) UIView * contentView;
@property(retain) UIView * backgroundView;
@property int borderStyle;
@property BOOL showsShadow;
@property(getter=isDisclosed) BOOL disclosed;
@property BOOL hasDisclosure;
@property <AFUISnippetViewDelegate> * delegate;

+ (void)layoutShadowView:(id)arg1 withinBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (id)addShadowToView:(id)arg1;

- (void)dealloc;
- (BOOL)showsShadow;
- (void)setHasDisclosure:(BOOL)arg1;
- (void)setDisclosed:(BOOL)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (BOOL)isDisclosed;
- (BOOL)hasDisclosure;
- (void)setShowsShadow:(BOOL)arg1;
- (void)_disclosureButtonHit:(id)arg1;
- (void)_resizeToFit;
- (void)_setDisclosed:(BOOL)arg1;
- (int)backgroundStyle;
- (void)setBackgroundStyle:(int)arg1;
- (int)borderStyle;
- (void)setBorderStyle:(int)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)contentView;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end