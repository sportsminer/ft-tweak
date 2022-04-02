/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOProactiveItem : PBCodable <NSCopying> {
    bool  _deleted;
    bool  _edited;
    struct { 
        unsigned int proactiveItemType : 1; 
        unsigned int timeSinceStart : 1; 
        unsigned int deleted : 1; 
        unsigned int edited : 1; 
        unsigned int shared : 1; 
        unsigned int tapped : 1; 
        unsigned int visible : 1; 
    }  _has;
    int  _proactiveItemType;
    bool  _shared;
    bool  _tapped;
    int  _timeSinceStart;
    bool  _visible;
}

@property (nonatomic) bool deleted;
@property (nonatomic) bool edited;
@property (nonatomic) bool hasDeleted;
@property (nonatomic) bool hasEdited;
@property (nonatomic) bool hasProactiveItemType;
@property (nonatomic) bool hasShared;
@property (nonatomic) bool hasTapped;
@property (nonatomic) bool hasTimeSinceStart;
@property (nonatomic) bool hasVisible;
@property (nonatomic) int proactiveItemType;
@property (nonatomic) bool shared;
@property (nonatomic) bool tapped;
@property (nonatomic) int timeSinceStart;
@property (nonatomic) bool visible;

- (int)StringAsProactiveItemType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleted;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)edited;
- (bool)hasDeleted;
- (bool)hasEdited;
- (bool)hasProactiveItemType;
- (bool)hasShared;
- (bool)hasTapped;
- (bool)hasTimeSinceStart;
- (bool)hasVisible;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)proactiveItemType;
- (id)proactiveItemTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setEdited:(bool)arg1;
- (void)setHasDeleted:(bool)arg1;
- (void)setHasEdited:(bool)arg1;
- (void)setHasProactiveItemType:(bool)arg1;
- (void)setHasShared:(bool)arg1;
- (void)setHasTapped:(bool)arg1;
- (void)setHasTimeSinceStart:(bool)arg1;
- (void)setHasVisible:(bool)arg1;
- (void)setProactiveItemType:(int)arg1;
- (void)setShared:(bool)arg1;
- (void)setTapped:(bool)arg1;
- (void)setTimeSinceStart:(int)arg1;
- (void)setVisible:(bool)arg1;
- (bool)shared;
- (bool)tapped;
- (int)timeSinceStart;
- (bool)visible;
- (void)writeTo:(id)arg1;

@end
