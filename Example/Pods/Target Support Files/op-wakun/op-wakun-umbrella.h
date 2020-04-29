#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "OPAddress.h"
#import "OPCard.h"
#import "Openpay.h"
#import "OPToken.h"

FOUNDATION_EXPORT double op_wakunVersionNumber;
FOUNDATION_EXPORT const unsigned char op_wakunVersionString[];

