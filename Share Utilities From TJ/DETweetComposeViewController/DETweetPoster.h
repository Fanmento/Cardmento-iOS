//
//  DETweetPoster.h
//  DETweeter
//
//  Copyright (c) 2011 Double Encore, Inc. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
//  Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
//  Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer 
//  in the documentation and/or other materials provided with the distribution. Neither the name of the Double Encore Inc. nor the names of its 
//  contributors may be used to endorse or promote products derived from this software without specific prior written permission.
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
//  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS 
//  BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE 
//  GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT 
//  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

@protocol DETweetPosterDelegate;

@interface DETweetPoster : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>

@property(nonatomic, assign) id<DETweetPosterDelegate> delegate;

    // Class Methods
+ (NSArray *)accounts;

    // Public
- (void)postTweet:(NSString *)tweetText withImages:(NSArray *)images;
- (void)postTweet:(NSString *)tweetText withImages:(NSArray *)images fromAccount:(id)account;

@end


@protocol DETweetPosterDelegate <NSObject>

@optional
- (void)tweetSucceeded:(DETweetPoster *)tweetPoster;
- (void)tweetFailed:(DETweetPoster *)tweetPoster;
- (void)tweetFailedAuthentication:(DETweetPoster *)tweetPoster;

@end
