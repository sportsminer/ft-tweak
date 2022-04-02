/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

@interface NFLPipelayer : NSObject {
    <NFLPipelayerDelegate> * _delegate;
    NSObject<NFLPipeSegment> * _nextPipeSegment;
    NSArray * _pipeUnits;
    NSObject<NFLPipeSegment> * _previousPipeSegment;
}

@property (nonatomic) <NFLPipelayerDelegate> *delegate;
@property (nonatomic, retain) NSObject<NFLPipeSegment> *nextPipeSegment;
@property (nonatomic, copy) NSArray *pipeUnits;
@property (nonatomic, retain) NSObject<NFLPipeSegment> *previousPipeSegment;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)initWithPipe:(id)arg1 previousPipeSegment:(id)arg2 nextPipeSegment:(id)arg3;
- (id)layPipeWithWallTime:(double)arg1 qualityOfService:(long long)arg2;
- (id)nextPipeSegment;
- (id)pipeUnits;
- (id)previousPipeSegment;
- (void)setDelegate:(id)arg1;
- (void)setNextPipeSegment:(id)arg1;
- (void)setPipeUnits:(id)arg1;
- (void)setPreviousPipeSegment:(id)arg1;

@end
