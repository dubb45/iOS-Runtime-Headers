/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPULockScreenMediaControlsView : MPUMediaRemoteControlsView {
    UIButton * _addToLibraryButton;
    unsigned int  _addToLibraryButtonStyle;
    BOOL  _addToLibraryButtonVisible;
    MPULayoutInterpolator * _bottomMarginLayoutInterpolator;
    MPULayoutInterpolator * _horizontalMarginLayoutInterpolator;
    <MPULockScreenMediaControlsViewDelegate> * _lockScreenDelegate;
    MPUChronologicalProgressView * _timeView;
    MPUMediaControlsTitlesView * _titlesView;
    MPULayoutInterpolator * _topMarginLayoutInterpolator;
    UIButton * _trackActionsButton;
    BOOL  _trackActionsButtonVisible;
    MPUTransportControlsView * _transportControls;
    MPUMediaControlsVolumeView * _volumeView;
}

@property (nonatomic) unsigned int addToLibraryButtonStyle;
@property (nonatomic) BOOL addToLibraryButtonVisible;
@property (nonatomic) <MPULockScreenMediaControlsViewDelegate> *lockScreenDelegate;
@property (nonatomic) BOOL trackActionsButtonVisible;

- (void).cxx_destruct;
- (void)_addToLibraryButtonTapped:(id)arg1;
- (void)_initLockScreenMediaControlsView;
- (void)_trackActionsButtonTapped:(id)arg1;
- (unsigned int)addToLibraryButtonStyle;
- (BOOL)addToLibraryButtonVisible;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)lockScreenDelegate;
- (void)setAddToLibraryButtonStyle:(unsigned int)arg1;
- (void)setAddToLibraryButtonVisible:(BOOL)arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setLockScreenDelegate:(id)arg1;
- (void)setNowPlayingMetadata:(id)arg1;
- (void)setTrackActionsButtonVisible:(BOOL)arg1;
- (id)timeView;
- (BOOL)trackActionsButtonVisible;
- (id)transportControls;
- (id)volumeView;

@end