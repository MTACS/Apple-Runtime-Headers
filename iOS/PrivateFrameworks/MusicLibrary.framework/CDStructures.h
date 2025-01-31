//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGSize {
    double _field1;
    double _field2;
};

struct ML3ImportItem;

struct ML3VirtualTableDataSource;

struct SearchCriteriaList;

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __hash_node_base<std::__1::__hash_node<long long, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<long long, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *>*> *__next_;
};

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long>>> {
    struct __tree<std::__1::__value_type<unsigned int, unsigned long>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned long>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned long>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned long>, std::__1::less<unsigned int>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct shared_ptr<ML3ImportItem> {
    struct ML3ImportItem *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<ML3VirtualTableDataSource> {
    struct ML3VirtualTableDataSource *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct sqlite3_module {
    int _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    CDUnknownFunctionPointerType _field14;
    CDUnknownFunctionPointerType _field15;
    CDUnknownFunctionPointerType _field16;
    CDUnknownFunctionPointerType _field17;
    CDUnknownFunctionPointerType _field18;
    CDUnknownFunctionPointerType _field19;
    CDUnknownFunctionPointerType _field20;
    CDUnknownFunctionPointerType _field21;
    CDUnknownFunctionPointerType _field22;
    CDUnknownFunctionPointerType _field23;
    CDUnknownFunctionPointerType _field24;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<long long, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *>>> {
    struct __hash_table<std::__1::__hash_value_type<long long, NSString *>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, NSString *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, NSString *>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::hash<long long>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, NSString *>, std::__1::equal_to<long long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long>> {
    struct __hash_table<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>, std::__1::allocator<std::__1::__hash_node<long long, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<long long, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::hash<long long>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::equal_to<long long>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<long long, std::__1::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *__value_;
    } __end_cap_;
};

struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char *__begin_;
    char *__end_;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
    union {
        struct {
            void *_field1;
            unsigned int _field2;
        } _field1;
        struct SearchCriteriaList *_field2;
    } _field7;
} CDStruct_ca99c6a1;

// Ambiguous groups
typedef struct {
    unsigned int persistentId:1;
    unsigned int storeId:1;
} CDStruct_0ee5a09b;

typedef struct shared_ptr<ML3ImportItem> {
    struct ML3ImportItem *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_de333b55;

typedef struct shared_ptr<ML3VirtualTableDataSource> {
    struct ML3VirtualTableDataSource *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_c3e79333;

typedef struct unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long>> {
    struct __hash_table<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<long long, void *>*>, std::__1::allocator<std::__1::__hash_node<long long, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<long long, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::hash<long long>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::equal_to<long long>> {
            float __value_;
        } __p3_;
    } __table_;
} unordered_set_da619913;

typedef struct vector<long long, std::__1::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *__value_;
    } __end_cap_;
} vector_bbba3654;

