/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFileCoordinatedTodayPersonalizationUpdate : NSObject {
    FCFileCoordinatedDictionary * _fileCoordinatedDictionary;
}

@property (nonatomic, retain) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (void).cxx_destruct;
- (void)clearUpdates;
- (id)fileCoordinatedDictionary;
- (id)init;
- (id)initWithFileURL:(id)arg1;
- (void)readWithAccessor:(id /* block */)arg1;
- (void)setFileCoordinatedDictionary:(id)arg1;
- (void)submitUpdate:(id)arg1 withCompletion:(id /* block */)arg2;

@end
