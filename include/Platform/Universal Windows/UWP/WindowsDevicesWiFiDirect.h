//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

// WindowsDevicesWiFiDirect.h
// Generated from winmd2objc

#pragma once

#ifndef OBJCUWP_WINDOWS_DEVICES_WIFIDIRECT_EXPORT
#define OBJCUWP_WINDOWS_DEVICES_WIFIDIRECT_EXPORT __declspec(dllimport)
#ifndef IN_OBJCUWP_BUILD
#pragma comment(lib, "ObjCUWP_Windows_Devices_WiFiDirect.lib")
#endif
#endif
#include <UWP/interopBase.h>

@class WDWWiFiDirectDevice, WDWWiFiDirectConnectionParameters, WDWWiFiDirectInformationElement, WDWWiFiDirectLegacySettings, WDWWiFiDirectAdvertisement, WDWWiFiDirectAdvertisementPublisherStatusChangedEventArgs, WDWWiFiDirectAdvertisementPublisher, WDWWiFiDirectConnectionRequest, WDWWiFiDirectConnectionRequestedEventArgs, WDWWiFiDirectConnectionListener;
@protocol WDWIWiFiDirectDeviceStatics, WDWIWiFiDirectDeviceStatics2, WDWIWiFiDirectInformationElementStatics, WDWIWiFiDirectInformationElement, WDWIWiFiDirectLegacySettings, WDWIWiFiDirectAdvertisement, WDWIWiFiDirectAdvertisement2, WDWIWiFiDirectAdvertisementPublisherStatusChangedEventArgs, WDWIWiFiDirectAdvertisementPublisher, WDWIWiFiDirectConnectionParametersStatics, WDWIWiFiDirectConnectionParameters, WDWIWiFiDirectConnectionParameters2, WDWIWiFiDirectConnectionRequestedEventArgs, WDWIWiFiDirectConnectionListener, WDWIWiFiDirectDevice, WDWIWiFiDirectConnectionRequest;

// Windows.Devices.WiFiDirect.WiFiDirectConnectionStatus
enum _WDWWiFiDirectConnectionStatus {
    WDWWiFiDirectConnectionStatusDisconnected = 0,
    WDWWiFiDirectConnectionStatusConnected = 1,
};
typedef unsigned WDWWiFiDirectConnectionStatus;

// Windows.Devices.WiFiDirect.WiFiDirectError
enum _WDWWiFiDirectError {
    WDWWiFiDirectErrorSuccess = 0,
    WDWWiFiDirectErrorRadioNotAvailable = 1,
    WDWWiFiDirectErrorResourceInUse = 2,
};
typedef unsigned WDWWiFiDirectError;

// Windows.Devices.WiFiDirect.WiFiDirectDeviceSelectorType
enum _WDWWiFiDirectDeviceSelectorType {
    WDWWiFiDirectDeviceSelectorTypeDeviceInterface = 0,
    WDWWiFiDirectDeviceSelectorTypeAssociationEndpoint = 1,
};
typedef unsigned WDWWiFiDirectDeviceSelectorType;

// Windows.Devices.WiFiDirect.WiFiDirectAdvertisementListenStateDiscoverability
enum _WDWWiFiDirectAdvertisementListenStateDiscoverability {
    WDWWiFiDirectAdvertisementListenStateDiscoverabilityNone = 0,
    WDWWiFiDirectAdvertisementListenStateDiscoverabilityNormal = 1,
    WDWWiFiDirectAdvertisementListenStateDiscoverabilityIntensive = 2,
};
typedef unsigned WDWWiFiDirectAdvertisementListenStateDiscoverability;

// Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisherStatus
enum _WDWWiFiDirectAdvertisementPublisherStatus {
    WDWWiFiDirectAdvertisementPublisherStatusCreated = 0,
    WDWWiFiDirectAdvertisementPublisherStatusStarted = 1,
    WDWWiFiDirectAdvertisementPublisherStatusStopped = 2,
    WDWWiFiDirectAdvertisementPublisherStatusAborted = 3,
};
typedef unsigned WDWWiFiDirectAdvertisementPublisherStatus;

// Windows.Devices.WiFiDirect.WiFiDirectConfigurationMethod
enum _WDWWiFiDirectConfigurationMethod {
    WDWWiFiDirectConfigurationMethodProvidePin = 0,
    WDWWiFiDirectConfigurationMethodDisplayPin = 1,
    WDWWiFiDirectConfigurationMethodPushButton = 2,
};
typedef unsigned WDWWiFiDirectConfigurationMethod;

// Windows.Devices.WiFiDirect.WiFiDirectPairingProcedure
enum _WDWWiFiDirectPairingProcedure {
    WDWWiFiDirectPairingProcedureGroupOwnerNegotiation = 0,
    WDWWiFiDirectPairingProcedureInvitation = 1,
};
typedef unsigned WDWWiFiDirectPairingProcedure;

#include "WindowsSecurityCredentials.h"
#include "WindowsStorageStreams.h"
#include "WindowsDevicesEnumeration.h"
#include "WindowsFoundation.h"
#include "WindowsNetworking.h"

#import <Foundation/Foundation.h>

// Windows.Foundation.IClosable
#ifndef __WFIClosable_DEFINED__
#define __WFIClosable_DEFINED__

@protocol WFIClosable
- (void)close;
@end

OBJCUWP_WINDOWS_DEVICES_WIFIDIRECT_EXPORT
@interface WFIClosable : RTObject <WFIClosable>
@end

#endif // __WFIClosable_DEFINED__

// Windows.Devices.WiFiDirect.WiFiDirectDevice
#ifndef __WDWWiFiDirectDevice_DEFINED__
#define __WDWWiFiDirectDevice_DEFINED__

OBJCUWP_WINDOWS_DEVICES_WIFIDIRECT_EXPORT
@interface WDWWiFiDirectDevice : RTObject <WFIClosable>
+ (NSString *)getDeviceSelector:(WDWWiFiDirectDeviceSelectorType)type;
+ (void)fromIdAsync:(NSString *)deviceId connectionParameters:(WDWWiFiDirectConnectionParameters*)connectionParameters success:(void (^)(WDWWiFiDirectDevice*))success failure:(void (^)(NSError*))failure;
+ (NSString *)getDeviceSelector;
+ (void)fromIdAsync:(NSString *)deviceId success:(void (^)(WDWWiFiDirectDevice*))success failure:(void (^)(NSError*))failure;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDWWiFiDirectConnectionStatus connectionStatus;
@property (readonly) NSString * deviceId;
- (EventRegistrationToken)addConnectionStatusChangedEvent:(void(^)(WDWWiFiDirectDevice*, RTObject*))del;
- (void)removeConnectionStatusChangedEvent:(EventRegistrationToken)tok;
- (NSArray* /* WNEndpointPair* */)getConnectionEndpointPairs;
- (void)close;
@end

#endif // __WDWWiFiDirectDevice_DEFINED__

// Windows.Devices.Enumeration.IDevicePairingSettings
#ifndef __WDEIDevicePairingSettings_DEFINED__
#define __WDEIDevicePairingSettings_DEFINED__

@protocol WDEIDevicePairingSettings
@end

OBJCUWP_WINDOWS_DEVICES_WIFIDIRECT_EXPORT
@interface WDEIDevicePairingSettings : RTObject <WDEIDevicePairingSettings>
@end

#endif // __WDEIDevicePairingSettings_DEFINED__

// Windows.Devices.WiFiDirect.WiFiDirectConnectionParameters
#ifndef __WDWWiFiDirectConnectionParameters_DEFINED__
#define __WDWWiFiDirectConnectionParameters_DEFINED__

OBJCUWP_WINDOWS_DEVICES_WIFIDIRECT_EXPORT
@interface WDWWiFiDirectConnectionParameters : RTObject <WDEIDevicePairingSettings>
+ (WDEDevicePairingKinds)getDevicePairingKinds:(WDWWiFiDirectConfigurationMethod)configurationMethod;
+ (instancetype)make ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property int16_t groupOwnerIntent;
@property WDWWiFiDirectPairingProcedure preferredPairingProcedure;
@property (readonly) NSMutableArray* /* WDWWiFiDirectConfigurationMethod */ preferenceOrderedConfigurationMethods;
@end

#endif // __WDWWiFiDirectConnectionParameters_DEFINED__

// Windows.Devices.WiFiDirect.WiFiDirectInformationElement
#ifndef __WDWWiFiDirectInformationElement_DEFINED__
#define __WDWWiFiDirectInformationElement_DEFINED__

OBJCUWP_WINDOWS_DEVICES_WIFIDIRECT_EXPORT
@interface WDWWiFiDirectInformationElement : RTObject
+ (NSMutableArray* /* WDWWiFiDirectInformationElement* */)createFromBuffer:(RTObject<WSSIBuffer>*)buffer;
+ (NSMutableArray* /* WDWWiFiDirectInformationElement* */)createFromDeviceInformation:(WDEDeviceInformation*)deviceInformation;
+ (instancetype)make ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (retain) RTObject<WSSIBuffer>* value;
@property uint8_t ouiType;
@property (retain) RTObject<WSSIBuffer>* oui;
@end

#endif // __WDWWiFiDirectInformationElement_DEFINED__

// Windows.Devices.WiFiDirect.WiFiDirectLegacySettings
#ifndef __WDWWiFiDirectLegacySettings_DEFINED__
#define __WDWWiFiDirectLegacySettings_DEFINED__

OBJCUWP_WINDOWS_DEVICES_WIFIDIRECT_EXPORT
@interface WDWWiFiDirectLegacySettings : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (retain) NSString * ssid;
@property (retain) WSCPasswordCredential* passphrase;
@property BOOL isEnabled;
@end

#endif // __WDWWiFiDirectLegacySettings_DEFINED__

// Windows.Devices.WiFiDirect.WiFiDirectAdvertisement
#ifndef __WDWWiFiDirectAdvertisement_DEFINED__
#define __WDWWiFiDirectAdvertisement_DEFINED__

OBJCUWP_WINDOWS_DEVICES_WIFIDIRECT_EXPORT
@interface WDWWiFiDirectAdvertisement : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property WDWWiFiDirectAdvertisementListenStateDiscoverability listenStateDiscoverability;
@property BOOL isAutonomousGroupOwnerEnabled;
@property (retain) NSMutableArray* /* WDWWiFiDirectInformationElement* */ informationElements;
@property (readonly) WDWWiFiDirectLegacySettings* legacySettings;
@property (readonly) NSMutableArray* /* WDWWiFiDirectConfigurationMethod */ supportedConfigurationMethods;
@end

#endif // __WDWWiFiDirectAdvertisement_DEFINED__

// Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisherStatusChangedEventArgs
#ifndef __WDWWiFiDirectAdvertisementPublisherStatusChangedEventArgs_DEFINED__
#define __WDWWiFiDirectAdvertisementPublisherStatusChangedEventArgs_DEFINED__

OBJCUWP_WINDOWS_DEVICES_WIFIDIRECT_EXPORT
@interface WDWWiFiDirectAdvertisementPublisherStatusChangedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDWWiFiDirectError error;
@property (readonly) WDWWiFiDirectAdvertisementPublisherStatus status;
@end

#endif // __WDWWiFiDirectAdvertisementPublisherStatusChangedEventArgs_DEFINED__

// Windows.Devices.WiFiDirect.WiFiDirectAdvertisementPublisher
#ifndef __WDWWiFiDirectAdvertisementPublisher_DEFINED__
#define __WDWWiFiDirectAdvertisementPublisher_DEFINED__

OBJCUWP_WINDOWS_DEVICES_WIFIDIRECT_EXPORT
@interface WDWWiFiDirectAdvertisementPublisher : RTObject
+ (instancetype)make ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDWWiFiDirectAdvertisement* advertisement;
@property (readonly) WDWWiFiDirectAdvertisementPublisherStatus status;
- (EventRegistrationToken)addStatusChangedEvent:(void(^)(WDWWiFiDirectAdvertisementPublisher*, WDWWiFiDirectAdvertisementPublisherStatusChangedEventArgs*))del;
- (void)removeStatusChangedEvent:(EventRegistrationToken)tok;
- (void)start;
- (void)stop;
@end

#endif // __WDWWiFiDirectAdvertisementPublisher_DEFINED__

// Windows.Devices.WiFiDirect.WiFiDirectConnectionRequest
#ifndef __WDWWiFiDirectConnectionRequest_DEFINED__
#define __WDWWiFiDirectConnectionRequest_DEFINED__

OBJCUWP_WINDOWS_DEVICES_WIFIDIRECT_EXPORT
@interface WDWWiFiDirectConnectionRequest : RTObject <WFIClosable>
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
@property (readonly) WDEDeviceInformation* deviceInformation;
- (void)close;
@end

#endif // __WDWWiFiDirectConnectionRequest_DEFINED__

// Windows.Devices.WiFiDirect.WiFiDirectConnectionRequestedEventArgs
#ifndef __WDWWiFiDirectConnectionRequestedEventArgs_DEFINED__
#define __WDWWiFiDirectConnectionRequestedEventArgs_DEFINED__

OBJCUWP_WINDOWS_DEVICES_WIFIDIRECT_EXPORT
@interface WDWWiFiDirectConnectionRequestedEventArgs : RTObject
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
- (WDWWiFiDirectConnectionRequest*)getConnectionRequest;
@end

#endif // __WDWWiFiDirectConnectionRequestedEventArgs_DEFINED__

// Windows.Devices.WiFiDirect.WiFiDirectConnectionListener
#ifndef __WDWWiFiDirectConnectionListener_DEFINED__
#define __WDWWiFiDirectConnectionListener_DEFINED__

OBJCUWP_WINDOWS_DEVICES_WIFIDIRECT_EXPORT
@interface WDWWiFiDirectConnectionListener : RTObject
+ (instancetype)make ACTIVATOR;
#if defined(__cplusplus)
+ (instancetype)createWith:(IInspectable*)obj;
#endif
- (EventRegistrationToken)addConnectionRequestedEvent:(void(^)(WDWWiFiDirectConnectionListener*, WDWWiFiDirectConnectionRequestedEventArgs*))del;
- (void)removeConnectionRequestedEvent:(EventRegistrationToken)tok;
@end

#endif // __WDWWiFiDirectConnectionListener_DEFINED__

