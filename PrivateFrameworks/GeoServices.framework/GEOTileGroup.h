/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileGroup : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _attributionIndexs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _fontIndexs;
    struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } * _hybridUnavailableRegions;
    unsigned long long  _hybridUnavailableRegionsCount;
    unsigned long long  _hybridUnavailableRegionsSpace;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _iconIndexs;
    unsigned int  _identifier;
    struct GEORegionalResourceIndex { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _regionalResourceIndexs;
    unsigned long long  _regionalResourceIndexsCount;
    unsigned long long  _regionalResourceIndexsSpace;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _resourceIndexs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _styleSheetIndexs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _textureIndexs;
    struct GEOVersionedTileSet { unsigned int x1; unsigned int x2; } * _tileSets;
    unsigned long long  _tileSetsCount;
    unsigned long long  _tileSetsSpace;
    PBUnknownFields * _unknownFields;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _xmlIndexs;
}

@property (nonatomic, readonly) unsigned int*attributionIndexs;
@property (nonatomic, readonly) unsigned long long attributionIndexsCount;
@property (nonatomic, readonly) unsigned int*fontIndexs;
@property (nonatomic, readonly) unsigned long long fontIndexsCount;
@property (nonatomic, readonly) struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*hybridUnavailableRegions;
@property (nonatomic, readonly) unsigned long long hybridUnavailableRegionsCount;
@property (nonatomic, readonly) unsigned int*iconIndexs;
@property (nonatomic, readonly) unsigned long long iconIndexsCount;
@property (nonatomic) unsigned int identifier;
@property (nonatomic, readonly) struct GEORegionalResourceIndex { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*regionalResourceIndexs;
@property (nonatomic, readonly) unsigned long long regionalResourceIndexsCount;
@property (nonatomic, readonly) unsigned int*resourceIndexs;
@property (nonatomic, readonly) unsigned long long resourceIndexsCount;
@property (nonatomic, readonly) unsigned int*styleSheetIndexs;
@property (nonatomic, readonly) unsigned long long styleSheetIndexsCount;
@property (nonatomic, readonly) unsigned int*textureIndexs;
@property (nonatomic, readonly) unsigned long long textureIndexsCount;
@property (nonatomic, readonly) struct GEOVersionedTileSet { unsigned int x1; unsigned int x2; }*tileSets;
@property (nonatomic, readonly) unsigned long long tileSetsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readonly) unsigned int*xmlIndexs;
@property (nonatomic, readonly) unsigned long long xmlIndexsCount;

- (void).cxx_destruct;
- (void)addAttributionIndex:(unsigned int)arg1;
- (void)addFontIndex:(unsigned int)arg1;
- (void)addHybridUnavailableRegion:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (void)addIconIndex:(unsigned int)arg1;
- (void)addRegionalResourceIndex:(struct GEORegionalResourceIndex { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)addResourceIndex:(unsigned int)arg1;
- (void)addStyleSheetIndex:(unsigned int)arg1;
- (void)addTextureIndex:(unsigned int)arg1;
- (void)addTileSet:(struct GEOVersionedTileSet { unsigned int x1; unsigned int x2; })arg1;
- (void)addXmlIndex:(unsigned int)arg1;
- (unsigned int)attributionIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)attributionIndexs;
- (unsigned long long)attributionIndexsCount;
- (void)clearAttributionIndexs;
- (void)clearFontIndexs;
- (void)clearHybridUnavailableRegions;
- (void)clearIconIndexs;
- (void)clearRegionalResourceIndexs;
- (void)clearResourceIndexs;
- (void)clearStyleSheetIndexs;
- (void)clearTextureIndexs;
- (void)clearTileSets;
- (void)clearXmlIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fontIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)fontIndexs;
- (unsigned long long)fontIndexsCount;
- (unsigned long long)hash;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })hybridUnavailableRegionAtIndex:(unsigned long long)arg1;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)hybridUnavailableRegions;
- (unsigned long long)hybridUnavailableRegionsCount;
- (unsigned int)iconIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)iconIndexs;
- (unsigned long long)iconIndexsCount;
- (unsigned int)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (struct GEORegionalResourceIndex { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })regionalResourceIndexAtIndex:(unsigned long long)arg1;
- (struct GEORegionalResourceIndex { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)regionalResourceIndexs;
- (unsigned long long)regionalResourceIndexsCount;
- (unsigned int)resourceIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)resourceIndexs;
- (unsigned long long)resourceIndexsCount;
- (void)setAttributionIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setFontIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setHybridUnavailableRegions:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 count:(unsigned long long)arg2;
- (void)setIconIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setRegionalResourceIndexs:(struct GEORegionalResourceIndex { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned long long)arg2;
- (void)setResourceIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setStyleSheetIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTextureIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTileSets:(struct GEOVersionedTileSet { unsigned int x1; unsigned int x2; }*)arg1 count:(unsigned long long)arg2;
- (void)setXmlIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int)styleSheetIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)styleSheetIndexs;
- (unsigned long long)styleSheetIndexsCount;
- (unsigned int)textureIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)textureIndexs;
- (unsigned long long)textureIndexsCount;
- (struct GEOVersionedTileSet { unsigned int x1; unsigned int x2; })tileSetAtIndex:(unsigned long long)arg1;
- (struct GEOVersionedTileSet { unsigned int x1; unsigned int x2; }*)tileSets;
- (unsigned long long)tileSetsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (unsigned int)xmlIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)xmlIndexs;
- (unsigned long long)xmlIndexsCount;

@end
