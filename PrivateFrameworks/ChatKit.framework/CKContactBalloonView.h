/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKContactBalloonView : CKColoredBalloonView <CKContactBalloonViewProtocol> {
    UIImageView * _chevron;
    UIImageView * _contactImageView;
    CKMediaObject * _mediaObject;
    UILabel * _nameLabel;
    UILabel * _organizationLabel;
}

@property (nonatomic, retain) UIImageView *chevron;
@property (nonatomic, retain) UIImageView *contactImageView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKMediaObject *mediaObject;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UILabel *organizationLabel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_truncateNameIfNeeded:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)chevron;
- (void)configureForComposition:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;
- (id)contactImageView;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mediaObject;
- (id)nameLabel;
- (id)organizationLabel;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setChevron:(id)arg1;
- (void)setContactImageView:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setOrganizationLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;

@end