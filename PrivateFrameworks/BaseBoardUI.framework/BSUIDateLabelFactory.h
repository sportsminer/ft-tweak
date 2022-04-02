/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
 */

@interface BSUIDateLabelFactory : NSObject {
    NSMutableDictionary * _recycledLabelsByStyle;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_labelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(bool)arg4 forStyle:(long long)arg5 forType:(long long)arg6;
- (void)_purgeRecycledLabels;
- (id)combinedDateLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(bool)arg4 forStyle:(long long)arg5;
- (void)dealloc;
- (id)endLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(bool)arg4 forStyle:(long long)arg5;
- (id)init;
- (void)recycleLabel:(id)arg1;
- (id)startLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(bool)arg4 forStyle:(long long)arg5;
- (long long)styleForLabel:(id)arg1;

@end
