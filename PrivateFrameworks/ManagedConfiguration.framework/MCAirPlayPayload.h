/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAirPlayPayload : MCPayload {
    NSArray * _destinationsWithPasswords;
    NSArray * _titlesAndDescriptions;
    NSArray * _whitelistDestinations;
}

@property (nonatomic, retain) NSArray *destinationsWithPasswords;
@property (nonatomic, retain) NSArray *titlesAndDescriptions;
@property (nonatomic, retain) NSArray *whitelistDestinations;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)description;
- (id)destinationsWithPasswords;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)payloadDescriptionKeyValueSections;
- (void)setDestinationsWithPasswords:(id)arg1;
- (void)setTitlesAndDescriptions:(id)arg1;
- (void)setWhitelistDestinations:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)titlesAndDescriptions;
- (id)whitelistDestinations;

@end
