/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKModelObject : NSObject {
    bool  _active;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    unsigned int  _needsDisplay;
    unsigned int  _needsLayout;
    struct CartographicLayer { int (**x1)(); struct CommandBufferIdSet { struct vector<md::CommandBufferId, std::__1::allocator<md::CommandBufferId> > { unsigned char *x_1_2_1; unsigned char *x_1_2_2; struct __compressed_pair<md::CommandBufferId *, std::__1::allocator<md::CommandBufferId> > { unsigned char *x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; struct map<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> >, std::__1::less<md::CommandBufferId>, std::__1::allocator<std::__1::pair<const md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > > > > { struct __tree<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::__map_value_compare<md::CommandBufferId, std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::less<md::CommandBufferId>, true>, std::__1::allocator<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<md::CommandBufferId, std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::less<md::CommandBufferId>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; } * _renderLayer;
    <MDRenderTarget> * _renderTarget;
    VKSharedResources * _sharedResources;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) /* Warning: unhandled struct encoding: '{CartographicLayer=^^?{CommandBufferIdSet={vector<md::CommandBufferId' */ struct *renderLayer; /* unknown property attribute:  true> >=Q}}}BI^^?^{CartographicRenderer}C} */
@property (nonatomic, readonly) <MDRenderTarget> *renderTarget;
@property (nonatomic, readonly) VKSharedResources *sharedResources;
@property (nonatomic, readonly) struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; } styleManager;

- (void)dealloc;
- (void)didReceiveMemoryWarning:(bool)arg1;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (void)gglLayoutSceneWithoutStyleManager:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)initWithTarget:(id)arg1 manifestConfiguration:(id)arg2;
- (bool)isActive;
- (void)layoutScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2;
- (struct CartographicLayer { int (**x1)(); struct CommandBufferIdSet { struct vector<md::CommandBufferId, std::__1::allocator<md::CommandBufferId> > { unsigned char *x_1_2_1; unsigned char *x_1_2_2; struct __compressed_pair<md::CommandBufferId *, std::__1::allocator<md::CommandBufferId> > { unsigned char *x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; struct map<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> >, std::__1::less<md::CommandBufferId>, std::__1::allocator<std::__1::pair<const md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > > > > { struct __tree<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::__map_value_compare<md::CommandBufferId, std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::less<md::CommandBufferId>, true>, std::__1::allocator<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<md::CommandBufferId, std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::less<md::CommandBufferId>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)renderLayer;
- (id)renderTarget;
- (void)reset;
- (void)runAnimation:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)setRenderLayer:(struct CartographicLayer { int (**x1)(); struct CommandBufferIdSet { struct vector<md::CommandBufferId, std::__1::allocator<md::CommandBufferId> > { unsigned char *x_1_2_1; unsigned char *x_1_2_2; struct __compressed_pair<md::CommandBufferId *, std::__1::allocator<md::CommandBufferId> > { unsigned char *x_3_3_1; } x_1_2_3; } x_2_1_1; } x2; struct map<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> >, std::__1::less<md::CommandBufferId>, std::__1::allocator<std::__1::pair<const md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > > > > { struct __tree<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::__map_value_compare<md::CommandBufferId, std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::less<md::CommandBufferId>, true>, std::__1::allocator<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<md::CommandBufferId, std::__1::__value_type<md::CommandBufferId, std::__1::unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > >, std::__1::less<md::CommandBufferId>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)arg1;
- (id)sharedResources;
- (bool)shouldLayoutWithoutStyleManager;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;

@end
