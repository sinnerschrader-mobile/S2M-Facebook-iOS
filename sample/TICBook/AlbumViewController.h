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

#import <UIKit/UIKit.h>
#import <S2M-Facebook/FBConnector.h>

@interface AlbumViewController : UITableViewController

@property (atomic, retain) NSMutableArray    *photos;
@property (atomic, retain) NSMutableDictionary    *photoDic;
@property (atomic, retain) NSMutableArray    *requests;
@property (nonatomic, retain) FBAlbum         *currentAlbum;
@property (nonatomic, retain) FBUser            *currentUser;

@end
