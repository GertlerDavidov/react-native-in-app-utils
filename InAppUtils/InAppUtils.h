#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

#import "RCTEventEmitter.h"
#import "RCTBridgeModule.h"

@interface InAppUtils : RCTEventEmitter <RCTBridgeModule, SKProductsRequestDelegate, SKPaymentTransactionObserver>

@end
