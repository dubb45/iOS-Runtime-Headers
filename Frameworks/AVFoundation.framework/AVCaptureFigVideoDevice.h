/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary;



@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver>
{
    NSDictionary *_deviceProperties;
    NSInteger _focusMode;
    struct CGPoint { 
        float x; 
        float y; 
    } _focusPointOfInterest;
    NSInteger _focusInFlightCount;
    BOOL _adjustingFocus;
    NSInteger _exposureMode;
    struct CGPoint { 
        float x; 
        float y; 
    } _exposurePointOfInterest;
    BOOL _adjustingExposure;
    NSInteger _wbMode;
    BOOL _adjustingWB;
    NSInteger _flashMode;
    NSInteger _torchMode;
    BOOL _isConnected;
}

+ (void)initialize;
+ (BOOL)_cameraAccessIsEnabled;
+ (id)_devices;

- (void)setTorchMode:(NSInteger)arg1;
- (BOOL)hasFlash;
- (NSInteger)flashMode;
- (void)setFlashMode:(NSInteger)arg1;
- (id)localizedName;
- (id)initWithProperties:(id)arg1;
- (NSInteger)position;
- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_applyPendingPropertiesToRecorder;
- (BOOL)_setFocusWithMode:(NSInteger)arg1 pointOfInterest:(id)arg2;
- (NSInteger)focusMode;
- (void)setFocusMode:(NSInteger)arg1;
- (struct CGPoint { float x1; float x2; })focusPointOfInterest;
- (void)setFocusPointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isAdjustingFocus;
- (void)_setAdjustingFocus:(BOOL)arg1;
- (void)_setAdjustingExposure:(BOOL)arg1;
- (BOOL)_setExposureWithMode:(NSInteger)arg1 pointOfInterest:(id)arg2;
- (NSInteger)exposureMode;
- (void)setExposureMode:(NSInteger)arg1;
- (struct CGPoint { float x1; float x2; })exposurePointOfInterest;
- (void)setExposurePointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isAdjustingExposure;
- (BOOL)isAdjustingWhiteBalance;
- (void)_setAdjustingWhiteBalance:(BOOL)arg1;
- (NSInteger)_whiteBalanceMode;
- (BOOL)_setWhiteBalanceMode:(NSInteger)arg1;
- (NSInteger)whiteBalanceMode;
- (void)setWhiteBalanceMode:(NSInteger)arg1;
- (BOOL)_setFlashMode:(NSInteger)arg1;
- (BOOL)_setTorchMode:(NSInteger)arg1;
- (NSInteger)torchMode;
- (NSInteger)_torchMode;
- (NSInteger)_flashMode;
- (id)devicePropertiesDictionary;
- (id)modelID;
- (BOOL)hasMediaType:(id)arg1;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (void)_sessionDidStart;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)isConnected;
- (BOOL)startUsingDevice:(id*)arg1;
- (void)stopUsingDevice;
- (BOOL)isFlashModeSupported:(NSInteger)arg1;
- (BOOL)hasTorch;
- (BOOL)isTorchModeSupported:(NSInteger)arg1;
- (BOOL)isFocusModeSupported:(NSInteger)arg1;
- (BOOL)isFocusPointOfInterestSupported;
- (BOOL)isExposureModeSupported:(NSInteger)arg1;
- (BOOL)isExposurePointOfInterestSupported;
- (BOOL)isWhiteBalanceModeSupported:(NSInteger)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)setSession:(id)arg1;
- (id)uniqueID;

@end