/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSimpleRestaurantMenuTextGroup : PBCodable <NSCopying> {
    NSMutableArray * _menuItems;
    NSString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSMutableArray *menuItems;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)menuItemType;

- (void).cxx_destruct;
- (void)addMenuItem:(id)arg1;
- (void)clearMenuItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)menuItemAtIndex:(unsigned long long)arg1;
- (id)menuItems;
- (unsigned long long)menuItemsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMenuItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
