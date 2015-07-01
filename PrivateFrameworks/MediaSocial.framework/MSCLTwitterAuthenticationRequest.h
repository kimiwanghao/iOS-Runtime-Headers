/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLTwitterAuthenticationRequest : NSObject {
    ACAccount *_account;
    id /* block */ _responseBlock;
}

- (void).cxx_destruct;
- (void)_authenticateAccount:(id)arg1 withHandler:(id /* block */)arg2;
- (id)_consumerKey;
- (id)_consumerSecret;
- (void)_finishWithAuthenticatedAccount:(id)arg1 error:(id)arg2;
- (id)initWithAccount:(id)arg1;
- (void)startWithResponseBlock:(id /* block */)arg1;

@end
