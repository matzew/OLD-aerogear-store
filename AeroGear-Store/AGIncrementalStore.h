/*
 * JBoss, Home of Professional Open Source.
 * Copyright 2012 Red Hat, Inc., and individual contributors
 * as indicated by the @author tags.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>
#import "AFIncrementalStore.h"

#import <AeroGear/AeroGear.h>

@protocol AGCoreDataAdapter;

@interface AGIncrementalStore : AFIncrementalStore

-(NSURL *) baseURL;
+(NSString *) modelName;
+(NSString *) extension;


@end


/**
 The `AGCoreDataAdapter` protocol defines the methods used by the AeroGear IncrementalStore client to interract with the associated web services of an `AFIncrementalStore`.
 */
@protocol AGCoreDataAdapter <NSObject>

//// I really need the baseURL - for now
////-(id<AGPipeConfig>) pipeConfiguration;
//-(NSURL *) baseURL;
//
////these two are more a "model config"
//-(NSString *) modelName;
//-(NSString *) extension;



@end
