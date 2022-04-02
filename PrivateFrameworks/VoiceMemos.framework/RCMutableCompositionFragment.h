/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCMutableCompositionFragment : RCCompositionFragment

@property (nonatomic, retain) NSURL *AVOutputURL;
@property (nonatomic) double contentDuration;
@property (nonatomic) struct { double x1; double x2; } timeRangeInComposition;
@property (nonatomic) struct { double x1; double x2; } timeRangeInContentToUse;

- (void)intersectWithTimeRange:(struct { double x1; double x2; })arg1;

@end
