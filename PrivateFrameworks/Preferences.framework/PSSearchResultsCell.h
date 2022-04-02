/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchResultsCell : UITableViewCell {
    bool  _shouldIndentContent;
    bool  _shouldIndentSeparator;
}

@property (nonatomic) bool shouldIndentContent;
@property (nonatomic) bool shouldIndentSeparator;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setShouldIndentContent:(bool)arg1;
- (void)setShouldIndentSeparator:(bool)arg1;
- (bool)shouldIndentContent;
- (bool)shouldIndentSeparator;

@end
