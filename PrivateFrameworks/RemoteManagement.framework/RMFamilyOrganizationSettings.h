/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMFamilyOrganizationSettings : RMCoreOrganizationSettings {
    RMVersionVector * _cachedVersionVector;
}

@property (nonatomic) bool isDirty;
@property (nonatomic) bool isManaged;
@property (nonatomic, retain) RMFamilyOrganization *organization;
@property (nonatomic, copy) NSString *passcode;
@property (nonatomic) bool shareWebUsage;
@property (nonatomic, readonly, copy) NSData *unmodeled_versionVector;
@property (nonatomic, copy) RMVersionVector *versionVector;

- (void).cxx_destruct;
- (void)awakeFromInsert;
- (id)computeUniqueIdentifier;
- (id)dictionaryRepresentation;
- (void)didChangeValueForKey:(id)arg1;
- (void)setIsManaged:(bool)arg1;
- (void)setPasscode:(id)arg1;
- (void)setVersionVector:(id)arg1;
- (id)unmodeled_versionVector;
- (bool)updateWithDictionaryRepresentation:(id)arg1;
- (id)versionVector;

@end
