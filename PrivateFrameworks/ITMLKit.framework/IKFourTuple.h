/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKFourTuple : NSObject <NSCopying> {
    NSString * _namedStyle;
    long long  _specifiedValueCount;
    double  _values;
}

@property (nonatomic, readonly) struct IKCornerRadii { double x1; double x2; double x3; double x4; } cornerRadiiValue;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsetsValue;
@property (nonatomic, readonly) NSString *namedStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct IKCornerRadii { double x1; double x2; double x3; double x4; })cornerRadiiValue;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsValue;
- (id)initWithCornerRadii:(struct IKCornerRadii { double x1; double x2; double x3; double x4; })arg1;
- (id)initWithStyleString:(id)arg1;
- (id)namedStyle;

@end
