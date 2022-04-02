/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface _AFClockTimerMutation : NSObject <AFClockTimerMutating> {
    AFClockTimer * _baseModel;
    NSDate * _dismissedDate;
    double  _duration;
    NSDate * _fireDate;
    double  _fireTimeInterval;
    NSDate * _firedDate;
    bool  _isFiring;
    NSDate * _lastModifiedDate;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasTimerID : 1; 
        unsigned int hasTimerURL : 1; 
        unsigned int hasIsFiring : 1; 
        unsigned int hasTitle : 1; 
        unsigned int hasState : 1; 
        unsigned int hasDuration : 1; 
        unsigned int hasFireTimeInterval : 1; 
        unsigned int hasFireDate : 1; 
        unsigned int hasFiredDate : 1; 
        unsigned int hasDismissedDate : 1; 
        unsigned int hasLastModifiedDate : 1; 
    }  _mutationFlags;
    long long  _state;
    NSUUID * _timerID;
    NSURL * _timerURL;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setDismissedDate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFireDate:(id)arg1;
- (void)setFireTimeInterval:(double)arg1;
- (void)setFiredDate:(id)arg1;
- (void)setIsFiring:(bool)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTimerID:(id)arg1;
- (void)setTimerURL:(id)arg1;
- (void)setTitle:(id)arg1;

@end
