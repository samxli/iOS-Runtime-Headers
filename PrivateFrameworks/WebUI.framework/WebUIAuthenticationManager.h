/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class AuthenticationView, NSMutableArray, UIKeyboard, NSURLCredential;



@interface WebUIAuthenticationManager : NSObject 
{
    AuthenticationView *_authenticationView;
    NSMutableArray *_authenticationChallenges;
    NSURLCredential *_credentials;
    NSInteger _actionAfterDismissingView;
    id _delegate;
    BOOL _isShowingAuthenticationPanel;
    UIKeyboard *_keyboard;
    BOOL _isShowingKeyboard;
    BOOL _cannotUseAutomaticKeyboard;
}


- (id)authenticationView;
- (id)authenticationChallenge;
- (id)keyboard;
- (void)showKeyboard:(BOOL)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 inLayer:(id)arg3 belowLayer:(id)arg4;
- (id)keyboardSuperview;
- (struct CGPoint { float x1; float x2; })defaultKeyboardOrigin;
- (void)_showKeyboard;
- (void)_hideKeyboard;
- (void)setShowingAuthentication:(BOOL)arg1;
- (void)logInFromAuthenticationView:(id)arg1 withCredential:(id)arg2;
- (void)cancelFromAuthenticationView:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)addAuthenticationChallenge:(id)arg1;
- (void)removeAuthenticationChallenge:(id)arg1;
- (void)setUsesAutomaticKeyboard:(BOOL)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)animateLayer:(id)arg1 fromPoint:(struct CGPoint { float x1; float x2; })arg2 toPoint:(struct CGPoint { float x1; float x2; })arg3 inLayer:(id)arg4 belowLayer:(id)arg5 currentAnimation:(NSInteger)arg6;

@end
