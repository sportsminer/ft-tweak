/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWIrisMovieInfo : NSObject <NSCopying> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _audioOffset;
    bool  _finalEnqueuedIrisRequest;
    bool  _finalReferenceMovie;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterMovieStartTime;
    NSURL * _masterMovieURL;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieEndTime;
    NSArray * _movieLevelMetadataForSDOFOriginalMovie;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieStartTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieTrimEndTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieTrimStartTime;
    bool  _originalPhotoRecording;
    NSURL * _outputMovieURL;
    NSURL * _outputURLForSDOFOriginalMovie;
    unsigned int  _requestedSDOFVariants;
    FigCaptureMovieFileRecordingSettings * _settings;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageCaptureHostTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageCaptureTime;
    bool  _stillImageEncoderKeyFrameEmitted;
    bool  _stillImageVISKeyFrameTagged;
    NSURL * _temporaryMovieURL;
    NSURL * _temporaryURLForSDOFOriginalMovie;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } audioOffset;
@property (nonatomic, readonly) bool containsTrims;
@property (getter=isFinalEnqueuedIrisRequest, nonatomic) bool finalEnqueuedIrisRequest;
@property (getter=isFinalReferenceMovie, nonatomic) bool finalReferenceMovie;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } masterMovieStartTime;
@property (nonatomic, retain) NSURL *masterMovieURL;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieEndTime;
@property (nonatomic, copy) NSArray *movieLevelMetadataForSDOFOriginalMovie;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieStartTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieTrimEndTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieTrimStartTime;
@property (nonatomic, readonly) int numberOfRequestedVariants;
@property (getter=isOriginalPhotoRecording, nonatomic) bool originalPhotoRecording;
@property (nonatomic, retain) NSURL *outputMovieURL;
@property (nonatomic, copy) NSURL *outputURLForSDOFOriginalMovie;
@property (nonatomic) unsigned int requestedSDOFVariants;
@property (nonatomic, readonly) FigCaptureMovieFileRecordingSettings *settings;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stillImageCaptureHostTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } stillImageCaptureTime;
@property (nonatomic) bool stillImageEncoderKeyFrameEmitted;
@property (nonatomic) bool stillImageVISKeyFrameTagged;
@property (nonatomic, retain) NSURL *temporaryMovieURL;
@property (nonatomic, copy) NSURL *temporaryURLForSDOFOriginalMovie;

+ (id)irisMovieInfoWithFigCaptureMovieFileRecordingSettings:(id)arg1 stillImageCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 stillImageCaptureHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 originalPhotoRecording:(bool)arg4;

- (id)_initWithFigCaptureMovieFileRecordingSettings:(id)arg1 stillImageCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 stillImageCaptureHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 originalPhotoRecording:(bool)arg4;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })audioOffset;
- (bool)containsTrims;
- (id)copyMovieInfosForRequestedSDOFVariants;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)isFinalEnqueuedIrisRequest;
- (bool)isFinalReferenceMovie;
- (bool)isOriginalPhotoRecording;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })masterMovieStartTime;
- (id)masterMovieURL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieEndTime;
- (id)movieLevelMetadataForSDOFOriginalMovie;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieStartTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieTrimEndTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieTrimStartTime;
- (int)numberOfRequestedVariants;
- (id)outputMovieURL;
- (id)outputURLForSDOFOriginalMovie;
- (unsigned int)requestedSDOFVariants;
- (void)setAudioOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setFinalEnqueuedIrisRequest:(bool)arg1;
- (void)setFinalReferenceMovie:(bool)arg1;
- (void)setMasterMovieStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMasterMovieURL:(id)arg1;
- (void)setMovieEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieLevelMetadataForSDOFOriginalMovie:(id)arg1;
- (void)setMovieStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieTrimEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieTrimStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setOriginalPhotoRecording:(bool)arg1;
- (void)setOutputMovieURL:(id)arg1;
- (void)setOutputURLForSDOFOriginalMovie:(id)arg1;
- (void)setRequestedSDOFVariants:(unsigned int)arg1;
- (void)setStillImageCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setStillImageEncoderKeyFrameEmitted:(bool)arg1;
- (void)setStillImageVISKeyFrameTagged:(bool)arg1;
- (void)setTemporaryMovieURL:(id)arg1;
- (void)setTemporaryURLForSDOFOriginalMovie:(id)arg1;
- (id)settings;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageCaptureHostTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageCaptureTime;
- (bool)stillImageEncoderKeyFrameEmitted;
- (bool)stillImageVISKeyFrameTagged;
- (id)temporaryMovieURL;
- (id)temporaryURLForSDOFOriginalMovie;

@end
