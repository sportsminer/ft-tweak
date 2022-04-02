/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMoodManager : VEiOSSharedObject {
    NSArray * _editStylesList;
    NSDictionary * _rawEditStylesList;
    NSDictionary * _rawSongList;
    NSDictionary * _rawTitlesList;
    NSDictionary * _rawTransitionDetailsList;
    NSArray * _songList;
    NSArray * _titleStylesForTitlePicker;
    NSArray * _titlesList;
}

@property (nonatomic, retain) NSArray *editStylesList;
@property (nonatomic, retain) NSDictionary *rawEditStylesList;
@property (nonatomic, retain) NSDictionary *rawSongList;
@property (nonatomic, retain) NSDictionary *rawTitlesList;
@property (nonatomic, retain) NSDictionary *rawTransitionDetailsList;
@property (nonatomic, retain) NSArray *songList;
@property (nonatomic, retain) NSArray *titleStylesForTitlePicker;
@property (nonatomic, retain) NSArray *titlesList;

+ (id)_availableProjectFilterIDsSorted;
+ (id)_displayNameForSingleTransition:(id)arg1;
+ (bool)_effectIsACut:(id)arg1;
+ (bool)_effectIsAFade:(id)arg1;
+ (bool)_effectIsASlide:(id)arg1 organicOnly:(bool)arg2;
+ (id)_fetchMediaItemForMediaID:(unsigned long long)arg1;
+ (id)_fetchStoreItemForMediaID:(unsigned long long)arg1;
+ (id)_moodIDsForProjectFilterID:(id)arg1;
+ (id)_pacingDescriptionForSongDict:(id)arg1;
+ (unsigned long long)_projectFilterCountForMood:(id)arg1;
+ (id)_projectFilterForMood:(id)arg1;
+ (id)_projectFilterNameForID:(id)arg1;
+ (id)_projectFiltersForMood:(id)arg1;
+ (id)_randomMoodID;
+ (id)_randomPortraitSafeTitleForBlueprint:(id)arg1;
+ (id)_storeItemFromBlueprint:(id)arg1;
+ (id)allMoodIDs;
+ (id)allMoodIDsSorted;
+ (unsigned long long)allMoodsCount;
+ (id)backstopEditValuesForPacing:(id)arg1;
+ (id)blueprintForBlueprint:(id)arg1 replaceEditStyleByID:(id)arg2;
+ (id)blueprintForBlueprint:(id)arg1 replaceEditStyleBySingleTransition:(id)arg2;
+ (id)blueprintForBlueprint:(id)arg1 replaceProjectFilterByID:(id)arg2;
+ (id)blueprintForBlueprint:(id)arg1 replaceSongByID:(id)arg2 shouldLockSong:(bool)arg3;
+ (id)blueprintForBlueprint:(id)arg1 replaceSongByiTunesMediaID:(unsigned long long)arg2;
+ (id)blueprintForBlueprint:(id)arg1 replaceSongWithKeywords:(id)arg2 shouldLockSong:(bool)arg3;
+ (id)blueprintForBlueprint:(id)arg1 replaceTitleByID:(id)arg2;
+ (id)blueprintForBlueprint:(id)arg1 replaceTitleByID:(id)arg2 orChangeAnimation:(bool)arg3;
+ (id)blueprintForBlueprint:(id)arg1 replaceTitleByID:(id)arg2 shouldLockTitle:(bool)arg3;
+ (id)blueprintForBlueprint:(id)arg1 replaceTitleSettingsEffectIDOnly:(id)arg2;
+ (id)blueprintForBlueprint:(id)arg1 titleValidforClipLength:(id)arg2;
+ (id)blueprintFromFontName:(id)arg1;
+ (bool)blueprintTitleSupportsSubtitle:(id)arg1;
+ (id)blueprintWithMood:(id)arg1;
+ (id)blueprintWithNewSongForBlueprint:(id)arg1;
+ (id)blueprintWithNewTitleStyleForBlueprint:(id)arg1;
+ (id)blueprintWithPortraitSafeTitleForBlueprint:(id)arg1;
+ (bool)buildInTitle:(id)arg1 forClipLength:(id)arg2;
+ (bool)buildOutTitle:(id)arg1 forClipLength:(id)arg2;
+ (id)displayNameForArtist:(id)arg1;
+ (id)displayNameForEditStyle:(id)arg1;
+ (id)displayNameForFilter:(id)arg1;
+ (id)displayNameForMoodID:(id)arg1;
+ (id)displayNameForPacingOfSongID:(id)arg1;
+ (id)displayNameForSingleTransition:(id)arg1;
+ (id)displayNameForSong:(id)arg1;
+ (id)displayNameForTitle:(id)arg1;
+ (id)displayNamesByEditStyleID;
+ (id)displayNamesByProjectFilterID;
+ (id)displayNamesByTitleID;
+ (id)displayNamesByTransitionForBlueprint:(id)arg1;
+ (id)editStyleIDsByMoodIDSorted;
+ (id)fontNameFromBlueprint:(id)arg1;
+ (id)fontNameFromTitleDictionary:(id)arg1;
+ (void)incrementAnimationSpecifier:(id*)arg1 forTitleStyleID:(id)arg2 by:(unsigned long long)arg3;
+ (id)incrementAnimationStyleForBlueprint:(id)arg1 by:(unsigned long long)arg2;
+ (void)logMoodPermutationTallies;
+ (double)minimumAllowedDurationForTitle:(id)arg1;
+ (id)multiUpTransitionsForMood:(id)arg1;
+ (void)populateBlueprint:(id)arg1;
+ (id)projectFilterIDsByMoodIDSorted;
+ (id)randomBlueprint;
+ (id)replaceBlueprint:(id)arg1 usingMoodID:(id)arg2;
+ (id)requestStyleBForBlueprint:(id)arg1;
+ (void)separateAnimationSpecifier:(id*)arg1 fromTitleStyleID:(id*)arg2;
+ (id)sharedMoodManager;
+ (bool)titleHasPortraitContentOption:(id)arg1;
+ (id)titleIDsByMoodIDSorted;
+ (id)titleList;
+ (id)titleListForTitlePicker;
+ (id)titlePartnerTransitionsFromTransitionSet:(id)arg1 forTitleID:(id)arg2 forClipLength:(id)arg3;
+ (bool)titleValid:(id)arg1 forClipLength:(id)arg2;
+ (bool)transitionEndsAtEditPoint:(id)arg1;
+ (id)transitionsByMoodIDSortedForBlueprint:(id)arg1;

- (void).cxx_destruct;
- (id)_KenBurnsORFXUseSet_UseKB:(bool)arg1 fxSway:(bool)arg2 fxFS:(bool)arg3 fxDrift:(bool)arg4 transDir:(bool)arg5 kbType:(id)arg6;
- (void)_addObserverForAvalaibleSongChange;
- (id)_allMoodIDsForMoodPart:(id)arg1 prioritizingMood:(id)arg2;
- (id)_allSongIDsSorted;
- (id)_availableEditStyleIDsSorted;
- (id)_availableSongIDsSorted;
- (id)_availableTitleIDsSorted;
- (id)_availableTransitionsSortedWithPacing:(id)arg1;
- (id)_availableTransitionsWithPacing:(id)arg1;
- (void)_buildSongList;
- (void)_constructEditStyleList;
- (void)_constructTitleList;
- (void)_constructTransitionDetailList;
- (void)_dumpPartList:(id)arg1 forMood:(id)arg2;
- (void)_dumpProjectFiltersForMood:(id)arg1;
- (void)_ingestMoodPartLists;
- (void)_loadMoodPartListsFromFiles;
- (id)_prunedList:(id)arg1 usingEffectInDict:(id)arg2;
- (id)_prunedList:(id)arg1 usingPaceKeywordsInDict:(id)arg2;
- (id)_prunedMoodPartList:(id)arg1 forMood:(id)arg2 defaultsOnly:(bool)arg3;
- (id)_prunedTitleList:(id)arg1 forMood:(id)arg2 andClipLength:(id)arg3;
- (id)_prunedTitleList:(id)arg1 forMood:(id)arg2 defaultsOnly:(bool)arg3;
- (id)_prunedTitlesRemovingDuplicateEffects:(id)arg1;
- (id)_randomBlueprintForMoodID:(id)arg1 andSongID:(id)arg2 excludingPartsInMood:(id)arg3 defaultsOnly:(bool)arg4;
- (void)_removeObserverForAvalaibleSongChange;
- (void)_resetSongList;
- (unsigned long long)_totalTransitionWeightsForEditStyleDict:(id)arg1;
- (id)_uniqueStringForMoodID:(id)arg1;
- (id)_updateTransitionDurationsInEditSytleDict:(id)arg1 withPacing:(id)arg2;
- (id)_updateTransitionDurationsInTransitionDict:(id)arg1 withPacing:(id)arg2 withUsage:(unsigned long long)arg3;
- (id)_useSet_VtoV:(bool)arg1 PtoP:(bool)arg2 PtoV:(bool)arg3 VtoP:(bool)arg4 MultiUp:(bool)arg5 Pano:(bool)arg6 intoOneUp:(bool)arg7 outOfOneUp:(bool)arg8;
- (unsigned long long)candenceForTransition:(id)arg1;
- (void)dealloc;
- (id)defaultTitleFrom:(id)arg1;
- (id)editStylesList;
- (id)fontToDefaultStyleMap;
- (id)fontToStandardMoodMap;
- (id)init;
- (unsigned long long)maxDurationForTransition:(id)arg1 withPacing:(id)arg2;
- (unsigned long long)minDurationForTransition:(id)arg1 withPacing:(id)arg2;
- (id)rawEditStylesList;
- (id)rawSongList;
- (id)rawTitlesList;
- (id)rawTransitionDetailsList;
- (void)setEditStylesList:(id)arg1;
- (void)setRawEditStylesList:(id)arg1;
- (void)setRawSongList:(id)arg1;
- (void)setRawTitlesList:(id)arg1;
- (void)setRawTransitionDetailsList:(id)arg1;
- (void)setSongList:(id)arg1;
- (void)setTitleStylesForTitlePicker:(id)arg1;
- (void)setTitlesList:(id)arg1;
- (id)songList;
- (id)titleStylesForTitlePicker;
- (id)titlesList;
- (void)updateEditStyleListsToIncludeAdditionalStyles:(id)arg1 moodMatchList:(id)arg2 moodCommentList:(id)arg3 transitionSetList:(id)arg4 effectSetList:(id)arg5 multiUpTransitionsStyleList:(id)arg6 burstStyleList:(id)arg7;
- (void)updateTitleListsToIncludeOldContent:(id)arg1 titleSettings:(id)arg2 moodMatchList:(id)arg3 moodCommentList:(id)arg4;
- (id)useKenBurnsSetForTransition:(id)arg1;
- (id)useWhereSetForTransition:(id)arg1;

@end
