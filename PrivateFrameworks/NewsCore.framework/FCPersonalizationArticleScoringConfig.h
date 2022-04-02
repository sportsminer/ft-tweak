/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPersonalizationArticleScoringConfig : NSObject {
    double  _autofavoritedVoteCoefficient;
    double  _baselineRatePrior;
    double  _channelTopicDiversificationInitialPenalty;
    double  _channelTopicDiversificationPenalty;
    double  _channelTopicDiversificationPenaltyHalfLife;
    double  _cohortMembershipCtrCeiling;
    double  _cohortMembershipCurvature;
    double  _cohortMembershipFavoritedBoost;
    double  _cohortMembershipMinWeightedImpressions;
    double  _ctrWithOneAutofavorited;
    double  _ctrWithOneSubscribed;
    double  _ctrWithSubscribedChannel;
    double  _ctrWithThreeAutofavorited;
    double  _ctrWithThreeSubscribed;
    double  _ctrWithTwoAutofavorited;
    double  _ctrWithTwoSubscribed;
    double  _ctrWithZeroAutofavorited;
    double  _ctrWithZeroSubscribed;
    double  _decayFactor;
    double  _democratizationFactor;
    double  _diversificationInitialPenalty;
    double  _diversificationPenalty;
    double  _diversificationPenaltyHalfLife;
    double  _firstPassArticleFilter;
    double  _firstPassHalfLifeCoefficient;
    double  _firstPassRealTimeUserFeedbackPublishDateHalfLifeCoefficient;
    double  _globalScoreCoefficient;
    double  _globalScoreCoefficientHalfLife;
    double  _globalScoreCoefficientInitialMultiplier;
    double  _globalScoreToCtrIntercept;
    double  _globalScoreToCtrSlope;
    double  _halfLifeCoefficient;
    double  _mutedVoteCoefficient;
    double  _personalizationCoefficient;
    double  _publisherAggregateWeight;
    double  _realTimeUserFeedbackCoefficient;
    double  _realTimeUserFeedbackPublishDateHalfLifeCoefficient;
    NSDictionary * _realTimeUserFeedbackTagCoefficients;
    double  _subscribedChannelScoreCoefficient;
    double  _subscribedTopicsScoreCoefficient;
}

@property (nonatomic, readonly) double autofavoritedVoteCoefficient;
@property (nonatomic, readonly) double baselineRatePrior;
@property (nonatomic, readonly) double channelTopicDiversificationInitialPenalty;
@property (nonatomic, readonly) double channelTopicDiversificationPenalty;
@property (nonatomic, readonly) double channelTopicDiversificationPenaltyHalfLife;
@property (nonatomic, readonly) double cohortMembershipCtrCeiling;
@property (nonatomic, readonly) double cohortMembershipCurvature;
@property (nonatomic, readonly) double cohortMembershipFavoritedBoost;
@property (nonatomic, readonly) double cohortMembershipMinWeightedImpressions;
@property (nonatomic, readonly) double ctrWithOneAutofavorited;
@property (nonatomic, readonly) double ctrWithOneSubscribed;
@property (nonatomic, readonly) double ctrWithSubscribedChannel;
@property (nonatomic, readonly) double ctrWithThreeAutofavorited;
@property (nonatomic, readonly) double ctrWithThreeSubscribed;
@property (nonatomic, readonly) double ctrWithTwoAutofavorited;
@property (nonatomic, readonly) double ctrWithTwoSubscribed;
@property (nonatomic, readonly) double ctrWithZeroAutofavorited;
@property (nonatomic, readonly) double ctrWithZeroSubscribed;
@property (nonatomic, readonly) double decayFactor;
@property (nonatomic, readonly) double democratizationFactor;
@property (nonatomic, readonly) double diversificationInitialPenalty;
@property (nonatomic, readonly) double diversificationPenalty;
@property (nonatomic, readonly) double diversificationPenaltyHalfLife;
@property (nonatomic, readonly) double firstPassArticleFilter;
@property (nonatomic, readonly) double firstPassHalfLifeCoefficient;
@property (nonatomic, readonly) double firstPassRealTimeUserFeedbackPublishDateHalfLifeCoefficient;
@property (nonatomic, readonly) double globalScoreCoefficient;
@property (nonatomic, readonly) double globalScoreCoefficientHalfLife;
@property (nonatomic, readonly) double globalScoreCoefficientInitialMultiplier;
@property (nonatomic, readonly) double globalScoreToCtrIntercept;
@property (nonatomic, readonly) double globalScoreToCtrSlope;
@property (nonatomic, readonly) double halfLifeCoefficient;
@property (nonatomic, readonly) double mutedVoteCoefficient;
@property (nonatomic, readonly) double personalizationCoefficient;
@property (nonatomic, readonly) double publisherAggregateWeight;
@property (nonatomic, readonly) double realTimeUserFeedbackCoefficient;
@property (nonatomic, readonly) double realTimeUserFeedbackPublishDateHalfLifeCoefficient;
@property (nonatomic, readonly) NSDictionary *realTimeUserFeedbackTagCoefficients;
@property (nonatomic, readonly) double subscribedChannelScoreCoefficient;
@property (nonatomic, readonly) double subscribedTopicsScoreCoefficient;

- (void).cxx_destruct;
- (double)autofavoritedVoteCoefficient;
- (double)baselineRatePrior;
- (double)channelTopicDiversificationInitialPenalty;
- (double)channelTopicDiversificationPenalty;
- (double)channelTopicDiversificationPenaltyHalfLife;
- (double)cohortMembershipCtrCeiling;
- (double)cohortMembershipCurvature;
- (double)cohortMembershipFavoritedBoost;
- (double)cohortMembershipMinWeightedImpressions;
- (double)ctrWithOneAutofavorited;
- (double)ctrWithOneSubscribed;
- (double)ctrWithSubscribedChannel;
- (double)ctrWithThreeAutofavorited;
- (double)ctrWithThreeSubscribed;
- (double)ctrWithTwoAutofavorited;
- (double)ctrWithTwoSubscribed;
- (double)ctrWithZeroAutofavorited;
- (double)ctrWithZeroSubscribed;
- (double)decayFactor;
- (double)democratizationFactor;
- (double)diversificationInitialPenalty;
- (double)diversificationPenalty;
- (double)diversificationPenaltyHalfLife;
- (double)firstPassArticleFilter;
- (double)firstPassHalfLifeCoefficient;
- (double)firstPassRealTimeUserFeedbackPublishDateHalfLifeCoefficient;
- (double)globalScoreCoefficient;
- (double)globalScoreCoefficientHalfLife;
- (double)globalScoreCoefficientInitialMultiplier;
- (double)globalScoreToCtrIntercept;
- (double)globalScoreToCtrSlope;
- (double)halfLifeCoefficient;
- (id)initWithBaselineRatePrior:(double)arg1 decayFactor:(double)arg2 democratizationFactor:(double)arg3 halfLifeCoefficient:(double)arg4 subscribedChannelScoreCoefficient:(double)arg5 ctrWithSubscribedChannel:(double)arg6 mutedVoteCoefficient:(double)arg7 personalizationCoefficient:(double)arg8 publisherAggregateWeight:(double)arg9 globalScoreCoefficient:(double)arg10 globalScoreCoefficientHalfLife:(double)arg11 globalScoreCoefficientInitialMultiplier:(double)arg12 globalScoreToCtrIntercept:(double)arg13 globalScoreToCtrSlope:(double)arg14 realTimeUserFeedbackCoefficient:(double)arg15 realTimeUserFeedbackPublishDateHalfLifeCoefficient:(double)arg16 realTimeUserFeedbackTagCoefficients:(id)arg17 cohortMembershipCtrCeiling:(double)arg18 cohortMembershipCurvature:(double)arg19 cohortMembershipFavoritedBoost:(double)arg20 cohortMembershipMinWeightedImpressions:(double)arg21 subscribedTopicsScoreCoefficient:(double)arg22 ctrWithZeroSubscribed:(double)arg23 ctrWithOneSubscribed:(double)arg24 ctrWithTwoSubscribed:(double)arg25 ctrWithThreeSubscribed:(double)arg26 autofavoritedVoteCoefficient:(double)arg27 ctrWithZeroAutofavorited:(double)arg28 ctrWithOneAutofavorited:(double)arg29 ctrWithTwoAutofavorited:(double)arg30 ctrWithThreeAutofavorited:(double)arg31 diversificationInitialPenalty:(double)arg32 diversificationPenalty:(double)arg33 diversificationPenaltyHalfLife:(double)arg34 channelTopicDiversificationInitialPenalty:(double)arg35 channelTopicDiversificationPenalty:(double)arg36 channelTopicDiversificationPenaltyHalfLife:(double)arg37 firstPassHalfLifeCoefficient:(double)arg38 firstPassRealTimeUserFeedbackPublishDateHalfLifeCoefficient:(double)arg39 firstPassArticleFilter:(double)arg40;
- (double)mutedVoteCoefficient;
- (double)personalizationCoefficient;
- (double)publisherAggregateWeight;
- (double)realTimeUserFeedbackCoefficient;
- (double)realTimeUserFeedbackPublishDateHalfLifeCoefficient;
- (id)realTimeUserFeedbackTagCoefficients;
- (double)subscribedChannelScoreCoefficient;
- (double)subscribedTopicsScoreCoefficient;

@end
