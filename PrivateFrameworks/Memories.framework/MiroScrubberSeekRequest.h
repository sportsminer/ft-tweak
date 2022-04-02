/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroScrubberSeekRequest : NSObject {
    AVPlayer * _avPlayer;
    NSDate * _dateCreated;
    double  _seekTime;
}

@property (nonatomic) AVPlayer *avPlayer;
@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic) double seekTime;

- (void).cxx_destruct;
- (id)avPlayer;
- (id)dateCreated;
- (id)init;
- (id)initWithAvPlayer:(id)arg1 seekTime:(double)arg2;
- (double)seekTime;
- (void)setAvPlayer:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setSeekTime:(double)arg1;

@end
