/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTestModeChangeListener : NSObject {
    int _desiredDevice;
    int _desiredMode;
    id /* block */ _handler;
}

@property (nonatomic) int desiredDevice;
@property (nonatomic) int desiredMode;
@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (int)desiredDevice;
- (int)desiredMode;
- (id /* block */)handler;
- (void)setDesiredDevice:(int)arg1;
- (void)setDesiredMode:(int)arg1;
- (void)setHandler:(id /* block */)arg1;

@end