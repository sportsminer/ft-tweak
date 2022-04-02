/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface _AFExperimentConfigurationMutation : NSObject <AFExperimentConfigurationMutating> {
    AFExperimentConfiguration * _baseModel;
    AFExperimentGroup * _controlGroup;
    NSArray * _experimentGroups;
    NSString * _identifier;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasType : 1; 
        unsigned int hasIdentifier : 1; 
        unsigned int hasVersion : 1; 
        unsigned int hasControlGroup : 1; 
        unsigned int hasExperimentGroups : 1; 
        unsigned int hasSalt : 1; 
    }  _mutationFlags;
    NSString * _salt;
    long long  _type;
    NSString * _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setControlGroup:(id)arg1;
- (void)setExperimentGroups:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSalt:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setVersion:(id)arg1;

@end
