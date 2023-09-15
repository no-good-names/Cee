#ifndef __MAIN_TYPE__
#define __MAIN_TYPE__

#if defined(__cplusplus) || defined(__bool_true_false_are_defined)
typedef bool boolean;
#else
typedef enum { false, true } boolean;
#endif

#endif //__MAIN_TYPE__