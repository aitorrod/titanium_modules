
//
// Copyright 2011 Box.net, Inc.
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.
//

#import "BoxNetworkOperation.h"

@interface BoxAPIOperation : BoxNetworkOperation {
	NSString *_successCode;	
	NSString *destPath;
}

@property (readonly, retain) NSString *successCode;
@property (retain, setter=setPath:, getter=path) NSString *sourcePath;
@property (retain) NSString *destPath;

- (NSArray *)resultKeysOfInterest;
- (void)processResult:(NSDictionary *)result;
- (void)processStatusCode:(NSString *)status;
- (void)processErrorCode:(NSString *)status;

@end
