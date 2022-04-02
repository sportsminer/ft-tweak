/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKEffectFilterManager : NSObject {
    NSMutableArray * _aggdNames;
    NSMutableArray * _effects;
    NSMutableArray * _names;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addEffectNamed:(id)arg1 aggdName:(id)arg2 filter:(id)arg3;
- (unsigned long long)_indexForFilter:(id)arg1;
- (id)aggdNameForFilter:(id)arg1;
- (unsigned long long)blackAndWhiteFilterCount;
- (unsigned long long)blackAndWhiteFilterStartIndex;
- (id)displayNameForFilter:(id)arg1;
- (id)displayNameForIndex:(unsigned long long)arg1;
- (unsigned long long)filterCount;
- (id)filterForIndex:(unsigned long long)arg1;
- (id)init;

@end
