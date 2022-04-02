/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface MDCRouteLayerObserverProxy : NSObject <VKPolylineGroupOverlayObserver> {
    struct set<VKPolylineGroupOverlay *, std::__1::less<VKPolylineGroupOverlay *>, std::__1::allocator<VKPolylineGroupOverlay *> > { 
        struct __tree<VKPolylineGroupOverlay *, std::__1::less<VKPolylineGroupOverlay *>, std::__1::allocator<VKPolylineGroupOverlay *> > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<VKPolylineGroupOverlay *, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::less<VKPolylineGroupOverlay *> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _observedGroupsSet;
    struct CPolylineGroupChangeObserver { int (**x1)(); } * _polylineGroupObserver;
    struct vector<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { 
        struct _retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *__begin_; 
        struct _retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *__end_; 
        struct __compressed_pair<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> *, std::__1::allocator<geo::_retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { 
            struct _retain_ptr<VKPolylineGroupOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *__value_; 
        } __end_cap_; 
    }  _retainedGroups;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPolylineGroupObserver:(struct CPolylineGroupChangeObserver { int (**x1)(); }*)arg1;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)startObserving:(id)arg1;
- (void)stopObserving:(id)arg1;

@end
