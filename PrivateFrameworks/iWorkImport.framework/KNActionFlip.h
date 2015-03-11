/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface KNActionFlip : KNAnimationEffect <KNActionEffectBuildAnimator> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)actionEffectStyle;
+ (int)animationCategory;
+ (id)animationFilter;
+ (id)animationName;
+ (id)applyActionEffect:(id)arg1 toAttributes:(id)arg2;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (unsigned int)directionType;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (BOOL)isEmphasisBuildAnimation;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)thumbnailImageNameForType:(int)arg1;

- (id)animationsForTextureSet:(id)arg1 context:(id)arg2;
- (id)animationsForTextureSet:(id)arg1 finalTextureSet:(id)arg2 duration:(double)arg3 attributes:(id)arg4 previousAttributes:(id)arg5;
- (void)p_addAnimationsForLayer:(id)arg1 duration:(double)arg2 endAngle:(float)arg3 result:(id)arg4;

@end