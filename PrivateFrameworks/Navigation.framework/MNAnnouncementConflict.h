/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNAnnouncementConflict : NSObject {
    bool  _announcementsAreSimilar;
    double  _desiredTimeGap;
    MNAnnouncementPlanEvent * _firstEvent;
    MNAnnouncementPlanEvent * _secondEvent;
    double  _timeGap;
}

@property (nonatomic) bool announcementsAreSimilar;
@property (nonatomic) double desiredTimeGap;
@property (nonatomic, retain) MNAnnouncementPlanEvent *firstEvent;
@property (nonatomic, retain) MNAnnouncementPlanEvent *secondEvent;
@property (nonatomic) double timeGap;

- (void).cxx_destruct;
- (bool)announcementsAreSimilar;
- (id)description;
- (double)desiredTimeGap;
- (id)firstEvent;
- (id)secondEvent;
- (void)setAnnouncementsAreSimilar:(bool)arg1;
- (void)setDesiredTimeGap:(double)arg1;
- (void)setFirstEvent:(id)arg1;
- (void)setSecondEvent:(id)arg1;
- (void)setTimeGap:(double)arg1;
- (double)timeGap;

@end
