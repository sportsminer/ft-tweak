/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTemperatureIconDescriptor : NSObject <HFIconDescriptor> {
    NSString * _formattedTemperature;
    long long  _heatingCoolingMode;
    long long  _targetHeatingCoolingMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *formattedTemperature;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long heatingCoolingMode;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long targetHeatingCoolingMode;

- (void).cxx_destruct;
- (id)formattedTemperature;
- (unsigned long long)hash;
- (long long)heatingCoolingMode;
- (id)identifier;
- (id)initWithFormattedTemperature:(id)arg1 heatingCoolingMode:(long long)arg2 targetHeatingCoolingMode:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)targetHeatingCoolingMode;

@end
