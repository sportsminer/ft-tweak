/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityTracklistItemTableViewCell : UITableViewCell <MusicEntityContentDescriptorViewConfiguring, MusicEntityTracklistItemViewDelegate> {
    bool  _entityDisabled;
    double  _leadingTextColumnWidth;
    MusicEntityTracklistItemView * _tracklistItemView;
}

@property (nonatomic, retain) MusicEntityViewContentDescriptor *contentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEntityDisabled, nonatomic) bool entityDisabled;
@property (nonatomic, retain) <MusicEntityValueProviding> *entityValueProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic) double leadingTextColumnWidth;
@property (readonly) Class superclass;

+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;

- (void).cxx_destruct;
- (void)_setShouldHaveFullLengthBottomSeparator:(bool)arg1;
- (id)contentDescriptor;
- (void)dealloc;
- (id)entityValueProvider;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isEntityDisabled;
- (void)layoutSubviews;
- (double)leadingTextColumnWidth;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentDescriptor:(id)arg1;
- (void)setEntityDisabled:(bool)arg1;
- (void)setEntityValueProvider:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setLeadingTextColumnWidth:(double)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (bool)tracklistItemViewShouldLayoutAsEditing:(id)arg1;

@end
