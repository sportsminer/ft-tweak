/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface AWDProactiveModelFittingLinRegObjectiveFeatures : PBCodable <NSCopying> {
    float  _featuresL2norm;
    float  _featuresScaleFactor;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int featuresL2norm : 1; 
        unsigned int featuresScaleFactor : 1; 
    }  _has;
    AWDProactiveModelFittingMinibatchStats * _minibatchStats;
    AWDProactiveModelFittingModelInfo * _modelInfo;
    AWDProactiveModelFittingSparseFloatVector * _sparseFloatFeatures;
    AWDProactiveModelFittingQuantizedSparseVector * _sparseQuantizedFeatures;
    unsigned long long  _timestamp;
}

@property (nonatomic) float featuresL2norm;
@property (nonatomic) float featuresScaleFactor;
@property (nonatomic) bool hasFeaturesL2norm;
@property (nonatomic) bool hasFeaturesScaleFactor;
@property (nonatomic, readonly) bool hasMinibatchStats;
@property (nonatomic, readonly) bool hasModelInfo;
@property (nonatomic, readonly) bool hasSparseFloatFeatures;
@property (nonatomic, readonly) bool hasSparseQuantizedFeatures;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (nonatomic, retain) AWDProactiveModelFittingModelInfo *modelInfo;
@property (nonatomic, retain) AWDProactiveModelFittingSparseFloatVector *sparseFloatFeatures;
@property (nonatomic, retain) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedFeatures;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)featuresL2norm;
- (unsigned long long)featuresLength;
- (float)featuresScaleFactor;
- (float)featuresValueAtIndex:(unsigned long long)arg1;
- (bool)hasFeaturesL2norm;
- (bool)hasFeaturesScaleFactor;
- (bool)hasMinibatchStats;
- (bool)hasModelInfo;
- (bool)hasObjectiveFeatures;
- (bool)hasSparseFloatFeatures;
- (bool)hasSparseQuantizedFeatures;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)minibatchStats;
- (id)modelInfo;
- (bool)readFrom:(id)arg1;
- (void)setFeaturesL2norm:(float)arg1;
- (void)setFeaturesScaleFactor:(float)arg1;
- (void)setHasFeaturesL2norm:(bool)arg1;
- (void)setHasFeaturesScaleFactor:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMinibatchStats:(id)arg1;
- (void)setModelInfo:(id)arg1;
- (void)setSparseFloatFeatures:(id)arg1;
- (void)setSparseQuantizedFeatures:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)sparseFloatFeatures;
- (id)sparseQuantizedFeatures;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end