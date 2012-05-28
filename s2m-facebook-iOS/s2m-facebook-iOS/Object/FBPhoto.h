/*
 Copyright 2012 SinnerSchrader Mobile GmbH.
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */


#import "FBBaseObject.h"
@class FBTagList;

@interface FBPhoto : FBBaseObject
@property (nonatomic, retain)   NSString            *icon;
@property (nonatomic, retain)   NSString            *link;
@property (nonatomic, retain)   NSString            *picture;
@property (nonatomic, retain)   NSString            *source;
@property (nonatomic, assign)   NSInteger           width;
@property (nonatomic, assign)   NSInteger           height;
@property (nonatomic, assign)   NSInteger           position;
@property (nonatomic, retain, readonly)   FBTagList           *tags;
@property (nonatomic, retain, readonly)   NSMutableArray      *images;
@end
