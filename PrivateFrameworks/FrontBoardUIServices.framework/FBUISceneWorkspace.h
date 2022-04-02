/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
 */

@interface FBUISceneWorkspace : NSObject <BSDescriptionProviding, FBUISceneWorkspace> {
    NSString * _identifier;
    NSMutableDictionary * _scenesByName;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSSet *scenes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1;
- (void)activateScene:(id)arg1 withTransitionContext:(id)arg2;
- (id)callOutQueue;
- (id)createSceneWithName:(id)arg1 specification:(id)arg2;
- (void)deactivateScene:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)destroyScene:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidate;
- (id)sceneManager:(id)arg1 surrogateForSceneWithIdentifier:(id)arg2;
- (id)sceneWithName:(id)arg1;
- (id)scenes;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
