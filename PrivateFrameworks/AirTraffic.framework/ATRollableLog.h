/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATRollableLog : NSObject {
    NSString * _baseFilename;
    NSString * _directory;
    NSObject<OS_dispatch_source> * _fdWatcher;
    NSFileHandle * _fh;
    NSString * _generationalFilenameFormat;
    NSDate * _lastStatDate;
    NSObject<OS_dispatch_queue> * _logQueue;
    NSObject<OS_dispatch_queue> * _logRequestQueue;
}

@property (retain) NSFileHandle *fh;
@property (retain) NSDate *lastStatDate;

+ (id)_filenameWithBase:(id)arg1 generationalFormat:(id)arg2 generation:(int)arg3;
+ (id)_generationalFormatFromBase:(id)arg1;
+ (id)allLogFilesForFilename:(id)arg1;
+ (void)enableLogRolling;
+ (id)loggerWithFilename:(id)arg1;

- (void).cxx_destruct;
- (id)_filenameWithGenerationNumber:(int)arg1;
- (id)_fullCompressedFilePathWithGenerationNumber:(int)arg1;
- (id)_fullFilePathWithGenerationNumber:(int)arg1;
- (void)_loadUpHandle;
- (void)_rollLogs;
- (void)_setFilePermissions:(id)arg1;
- (void)_statFileIfNecessaryForRollingCheck;
- (id)compressFile:(id)arg1;
- (id)fh;
- (id)initWithFilename:(id)arg1;
- (id)lastStatDate;
- (void)logData:(id)arg1;
- (void)logLine:(id)arg1 withPrefix:(id)arg2;
- (void)logString:(id)arg1;
- (void)setFh:(id)arg1;
- (void)setLastStatDate:(id)arg1;
- (void)slurpDataFromFile:(id)arg1;

@end
