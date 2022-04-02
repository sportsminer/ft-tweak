/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetDataSource : NSObject <WGDataSource, _WGDataSource> {
    _WGConcreteDataSource * _concreteDataSource;
    NSString * _dataSourceIdentifier;
}

@property (getter=_concreteDataSource, setter=_setConcreteDataSource:, nonatomic, retain) _WGConcreteDataSource *concreteDataSource;
@property (nonatomic, readonly) NSString *dataSourceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *parentDataSourceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *widgetIdentifiers;

- (void).cxx_destruct;
- (id)_concreteDataSource;
- (void)_setConcreteDataSource:(id)arg1;
- (void)addWidgetObserver:(id)arg1 completion:(id /* block */)arg2;
- (id)dataSourceIdentifier;
- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)parentDataSourceIdentifier;
- (void)removeDatumWithIdentifier:(id)arg1;
- (void)removeWidgetObserver:(id)arg1 completion:(id /* block */)arg2;
- (void)replaceWithDatum:(id)arg1;
- (id)widgetDatumWithIdentifier:(id)arg1;
- (id)widgetIdentifiers;

@end
