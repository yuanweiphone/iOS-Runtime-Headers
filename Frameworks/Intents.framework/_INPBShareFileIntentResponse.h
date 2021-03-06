/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBShareFileIntentResponse : PBCodable <NSCopying> {
    BOOL  _confirm;
    struct { 
        unsigned int shareMode : 1; 
        unsigned int confirm : 1; 
        unsigned int success : 1; 
    }  _has;
    NSMutableArray * _recipients;
    int  _shareMode;
    BOOL  _success;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) BOOL confirm;
@property (nonatomic) BOOL hasConfirm;
@property (nonatomic) BOOL hasShareMode;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic, retain) NSMutableArray *recipients;
@property (nonatomic) int shareMode;
@property (nonatomic) BOOL success;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)options;
+ (Class)recipientsType;

- (void).cxx_destruct;
- (int)StringAsShareMode:(id)arg1;
- (void)addRecipients:(id)arg1;
- (void)clearRecipients;
- (BOOL)confirm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasConfirm;
- (BOOL)hasShareMode;
- (BOOL)hasSuccess;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recipients;
- (id)recipientsAtIndex:(unsigned int)arg1;
- (unsigned int)recipientsCount;
- (void)setConfirm:(BOOL)arg1;
- (void)setHasConfirm:(BOOL)arg1;
- (void)setHasShareMode:(BOOL)arg1;
- (void)setHasSuccess:(BOOL)arg1;
- (void)setRecipients:(id)arg1;
- (void)setShareMode:(int)arg1;
- (void)setSuccess:(BOOL)arg1;
- (int)shareMode;
- (id)shareModeAsString:(int)arg1;
- (BOOL)success;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (id)fromJSONProtoDictionary:(id)arg1;

- (id)toJSONProtoDictionary;

@end
