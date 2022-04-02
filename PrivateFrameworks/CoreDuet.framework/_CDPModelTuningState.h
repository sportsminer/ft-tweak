/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPModelTuningState : NSObject <NSSecureCoding> {
    float  _bestLogLambda;
    float  _bestScore;
    float  _bestThreshold;
    float  _bestW0;
    int  _i;
    int  _j;
}

@property (nonatomic) float bestLogLambda;
@property (nonatomic) float bestScore;
@property (nonatomic) float bestThreshold;
@property (nonatomic) float bestW0;
@property (nonatomic) int i;
@property (nonatomic) int j;
@property (nonatomic, readonly) float progress;

+ (id)initialTuningState;
+ (bool)supportsSecureCoding;

- (float)bestLogLambda;
- (float)bestScore;
- (float)bestThreshold;
- (float)bestW0;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)i;
- (id)initWithCoder:(id)arg1;
- (int)j;
- (float)progress;
- (void)setBestLogLambda:(float)arg1;
- (void)setBestScore:(float)arg1;
- (void)setBestThreshold:(float)arg1;
- (void)setBestW0:(float)arg1;
- (void)setI:(int)arg1;
- (void)setJ:(int)arg1;

@end
