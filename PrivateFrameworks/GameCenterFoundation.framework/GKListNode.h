/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKListNode : NSObject {
    GKListNode * _nextNode;
    GKListNode * _prevNode;
    id  _value;
}

@property (nonatomic) GKListNode *nextNode;
@property (nonatomic) GKListNode *prevNode;
@property (nonatomic, retain) id value;

- (void)dealloc;
- (id)description;
- (id)initWithValue:(id)arg1;
- (id)nextNode;
- (id)prevNode;
- (void)setNextNode:(id)arg1;
- (void)setPrevNode:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
