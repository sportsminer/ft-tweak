/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAStandardInviteView : UIView <FAInviteViewProtocol> {
    UIImageView * _familySharingLogo;
    FAFamilySharingFeaturesView * _featuresView;
    UILabel * _inviteHeaderLabel;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_heightForText:(id)arg1 width:(double)arg2;
- (double)_heightForTitle:(id)arg1 width:(double)arg2;
- (id)_labelWithCenteredText:(id)arg1;
- (double)desiredHeightForWidth:(double)arg1;
- (id)initWithInvite:(id)arg1 hideLocationSharing:(bool)arg2;
- (void)layoutSubviews;

@end