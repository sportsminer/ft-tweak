/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCHomeScreenLayoutPayload : MCPayload {
    NSArray * _layout;
}

@property (nonatomic, retain) NSArray *layout;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)layout;
- (id)parseIconsArray:(id)arg1 allowFolders:(bool)arg2 outError:(id*)arg3;
- (id)payloadDescriptionKeyValueSections;
- (void)setLayout:(id)arg1;
- (id)stubDictionary;

@end
