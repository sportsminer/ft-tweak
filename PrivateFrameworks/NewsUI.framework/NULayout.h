/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NULayout : NSObject <NUComponent, NULayout> {
    NUComponents * _components;
    <NUNode> * _node;
    struct NULayoutOptions { 
        unsigned long long flow; 
        unsigned long long direction; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } edgeInsets; 
    }  _options;
    NULayoutResolver * _resolver;
    <NUSizer> * _sizer;
}

@property (nonatomic, readonly) NUComponents *components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUNode> *node;
@property (nonatomic, readonly) struct NULayoutOptions { unsigned long long x1; unsigned long long x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; } options;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } originOffset;
@property (nonatomic, readonly) NULayoutResolver *resolver;
@property (nonatomic, readonly) <NUSizer> *sizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)buildComponents:(id)arg1 withBlock:(id /* block */)arg2;
- (id)components;
- (id)description;
- (id)initWithNode:(id)arg1 sizer:(id)arg2 options:(struct NULayoutOptions { unsigned long long x1; unsigned long long x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; })arg3 componentsBlock:(id /* block */)arg4;
- (void)layoutComponentsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 originOffset:(struct CGPoint { double x1; double x2; })arg2 layoutContext:(id)arg3;
- (id)node;
- (struct NULayoutOptions { unsigned long long x1; unsigned long long x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; })options;
- (struct CGPoint { double x1; double x2; })originOffset;
- (id)resolver;
- (id)sizer;

@end
