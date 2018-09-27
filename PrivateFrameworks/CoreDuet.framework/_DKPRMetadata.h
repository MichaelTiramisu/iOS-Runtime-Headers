/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPRMetadata : PBCodable <NSCopying> {
    NSMutableArray * _entrys;
}

@property (nonatomic, retain) NSMutableArray *entrys;

+ (Class)entryType;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (void)clearEntrys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entryAtIndex:(unsigned long long)arg1;
- (id)entrys;
- (unsigned long long)entrysCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntrys:(id)arg1;
- (void)writeTo:(id)arg1;

@end