/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUUserMessageDataSource, MPButton, NSTimer, UIImageView, UILabel, UIProgressView;

@interface IUUserMessageView : UIView {
    UIImageView *_cloudImageView;
    NSTimer *_cloudProgressTimer;
    UIProgressView *_cloudProgressView;
    IUUserMessageDataSource *_dataSource;
    MPButton *_findContentButton;
    UIImageView *_imageView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property(retain) IUUserMessageDataSource * dataSource;

- (void)_findContentButton:(id)arg1;
- (void)_isCloudUpdateInProgressDidChangeNotification:(id)arg1;
- (id)_newFindContentButton;
- (id)_newLabel;
- (id)_newSubtitleLabel;
- (id)_newTitleLabel;
- (void)_reloadView;
- (void)_sizeLabelToFit:(id)arg1;
- (void)_updateProgressTimer:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDataSource:(id)arg1;

@end