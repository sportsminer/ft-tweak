/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationContext : NSObject {
    TSDCapabilities * _capabilities;
    struct CGColorSpace { } * _colorSpace;
    double  _fieldOfViewInRadians;
    double  _pixelAspectRatio;
    KNAnimationRegistryWithFallbacks * _registry;
    CALayer * _showLayer;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _slideProjectionMatrix;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _slideRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unscaledSlideRect;
    double  _viewScale;
}

@property (nonatomic, readonly) TSDCapabilities *capabilities;
@property (nonatomic) struct CGColorSpace { }*colorSpace;
@property (nonatomic, readonly) double fieldOfViewInRadians;
@property (nonatomic) double pixelAspectRatio;
@property (nonatomic, readonly) KNAnimationRegistryWithFallbacks *registry;
@property (nonatomic, readonly) CALayer *showLayer;
@property (nonatomic, readonly) double showScale;
@property (nonatomic, readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } slideProjectionMatrix;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } slideRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unscaledSlideRect;
@property (nonatomic, readonly) double viewScale;

- (void).cxx_destruct;
- (id)capabilities;
- (struct CGColorSpace { }*)colorSpace;
- (void)dealloc;
- (double)fieldOfViewInRadians;
- (id)init;
- (id)initWithShowSize:(struct CGSize { double x1; double x2; })arg1 viewScale:(double)arg2 showLayer:(id)arg3;
- (double)pixelAspectRatio;
- (id)registry;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setPixelAspectRatio:(double)arg1;
- (id)showLayer;
- (double)showScale;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })slideProjectionMatrix;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })slideRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledSlideRect;
- (void)updateGeometryToFitShowLayerAtViewScale:(double)arg1;
- (double)viewScale;

@end
