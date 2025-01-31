//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct GEOJunctionElement {
    int _field1;
    int _field2;
    int _field3;
    CDStruct_81fb2dc1 _field4;
};

struct GEOOnce_s {
    struct os_unfair_lock_s lock;
    _Bool didRun;
};

struct NSArray {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct UIViewController {
    Class _field1;
};

struct _GEOFlyoverKey {
    unsigned int z:6;
    unsigned int x:26;
    unsigned int y:26;
    unsigned int h:8;
    unsigned int region:24;
    unsigned int type:14;
    unsigned int pixelSize:8;
    unsigned int textScale:8;
};

struct _GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, geo::GEOGenericContainerStrongReferenceTag, 64, 2097152, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> {
    struct mutex _lock;
    struct list<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, std::__1::allocator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>>> _list;
    struct unordered_map<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::allocator<std::__1::pair<const geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>>> _map;
    unsigned long long _maxCapacity;
    unsigned long long _maxCost;
    unsigned long long _currentCost;
    unsigned long long _currentCount;
};

struct _GEOGenericContainer<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, geo::GEOGenericContainerWeakReferenceTag, 0, 0, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> {
    struct mutex _lock;
    struct list<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, std::__1::allocator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>>> _list;
    struct unordered_map<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::allocator<std::__1::pair<const geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>>> _map;
    unsigned long long _maxCapacity;
    unsigned long long _maxCost;
    unsigned long long _currentCost;
    unsigned long long _currentCount;
};

struct _GEOIdentifiedResourceKey {
    unsigned int identifier;
    unsigned char levelOfDetail;
    unsigned char type;
};

struct _GEOMuninMeshKey {
    unsigned int pointId:64;
    unsigned int buildId:32;
    unsigned int bucketId:16;
    unsigned int cameraId:5;
    unsigned int lod:3;
};

struct _GEORegionalResourceKey {
    unsigned int index:32;
    unsigned int scenarios:8;
    unsigned int type:6;
    unsigned int pixelSize:8;
    unsigned int textScale:8;
};

struct _GEOSputnikMetadataKey {
    unsigned int part:32;
    unsigned int region:24;
    unsigned int type:14;
    unsigned int pixelSize:8;
};

struct _GEOStandardTileKey {
    unsigned int reserved:40;
    unsigned int z:6;
    unsigned int x:26;
    unsigned int y:26;
    unsigned int type:14;
    unsigned int pixelSize:4;
    unsigned int textScale:4;
};

struct _GEOTileKey {
    unsigned int provider:7;
    unsigned int expires:1;
    union {
        struct _GEOStandardTileKey standard;
        struct _GEORegionalResourceKey regional;
        struct _GEOSputnikMetadataKey sputnikMetadata;
        struct _GEOFlyoverKey flyover;
        struct _GEOTransitLineSelectionKey transitLineSelection;
        struct _GEOTileOverlayKey tileOverlay;
        struct _GEOIdentifiedResourceKey identifiedResource;
        struct _GEOMuninMeshKey muninMesh;
    } ;
};

struct _GEOTileOverlayKey {
    unsigned int z:6;
    unsigned int x:26;
    unsigned int y:26;
    unsigned int contentScale:8;
    unsigned int providerId:32;
};

struct _GEOTransitLineSelectionKey {
    unsigned int z:6;
    unsigned int x:25;
    unsigned int y:25;
    unsigned int muid:64;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, void *>*> *__next_;
};

struct __list_node_base<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> {
    struct __list_node_base<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> *__prev_;
    struct __list_node_base<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> *__next_;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct deque<double, std::__1::allocator<double>> {
    struct __split_buffer<double *, std::__1::allocator<double *>> {
        double **__first_;
        double **__begin_;
        double **__end_;
        struct __compressed_pair<double **, std::__1::allocator<double *>> {
            double **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::__1::allocator<double>> {
        unsigned long long __value_;
    } __size_;
};

struct list<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, std::__1::allocator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>>> {
    struct __list_node_base<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *> __end_;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>> {
        unsigned long long __value_;
    } __size_alloc_;
};

struct mutex {
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } __m_;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::allocator<std::__1::pair<const geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>>> {
    struct __hash_table<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, std::__1::__unordered_map_hasher<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, true>, std::__1::__unordered_map_equal<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, true>, std::__1::allocator<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, std::__1::hash<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__list_iterator<geo::detail::_CacheItem<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, NSDictionary *, _value_ptr>, void *>>, std::__1::equal_to<geo::_retain_ptr<_MKPinAnnotationViewImageCacheKey *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_set<_MKAnnotationViewPair, std::__1::hash<_MKAnnotationViewPair>, std::__1::equal_to<_MKAnnotationViewPair>, std::__1::allocator<_MKAnnotationViewPair>> {
    struct __hash_table<_MKAnnotationViewPair, std::__1::hash<_MKAnnotationViewPair>, std::__1::equal_to<_MKAnnotationViewPair>, std::__1::allocator<_MKAnnotationViewPair>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *>*>, std::__1::allocator<std::__1::__hash_node<_MKAnnotationViewPair, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<_MKAnnotationViewPair, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::hash<_MKAnnotationViewPair>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::equal_to<_MKAnnotationViewPair>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<MKAnnotationView *, std::__1::allocator<MKAnnotationView *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<MKAnnotationView **, std::__1::allocator<MKAnnotationView *>> {
        id *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool abbreviatedUnits;
    long long distanceDetailLevel;
    _Bool spoken;
    _Bool dropTimestampAMPM;
    _Bool rightToLeft;
    double referenceDate;
} CDStruct_57af2063;

typedef struct {
    _Bool _field1;
} CDStruct_b31ca263;

typedef struct {
    unsigned char timePeriod;
    unsigned char overlayType;
    unsigned char applicationState;
    unsigned char searchResultsType;
    _Bool mapHasLabels;
} CDStruct_80aa614a;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
} CDStruct_7523a67d;

typedef struct {
    unsigned int _field1;
    void *_field2;
} CDStruct_35640fce;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int hasCoordinate:1;
    unsigned int hasTitle:1;
    unsigned int hasSubtitle:1;
} CDStruct_81fb2dc1;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
} CDStruct_39925896;

typedef struct {
    long long x;
    long long y;
    long long z;
    double contentScaleFactor;
} CDStruct_cbb88d5e;

typedef struct {
    double _field1;
    struct CLLocationCoordinate2D _field2;
} CDStruct_c0a8b48f;

typedef struct {
    long long _field1;
    struct CLLocationCoordinate2D _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
    id _field5;
    _Bool _field6;
} CDStruct_089f5ccb;

typedef struct {
    CDStruct_34734122 origin;
    CDStruct_8caa76fc size;
} CDStruct_02837cd9;

typedef struct {
    struct CGSize _field1;
    double _field2;
    double _field3;
    double _field4;
    struct CGSize _field5;
    double _field6;
    double _field7;
    double _field8;
    long long _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
    double _field17;
    double _field18;
    double _field19;
    double _field20;
    double _field21;
    double _field22;
    double _field23;
    double _field24;
    double _field25;
    _Bool _field26;
    double _field27;
    double _field28;
    double _field29;
    _Bool _field30;
    _Bool _field31;
} CDStruct_715e5093;

typedef struct {
    struct CLLocationCoordinate2D center;
    CDStruct_951efa70 span;
} CDStruct_b7cb895d;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    double latitudeDelta;
    double longitudeDelta;
} CDStruct_951efa70;

typedef struct {
    double width;
    double height;
} CDStruct_8caa76fc;

typedef struct {
    double x;
    double y;
} CDStruct_34734122;

