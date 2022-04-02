/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTilingCoordinateSpace : NSObject {
    PXTilingCoordinateSpace * _parentSpace;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (nonatomic, readonly) void*identifier;
@property (nonatomic) PXTilingCoordinateSpace *parentSpace;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

- (void).cxx_destruct;
- (void*)identifier;
- (id)init;
- (id)parentSpace;
- (void)setParentSpace:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
