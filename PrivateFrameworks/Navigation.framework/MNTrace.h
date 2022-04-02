/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTrace : NSObject {
    NSArray * _annotatedUserBehavior;
    NSArray * _annotatedUserEnvironments;
    NSArray * _bookmarkImages;
    NSArray * _bookmarks;
    NSArray * _commuteDestinations;
    NSArray * _commuteDirectionsRequests;
    bool  _copyToCrashReporter;
    struct sqlite3 { } * _db;
    NSArray * _directions;
    NSData * _endWaypointData;
    NSArray * _etaUpdates;
    NSArray * _headingData;
    double  _initialCourse;
    bool  _isRouteGenius;
    bool  _isSimulation;
    NSArray * _locations;
    NSArray * _motionData;
    unsigned long long  _originalVersion;
    NSArray * _routeSelections;
    NSArray * _significantEvents;
    NSData * _startWaypointData;
    NSString * _tracePath;
    bool  _usesCLMapCorrection;
    NSArray * _vehicleHeadingData;
    NSArray * _vehicleSpeedData;
    unsigned long long  _version;
    NSObject<OS_dispatch_group> * _writeGroup;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic, retain) NSArray *annotatedUserBehavior;
@property (nonatomic, retain) NSArray *annotatedUserEnvironments;
@property (nonatomic, retain) NSArray *bookmarkImages;
@property (nonatomic, retain) NSArray *bookmarks;
@property (nonatomic, retain) NSArray *commuteDestinations;
@property (nonatomic, retain) NSArray *commuteDirectionsRequests;
@property (nonatomic) bool copyToCrashReporter;
@property (nonatomic, readonly) struct sqlite3 { }*db;
@property (nonatomic, retain) NSArray *directions;
@property (nonatomic, retain) NSData *endWaypointData;
@property (nonatomic, retain) NSArray *etaUpdates;
@property (nonatomic, retain) NSArray *headingData;
@property (nonatomic) double initialCourse;
@property (nonatomic) bool isRouteGenius;
@property (nonatomic) bool isSimulation;
@property (nonatomic, retain) NSArray *locations;
@property (nonatomic, retain) NSArray *motionData;
@property (nonatomic) unsigned long long originalVersion;
@property (nonatomic, retain) NSArray *routeSelections;
@property (nonatomic, retain) NSArray *significantEvents;
@property (nonatomic, retain) NSData *startWaypointData;
@property (nonatomic, readonly) NSString *tracePath;
@property (nonatomic) bool usesCLMapCorrection;
@property (nonatomic, retain) NSArray *vehicleHeadingData;
@property (nonatomic, retain) NSArray *vehicleSpeedData;
@property (nonatomic) unsigned long long version;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *writeGroup;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *writeQueue;

+ (id)routeSetsFromTraceAtPath:(id)arg1;

- (void).cxx_destruct;
- (id)_handleOpenErrorWithPath:(id)arg1;
- (id)_routeSetFromDirectionsRow:(id)arg1;
- (id)annotatedUserBehavior;
- (id)annotatedUserEnvironments;
- (id)bookmarkImages;
- (id)bookmarks;
- (bool)closeTrace;
- (id)commuteDestinations;
- (id)commuteDirectionsRequests;
- (bool)copyToCrashReporter;
- (void)copyTraceToCrashReporter;
- (bool)createTempTraceForRecording;
- (struct sqlite3 { }*)db;
- (void)dealloc;
- (id)directions;
- (id)endWaypointData;
- (id)etaUpdates;
- (id)headingData;
- (id)init;
- (double)initialCourse;
- (bool)isRouteGenius;
- (bool)isSimulation;
- (id)locations;
- (id)motionData;
- (bool)openTrace:(id)arg1 outError:(id*)arg2;
- (unsigned long long)originalVersion;
- (id)routeSelections;
- (id)routeSetsFromResponse;
- (id)serializableBookmarks;
- (void)setAnnotatedUserBehavior:(id)arg1;
- (void)setAnnotatedUserEnvironments:(id)arg1;
- (void)setBookmarkImages:(id)arg1;
- (void)setBookmarks:(id)arg1;
- (void)setCommuteDestinations:(id)arg1;
- (void)setCommuteDirectionsRequests:(id)arg1;
- (void)setCopyToCrashReporter:(bool)arg1;
- (void)setDirections:(id)arg1;
- (void)setEndWaypointData:(id)arg1;
- (void)setEtaUpdates:(id)arg1;
- (void)setHeadingData:(id)arg1;
- (void)setInitialCourse:(double)arg1;
- (void)setIsRouteGenius:(bool)arg1;
- (void)setIsSimulation:(bool)arg1;
- (void)setLocations:(id)arg1;
- (void)setMotionData:(id)arg1;
- (void)setOriginalVersion:(unsigned long long)arg1;
- (void)setRouteSelections:(id)arg1;
- (void)setSignificantEvents:(id)arg1;
- (void)setStartWaypointData:(id)arg1;
- (void)setUsesCLMapCorrection:(bool)arg1;
- (void)setVehicleHeadingData:(id)arg1;
- (void)setVehicleSpeedData:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (id)significantEvents;
- (id)startWaypointData;
- (bool)startWritingTraceToFile:(id)arg1;
- (id)tracePath;
- (bool)usesCLMapCorrection;
- (id)vehicleHeadingData;
- (id)vehicleSpeedData;
- (unsigned long long)version;
- (id)writeGroup;
- (id)writeQueue;

@end
