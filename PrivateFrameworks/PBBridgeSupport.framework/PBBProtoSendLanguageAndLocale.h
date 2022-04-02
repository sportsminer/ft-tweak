/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoSendLanguageAndLocale : PBCodable <NSCopying> {
    NSMutableArray * _appleLanguages;
    NSString * _appleLocale;
    NSData * _archivedPreferences;
}

@property (nonatomic, retain) NSMutableArray *appleLanguages;
@property (nonatomic, retain) NSString *appleLocale;
@property (nonatomic, retain) NSData *archivedPreferences;
@property (nonatomic, readonly) bool hasAppleLocale;
@property (nonatomic, readonly) bool hasArchivedPreferences;

+ (Class)appleLanguagesType;

- (void).cxx_destruct;
- (void)addAppleLanguages:(id)arg1;
- (id)appleLanguages;
- (id)appleLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)appleLanguagesCount;
- (id)appleLocale;
- (id)archivedPreferences;
- (void)clearAppleLanguages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppleLocale;
- (bool)hasArchivedPreferences;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppleLanguages:(id)arg1;
- (void)setAppleLocale:(id)arg1;
- (void)setArchivedPreferences:(id)arg1;
- (void)writeTo:(id)arg1;

@end
