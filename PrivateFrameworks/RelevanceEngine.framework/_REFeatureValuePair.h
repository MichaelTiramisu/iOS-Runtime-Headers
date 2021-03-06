/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _REFeatureValuePair : NSObject {
    REFeature * _feature;
    unsigned long long  _index;
    NSArray * _rootFeatures;
    REFeatureValue * _value;
}

@property (nonatomic, readonly) REFeature *feature;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) NSArray *rootFeatures;
@property (nonatomic, readonly) REFeatureValue *value;

- (void).cxx_destruct;
- (id)feature;
- (unsigned long long)hash;
- (unsigned long long)index;
- (id)initWithFeature:(id)arg1 value:(id)arg2 index:(unsigned long long)arg3 rootFeatures:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)rootFeatures;
- (id)value;

@end
