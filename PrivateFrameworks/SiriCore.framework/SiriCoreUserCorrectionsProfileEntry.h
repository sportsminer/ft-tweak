/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreUserCorrectionsProfileEntry : PBCodable <NSCopying> {
    unsigned int  _alternativesCorrectionsCount;
    NSString * _correctedText;
    struct { 
        unsigned int alternativesCorrectionsCount : 1; 
        unsigned int spellingCorrectionsCount : 1; 
        unsigned int tap2editCorrectionsCount : 1; 
    }  _has;
    SiriCoreCorrectionPronunciation * _pronunciationData;
    unsigned int  _spellingCorrectionsCount;
    unsigned int  _tap2editCorrectionsCount;
}

@property (nonatomic) unsigned int alternativesCorrectionsCount;
@property (nonatomic, retain) NSString *correctedText;
@property (nonatomic) bool hasAlternativesCorrectionsCount;
@property (nonatomic, readonly) bool hasCorrectedText;
@property (nonatomic, readonly) bool hasPronunciationData;
@property (nonatomic) bool hasSpellingCorrectionsCount;
@property (nonatomic) bool hasTap2editCorrectionsCount;
@property (nonatomic, retain) SiriCoreCorrectionPronunciation *pronunciationData;
@property (nonatomic) unsigned int spellingCorrectionsCount;
@property (nonatomic) unsigned int tap2editCorrectionsCount;

- (void).cxx_destruct;
- (unsigned int)alternativesCorrectionsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedText;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlternativesCorrectionsCount;
- (bool)hasCorrectedText;
- (bool)hasPronunciationData;
- (bool)hasSpellingCorrectionsCount;
- (bool)hasTap2editCorrectionsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pronunciationData;
- (bool)readFrom:(id)arg1;
- (void)setAlternativesCorrectionsCount:(unsigned int)arg1;
- (void)setCorrectedText:(id)arg1;
- (void)setHasAlternativesCorrectionsCount:(bool)arg1;
- (void)setHasSpellingCorrectionsCount:(bool)arg1;
- (void)setHasTap2editCorrectionsCount:(bool)arg1;
- (void)setPronunciationData:(id)arg1;
- (void)setSpellingCorrectionsCount:(unsigned int)arg1;
- (void)setTap2editCorrectionsCount:(unsigned int)arg1;
- (unsigned int)spellingCorrectionsCount;
- (unsigned int)tap2editCorrectionsCount;
- (void)writeTo:(id)arg1;

@end
