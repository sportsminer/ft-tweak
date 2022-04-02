/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDReplaceDeletePrototypeChange : NSObject <TSDPrototypeChange> {
    id  mPrototype;
    bool  mPrototypeIsBeingDeleted;
    bool  mPrototypeIsBeingReplaced;
    id  mReplacement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, retain) <TSSPropertySource> *propertiesAfterChange;
@property (readonly, retain) <TSSPropertySource> *propertiesBeforeChange;
@property (readonly, retain) id prototype;
@property (readonly) bool prototypeIsBeingDeleted;
@property (readonly) bool prototypeIsBeingModified;
@property (readonly) bool prototypeIsBeingReplaced;
@property (readonly, retain) id replacement;
@property (readonly) Class superclass;

- (id)changedPropertySet;
- (void)dealloc;
- (id)description;
- (id)initDeletePrototypeChangeForPrototype:(id)arg1 replacement:(id)arg2;
- (id)initReplacePrototypeChangeForPrototype:(id)arg1 toReplacement:(id)arg2;
- (id)propertiesAfterChange;
- (bool)propertiesAreChanging:(id)arg1;
- (id)propertiesBeforeChange;
- (bool)propertyIsChanging:(int)arg1;
- (id)prototype;
- (bool)prototypeIsBeingDeleted;
- (bool)prototypeIsBeingModified;
- (bool)prototypeIsBeingReplaced;
- (id)replacement;

@end
