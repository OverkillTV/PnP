/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Corporation. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#ifndef MSGRAPHSERVICEDEVICEFETCHER_H
#define MSGRAPHSERVICEDEVICEFETCHER_H

#import "MSGraphServiceModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSGraphServiceAlternativeSecurityIdCollectionFetcher;
@class MSGraphServiceDirectoryObjectCollectionFetcher;
@class MSGraphServiceDirectoryObjectCollectionFetcher;
@class MSGraphServiceDirectoryObjectFetcher;
@class MSGraphServiceDeviceOperations;


/** MSGraphServiceDeviceFetcher
 *
 */
@interface MSGraphServiceDeviceFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSGraphServiceDeviceOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSGraphServiceDevice *, MSOrcError *))callback;
- (void)update:(MSGraphServiceDevice *)device callback:(void (^)(MSGraphServiceDevice *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSGraphServiceDeviceFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphServiceDeviceFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphServiceDeviceFetcher *)select:(NSString *)params;
- (MSGraphServiceDeviceFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=registeredOwners) MSGraphServiceDirectoryObjectCollectionFetcher *registeredOwners;

- (MSGraphServiceDirectoryObjectFetcher *)registeredOwnersById:(id)identifier;

@property (strong, nonatomic, readonly, getter=registeredUsers) MSGraphServiceDirectoryObjectCollectionFetcher *registeredUsers;

- (MSGraphServiceDirectoryObjectFetcher *)registeredUsersById:(id)identifier;


@end

#endif