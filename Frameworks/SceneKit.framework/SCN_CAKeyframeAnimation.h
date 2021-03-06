/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation {
    struct __C3DKeyframedAnimation { struct __C3DAnimation { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_3_1; unsigned char x_1_3_2[4]; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; int x_1_2_6; int x_1_2_7; } x_1_1_1; double x_1_1_2; float x_1_1_3; struct __C3DTimingFunction {} *x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; unsigned int x_1_1_8 : 1; unsigned int x_1_1_9 : 1; unsigned int x_1_1_10 : 1; unsigned int x_1_1_11 : 2; unsigned int x_1_1_12 : 1; unsigned int x_1_1_13 : 1; unsigned int x_1_1_14 : 1; unsigned int x_1_1_15 : 1; unsigned int x_1_1_16 : 1; double x_1_1_17; double x_1_1_18; float x_1_1_19; float x_1_1_20; float x_1_1_21; float x_1_1_22; int (*x_1_1_23)(); void *x_1_1_24; void *x_1_1_25; void *x_1_1_26; struct __C3DAnimationEvents {} *x_1_1_27; struct { int (*x_28_2_1)(); int (*x_28_2_2)(); } x_1_1_28; } x1; struct __C3DKeyframeController {} *x2; } *_c3dAnimation;
    BOOL _caReady;
}

- (void)_clearC3DCache;
- (void)_convertToCA;
- (id)animationEvents;
- (BOOL)autoreverses;
- (id)biasValues;
- (struct __C3DKeyframedAnimation { struct __C3DAnimation { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_3_1; unsigned char x_1_3_2[4]; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; int x_1_2_6; int x_1_2_7; } x_1_1_1; double x_1_1_2; float x_1_1_3; struct __C3DTimingFunction {} *x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; unsigned int x_1_1_8 : 1; unsigned int x_1_1_9 : 1; unsigned int x_1_1_10 : 1; unsigned int x_1_1_11 : 2; unsigned int x_1_1_12 : 1; unsigned int x_1_1_13 : 1; unsigned int x_1_1_14 : 1; unsigned int x_1_1_15 : 1; unsigned int x_1_1_16 : 1; double x_1_1_17; double x_1_1_18; float x_1_1_19; float x_1_1_20; float x_1_1_21; float x_1_1_22; int (*x_1_1_23)(); void *x_1_1_24; void *x_1_1_25; void *x_1_1_26; struct __C3DAnimationEvents {} *x_1_1_27; struct { int (*x_28_2_1)(); int (*x_28_2_2)(); } x_1_1_28; } x1; struct __C3DKeyframeController {} *x2; }*)c3dAnimation;
- (BOOL)commitsOnCompletion;
- (id)continuityValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)duration;
- (float)fadeInDuration;
- (float)fadeOutDuration;
- (id)fillMode;
- (BOOL)isAdditive;
- (BOOL)isCumulative;
- (BOOL)isRemovedOnCompletion;
- (id)keyTimes;
- (float)repeatCount;
- (double)repeatDuration;
- (void)setAdditive:(BOOL)arg1;
- (void)setAnimationEvents:(id)arg1;
- (void)setAutoreverses:(BOOL)arg1;
- (void)setBiasValues:(id)arg1;
- (void)setC3dAnimation:(struct __C3DKeyframedAnimation { struct __C3DAnimation { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_3_1; unsigned char x_1_3_2[4]; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; int x_1_2_6; int x_1_2_7; } x_1_1_1; double x_1_1_2; float x_1_1_3; struct __C3DTimingFunction {} *x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; unsigned int x_1_1_8 : 1; unsigned int x_1_1_9 : 1; unsigned int x_1_1_10 : 1; unsigned int x_1_1_11 : 2; unsigned int x_1_1_12 : 1; unsigned int x_1_1_13 : 1; unsigned int x_1_1_14 : 1; unsigned int x_1_1_15 : 1; unsigned int x_1_1_16 : 1; double x_1_1_17; double x_1_1_18; float x_1_1_19; float x_1_1_20; float x_1_1_21; float x_1_1_22; int (*x_1_1_23)(); void *x_1_1_24; void *x_1_1_25; void *x_1_1_26; struct __C3DAnimationEvents {} *x_1_1_27; struct { int (*x_28_2_1)(); int (*x_28_2_2)(); } x_1_1_28; } x1; struct __C3DKeyframeController {} *x2; }*)arg1;
- (void)setCommitsOnCompletion:(BOOL)arg1;
- (void)setContinuityValues:(id)arg1;
- (void)setCumulative:(BOOL)arg1;
- (void)setDuration:(double)arg1;
- (void)setFadeInDuration:(float)arg1;
- (void)setFadeOutDuration:(float)arg1;
- (void)setFillMode:(id)arg1;
- (void)setKeyTimes:(id)arg1;
- (void)setRemovedOnCompletion:(BOOL)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setRepeatDuration:(double)arg1;
- (void)setSpeed:(float)arg1;
- (void)setTensionValues:(id)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setTimingFunctions:(id)arg1;
- (void)setUsesSceneTimeBase:(BOOL)arg1;
- (void)setValues:(id)arg1;
- (float)speed;
- (id)tensionValues;
- (double)timeOffset;
- (id)timingFunction;
- (id)timingFunctions;
- (BOOL)usesSceneTimeBase;
- (id)values;

@end
