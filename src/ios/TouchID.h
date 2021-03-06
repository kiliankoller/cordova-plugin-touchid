#import <Cordova/CDVPlugin.h>

@interface TouchID :CDVPlugin

- (void) isAvailable:(CDVInvokedUrlCommand*)command;

- (void) verifyFingerprint:(CDVInvokedUrlCommand*)command;

- (void) verifyFingerprintWithCustomPasswordFallback:(CDVInvokedUrlCommand*)command;

- (void) verifyFingerprintWithNoFallback:(CDVInvokedUrlCommand*)command;

@end