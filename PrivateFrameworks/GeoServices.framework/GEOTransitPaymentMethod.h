/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitPaymentMethod : PBCodable <NSCopying> {
    NSString * _identifier;
}

@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic, retain) NSString *identifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIdentifier;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
