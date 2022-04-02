/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUNewsAnalyticsVideoPlayerEventTrackerConfiguration : NSObject <NSCopying> {
    int  _adLocation;
    int  _adType;
    int  _articleHostViewType;
    int  _articleViewPresentationReason;
    int  _autoPlayArticleViewPresentationReason;
    int  _groupType;
    NSString * _groupViewExposureID;
    NSData * _leadingVideoItemSessionID;
    int  _linkTapLocationType;
    int  _mediaEngageCompletePlayLocation;
    int  _mediaEngagePlayLocation;
    int  _newsProductType;
    int  _parentFeedType;
    NSString * _referringSourceApplication;
    NSString * _referringURLString;
    unsigned long long  _supplementalEventOptions;
    NTPBWidgetEngagement * _widgetEngagement;
}

@property (nonatomic, readonly) int adLocation;
@property (nonatomic, readonly) int adType;
@property (nonatomic, readonly) int articleHostViewType;
@property (nonatomic, readonly) int articleViewPresentationReason;
@property (nonatomic, readonly) int autoPlayArticleViewPresentationReason;
@property (nonatomic, readonly) int groupType;
@property (nonatomic, readonly, copy) NSString *groupViewExposureID;
@property (nonatomic, readonly, copy) NSData *leadingVideoItemSessionID;
@property (nonatomic, readonly) int linkTapLocationType;
@property (nonatomic, readonly) int mediaEngageCompletePlayLocation;
@property (nonatomic, readonly) int mediaEngagePlayLocation;
@property (nonatomic, readonly) int newsProductType;
@property (nonatomic, readonly) int parentFeedType;
@property (nonatomic, readonly, copy) NSString *referringSourceApplication;
@property (nonatomic, readonly, copy) NSString *referringURLString;
@property (nonatomic, readonly) unsigned long long supplementalEventOptions;
@property (nonatomic, readonly, copy) NTPBWidgetEngagement *widgetEngagement;

- (void).cxx_destruct;
- (int)adLocation;
- (int)adType;
- (int)articleHostViewType;
- (int)articleViewPresentationReason;
- (int)autoPlayArticleViewPresentationReason;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)groupType;
- (id)groupViewExposureID;
- (id)init;
- (id)initWithAdType:(int)arg1 adLocation:(int)arg2 newsProductType:(int)arg3 mediaEngagePlayLocation:(int)arg4 mediaEngageCompletePlayLocation:(int)arg5 articleHostViewType:(int)arg6 supplementalEventOptions:(unsigned long long)arg7 groupType:(int)arg8 groupViewExposureID:(id)arg9 linkTapLocationType:(int)arg10 articleViewPresentationReason:(int)arg11 autoPlayArticleViewPresentationReason:(int)arg12 widgetEngagement:(id)arg13 referringURLString:(id)arg14 referringSourceApplication:(id)arg15 leadingVideoItemSessionID:(id)arg16 parentFeedType:(int)arg17;
- (id)leadingVideoItemSessionID;
- (int)linkTapLocationType;
- (int)mediaEngageCompletePlayLocation;
- (int)mediaEngagePlayLocation;
- (int)newsProductType;
- (int)parentFeedType;
- (id)referringSourceApplication;
- (id)referringURLString;
- (unsigned long long)supplementalEventOptions;
- (id)widgetEngagement;

@end
