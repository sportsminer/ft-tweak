/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIHealthSettingsHeightPickerController : FIUIHealthSettingsPickerController {
    NSLengthFormatter * _heightFormatter;
    id /* block */  _heightUpdateHandler;
}

@property (nonatomic, copy) id /* block */ heightUpdateHandler;

- (void).cxx_destruct;
- (void)_heightPickerUpdated;
- (id)_pickerDisplayStringForHeightForRow:(long long)arg1 forComponent:(long long)arg2;
- (void)forceUpdate;
- (id /* block */)heightUpdateHandler;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)setHeightQuantity:(id)arg1;
- (void)setHeightUpdateHandler:(id /* block */)arg1;

@end
