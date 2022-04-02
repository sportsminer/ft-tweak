/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessMachineManager : NSObject <HDFitnessMachinePairingManagerDelegate, HDFitnessMachineStateTimersDelegate> {
    HDFitnessMachineAnalyticsCollector * _analyticsCollector;
    NSMutableArray * _characteristicDataBuffer;
    HDFitnessMachineDataCollector * _collector;
    NSMutableArray * _connections;
    HDFitnessMachineDataProducer * _fitnessMachineDataProducer;
    HDFitnessMachineSession * _fitnessMachineSession;
    HKObserverSet * _fitnessMachineSessionObservers;
    HDFitnessMachineStateTimers * _fitnessMachineStateTimers;
    NSDate * _machinePreferredUntilDate;
    HDFitnessMachinePairingManager * _pairingManager;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _resetInProgress;
    HDHealthServiceManager * _serviceManager;
    bool  _shouldReconnect;
}

@property (nonatomic, retain) HDFitnessMachineAnalyticsCollector *analyticsCollector;
@property (nonatomic, readonly) <HDFitnessMachineConnectionInitiatorProtocol> *connectionInitiatorServer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDFitnessMachineDataProducer *fitnessMachineDataProducer;
@property (nonatomic, retain) HDFitnessMachineStateTimers *fitnessMachineStateTimers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *machinePreferredUntilDate;
@property (nonatomic, readonly) <HDMetricsCollector> *metricsCollector;
@property (nonatomic) HDHealthServiceManager *serviceManager;
@property (readonly) Class superclass;

+ (id)fitnessMachineServerId;

- (void).cxx_destruct;
- (void)_queue_addConnection:(id)arg1;
- (void)_queue_connectFitnessMachineIsReconnect:(bool)arg1;
- (bool)_queue_connectionIsRegistered:(id)arg1;
- (id)_queue_connectionWithUUID:(id)arg1;
- (void)_queue_deliverConnectionStateChangedFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 error:(id)arg3 notifyingPairingManager:(bool)arg4;
- (void)_queue_deliverErrorToAllClients:(id)arg1;
- (void)_queue_deliverFailedWithError:(id)arg1 toConnectionUUID:(id)arg2;
- (void)_queue_deliverMachineInformationUpdatedNotifyingPairingManager:(bool)arg1;
- (void)_queue_deliverMachineStateChangedFromState:(unsigned long long)arg1 date:(id)arg2;
- (void)_queue_deliverNFCDetected:(id)arg1;
- (void)_queue_disconnectFitnessMachineFromBluetooth;
- (void)_queue_endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2 forcingReset:(bool)arg3;
- (void)_queue_flushCharacteristicDataBuffer;
- (void)_queue_handleBeginPairing:(id)arg1;
- (void)_queue_handleBluetoothDisconnection;
- (void)_queue_handleBluetoothStatusUpdate:(long long)arg1 error:(id)arg2;
- (void)_queue_handleConnectionStatus:(long long)arg1 finished:(bool)arg2 error:(id)arg3;
- (void)_queue_handleConnectionSuccessIfPossible;
- (void)_queue_handleDataTransferRequirementsUpdated;
- (bool)_queue_handleInitialMachineDataIfNecessary:(id)arg1;
- (bool)_queue_handleInitialMachineStatusIfNecessary:(id)arg1;
- (void)_queue_handleInitialStateIfNecessary;
- (void)_queue_handleMFASuccess;
- (void)_queue_handleOrBufferReceivedCharacteristic:(id)arg1 sessionIdentifier:(unsigned long long)arg2 device:(id)arg3 error:(id)arg4;
- (void)_queue_handleReceivedCharacteristic:(id)arg1 device:(id)arg2 error:(id)arg3;
- (void)_queue_handleReceivedDataCharacteristic:(id)arg1;
- (void)_queue_handleReceivedEnhancedFTMSCharacteristic:(id)arg1;
- (void)_queue_handleReceivedMachineStatus:(id)arg1;
- (void)_queue_performBlockOnConnections:(id /* block */)arg1;
- (void)_queue_reconnectFitnessMachineWithError:(id)arg1;
- (void)_queue_recoverSessionWithConfiguration:(id)arg1;
- (void)_queue_registerClient:(id)arg1 withConnectionUUID:(id)arg2;
- (void)_queue_removeConnectionWithUUID:(id)arg1;
- (void)_queue_resetConnectionForcing:(bool)arg1;
- (void)_queue_setConnectionState:(unsigned long long)arg1 error:(id)arg2;
- (void)_queue_setDeviceInformation:(id)arg1;
- (void)_queue_setMachineState:(unsigned long long)arg1 date:(id)arg2;
- (void)_queue_simulateDisconnect;
- (void)_queue_tearDownAfterStopEvent;
- (bool)_queue_waitingOnInitialStatusAndData;
- (void)_setQueue:(id)arg1;
- (void)addFitnessMachineSessionObserver:(id)arg1 queue:(id)arg2;
- (id)analyticsCollector;
- (void)clientInvalidatedWithConnectionUUID:(id)arg1;
- (id)connectionInitiatorServer;
- (unsigned long long)connectionOptionsForSession:(id)arg1 isReconnect:(bool)arg2;
- (id)currentSessionRecoveryConfiguration;
- (void)dealloc;
- (void)endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
- (void)endFitnessMachineConnectionWithUUID:(id)arg1;
- (void)endFitnessMachineSessionWithUUID:(id)arg1;
- (void)finishSessionWithConfiguration:(id)arg1;
- (id)fitnessMachineDataProducer;
- (id)fitnessMachineStateTimers;
- (void)hktest_setMachinePreferredUntilDate:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)machinePreferredUntilDate;
- (void)markClientReadyWithConnectionUUID:(id)arg1;
- (id)metricsCollector;
- (void)pairingManager:(id)arg1 didChangeNFCEnabledState:(bool)arg2;
- (void)pairingManager:(id)arg1 discoveredHealthService:(id)arg2 machineType:(unsigned long long)arg3;
- (void)pairingManager:(id)arg1 failedPairingWithError:(id)arg2;
- (void)pairingManager:(id)arg1 updatedConnectionStateFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)pairingManagerDidBeginPairing:(id)arg1;
- (void)pairingManagerReadyToConnect:(id)arg1;
- (void)pairingManagerReceivedActivityTypeAndPermission:(id)arg1;
- (id)pairingManagerRequestsOOBData:(id)arg1 error:(id*)arg2;
- (void)pairingManagerUpdatedMachineInformation:(id)arg1;
- (void)pairingManagerWillBeginPairing:(id)arg1 fitnessMachineToken:(id)arg2;
- (void)recoverSessionWithConfiguration:(id)arg1;
- (void)registerClient:(id)arg1 withConnectionUUID:(id)arg2;
- (void)removeFitnessMachineSessionObserver:(id)arg1;
- (id)serviceManager;
- (void)setAnalyticsCollector:(id)arg1;
- (void)setFitnessMachineStateTimers:(id)arg1;
- (void)setServiceManager:(id)arg1;
- (void)simulateDisconnect;
- (void)stateTimersDisconnectTimeout:(id)arg1;
- (void)stateTimersMfaTimeout:(id)arg1;
- (void)stateTimersPauseTimeout:(id)arg1;
- (void)stateTimersRetryConnectionTimeout:(id)arg1;
- (void)stateTimersWaitForMachineStartTimeout:(id)arg1;
- (id)unitTest_currentFitnessMachineSession;
- (void)unitTest_fakeMachineDiscoveryForType:(unsigned long long)arg1;
- (void)unitTest_fakeSession:(id)arg1;
- (void)unitTest_receiveFakeCharacteristicUpdate:(id)arg1;

@end
