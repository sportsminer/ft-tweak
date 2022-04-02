/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUSRichTitleCardSection : SAUSTitleCardSection

@property (nonatomic) bool centered;
@property (nonatomic, copy) NSString *contentRatingText;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) SAUIImageResource *titleImage;

+ (id)richTitleCardSection;
+ (id)richTitleCardSectionWithDictionary:(id)arg1 context:(id)arg2;

- (bool)centered;
- (id)contentRatingText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCentered:(bool)arg1;
- (void)setContentRatingText:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitleImage:(id)arg1;
- (id)subtitle;
- (id)titleImage;

@end
