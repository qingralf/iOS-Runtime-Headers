/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUElasticApplier : HUApplier {
    BOOL  _applyOnlyOnProgressChanges;
    BOOL  _completesWhenAtRest;
    float  _currentVelocity;
    CADisplayLink * _displayLink;
    unsigned int  _frameCount;
    float  _friction;
    float  _previousForce;
    BOOL  _progressBeginsFromInitialInputProgress;
    id /* block */  _progressInputBlock;
    unsigned int  _restingFrameCount;
    float  _tension;
}

@property (nonatomic) BOOL applyOnlyOnProgressChanges;
@property (nonatomic) BOOL completesWhenAtRest;
@property (nonatomic) float currentVelocity;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic) unsigned int frameCount;
@property (nonatomic) float friction;
@property (nonatomic) float previousForce;
@property (nonatomic) BOOL progressBeginsFromInitialInputProgress;
@property (nonatomic, copy) id /* block */ progressInputBlock;
@property (nonatomic) unsigned int restingFrameCount;
@property (nonatomic) float tension;

- (void).cxx_destruct;
- (void)_displayLinkTick;
- (void)_invalidateDisplayLinkIfNecessary;
- (void)_updateProgressForInitialUpdate:(BOOL)arg1;
- (BOOL)applyOnlyOnProgressChanges;
- (BOOL)complete:(BOOL)arg1;
- (BOOL)completesWhenAtRest;
- (float)currentVelocity;
- (id)displayLink;
- (unsigned int)frameCount;
- (float)friction;
- (id)init;
- (id)initWithProgressInputBlock:(id /* block */)arg1;
- (float)previousForce;
- (BOOL)progressBeginsFromInitialInputProgress;
- (id /* block */)progressInputBlock;
- (unsigned int)restingFrameCount;
- (void)setApplyOnlyOnProgressChanges:(BOOL)arg1;
- (void)setCompletesWhenAtRest:(BOOL)arg1;
- (void)setCurrentVelocity:(float)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setFrameCount:(unsigned int)arg1;
- (void)setFriction:(float)arg1;
- (void)setPreviousForce:(float)arg1;
- (void)setProgressBeginsFromInitialInputProgress:(BOOL)arg1;
- (void)setProgressInputBlock:(id /* block */)arg1;
- (void)setRestingFrameCount:(unsigned int)arg1;
- (void)setTension:(float)arg1;
- (BOOL)start;
- (float)tension;

@end
