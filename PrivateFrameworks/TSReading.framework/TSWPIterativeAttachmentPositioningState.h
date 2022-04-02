/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPIterativeAttachmentPositioningState : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _bestPosition;
    double  _mismatch;
    unsigned long long  _passCount;
    NSArray * _passPositions;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    double  _smallestMismatch;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bestPosition;
@property (nonatomic, readonly) double mismatch;
@property (nonatomic, readonly) unsigned long long passCount;
@property (nonatomic, readonly) NSArray *passPositions;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, readonly) double smallestMismatch;

- (struct CGPoint { double x1; double x2; })bestPosition;
- (void)dealloc;
- (bool)hasLoopInLastPasses;
- (id)init;
- (double)mismatch;
- (unsigned long long)passCount;
- (id)passPositions;
- (struct CGPoint { double x1; double x2; })position;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1 mismatch:(double)arg2;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1 mismatch:(double)arg2 afterLoop:(bool)arg3;
- (double)smallestMismatch;

@end
